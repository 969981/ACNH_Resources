
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffe1c8 : 0x028a62cc */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_028a49b0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  undefined *puVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  void *pvVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  uint *puVar20;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  int iVar21;
  uint uVar22;
  long lVar23;
  undefined4 uVar24;
  undefined4 *puVar25;
  int local_1e38;
  undefined4 uStack_1e34;
  undefined4 local_1e30;
  uint local_1e2c;
  uint local_1e28;
  int iStack_1e24;
  undefined8 local_1e20;
  undefined8 local_1e18;
  uint *local_1e10;
  uint local_16c4;
  uint local_16c0;
  uint local_16bc;
  int local_16b8;
  undefined8 local_16b0;
  int *local_16a8 [234];
  uint local_f54;
  uint local_f50;
  uint local_f4c;
  int local_f48;
  int local_f3c;
  undefined *local_f38;
  undefined1 auStack_f30 [1876];
  uint local_7dc;
  uint local_7d8;
  uint local_7d4;
  int local_7d0;
  int local_7c4;
  undefined8 local_7c0;
  undefined8 local_7b8;
  
  local_7c4._0_1_ = 0;
  FUN_01b02920(&local_7c4,param_2 + 0x10,0);
  local_f38 = PTR_DAT_04bbfe60 + 0x10;
  memset(auStack_f30,0,0x754);
  uVar10 = nn::os::GetSystemTick();
  local_7dc = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 1;
  local_7d8 = (local_7dc ^ local_7dc >> 0x1e) * 0x6c078965 + 2;
  local_7d4 = (local_7d8 ^ local_7d8 >> 0x1e) * 0x6c078965 + 3;
  local_7d0 = (local_7d4 ^ local_7d4 >> 0x1e) * 0x6c078965 + 4;
  pvVar16 = (void *)FUN_01a451fc(&local_f38);
  memset(pvVar16,0,0x754);
  local_1e20._0_4_ = 0x28;
  local_16b0 = &PTR_FUN_049ff4e8;
  local_16a8[0] = (int *)&local_1e20;
  FUN_008a1ba0(&local_f38,&local_16b0);
  local_16b0 = &PTR_FUN_049ff4e8;
  local_1e20._0_4_ = 0x2a;
  local_16a8[0] = (int *)&local_1e20;
  FUN_008a1ba0(&local_f38,&local_16b0);
  local_16b0 = &PTR_FUN_049ff4e8;
  local_1e20._0_4_ = 299;
  local_16a8[0] = (int *)&local_1e20;
  FUN_008a1ba0(&local_f38,&local_16b0);
  local_16b0 = &PTR_FUN_049ff4e8;
  local_1e20._0_4_ = 300;
  local_16a8[0] = (int *)&local_1e20;
  FUN_008a1ba0(&local_f38,&local_16b0);
  local_16b0 = &PTR_FUN_049ff4e8;
  local_1e20._0_4_ = 0x12d;
  local_16a8[0] = (int *)&local_1e20;
  FUN_008a1ba0(&local_f38,&local_16b0);
  local_16b0 = &PTR_FUN_049ff4e8;
  local_1e20._0_4_ = 0x12e;
  local_16a8[0] = (int *)&local_1e20;
  FUN_008a1ba0(&local_f38,&local_16b0);
  local_16b0 = &PTR_FUN_049ff4e8;
  local_1e20._0_4_ = 0x12f;
  local_16a8[0] = (int *)&local_1e20;
  FUN_008a1ba0(&local_f38,&local_16b0);
  local_16b0 = &PTR_FUN_049ff4e8;
  local_1e20._0_4_ = 0x130;
  local_16a8[0] = (int *)&local_1e20;
  FUN_008a1ba0(&local_f38,&local_16b0);
  local_16b0 = &PTR_FUN_049ff4e8;
  local_1e20._0_4_ = 0x131;
  local_16a8[0] = (int *)&local_1e20;
  FUN_008a1ba0(&local_f38,&local_16b0);
  local_16b0 = &PTR_FUN_049ff4e8;
  local_1e20 = (undefined **)CONCAT44(local_1e20._4_4_,0x2d);
  local_16a8[0] = (int *)&local_1e20;
  FUN_008a1ba0(&local_f38,&local_16b0);
  puVar8 = PTR_DAT_04bb43c0;
  local_16b0 = &PTR_FUN_049ff740;
  local_16a8[0] = (int *)CONCAT44(local_16a8[0]._4_4_,9999);
  uVar10 = 0;
  do {
    (**(code **)(local_f38 + 0x10))(&local_1e20,&local_f38,uVar10);
    lVar17 = (**(code **)(local_f38 + 0x20))(&local_f38);
    uVar13 = 1 << (ulong)(uVar10 & 0x1f);
    if ((*(uint *)(lVar17 + (ulong)(uVar10 >> 5) * 4) & uVar13) != 0) {
      lVar17 = *(long *)puVar8;
      uVar11 = FUN_0277d6c4(&local_1e20);
      if (*(long *)puVar8 != 0) {
        lVar17 = *(long *)(lVar17 + 0x57e58);
        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
        if (((uVar11 < *(uint *)(lVar17 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) &&
           (uVar18 = (*(code *)*local_16b0)(&local_16b0,&local_1e20), (uVar18 & 1) != 0))
        goto LAB_028a4c04;
      }
      lVar17 = (**(code **)(local_f38 + 0x18))(&local_f38);
      lVar19 = (ulong)(uVar10 >> 5) * 4;
      *(uint *)(lVar17 + lVar19) = *(uint *)(lVar17 + lVar19) & (uVar13 ^ 0xffffffff);
    }
LAB_028a4c04:
    uVar10 = uVar10 + 1;
  } while (uVar10 != 15000);
  local_f3c = 0;
  uVar18 = (ulong)local_1e20 >> 0x20;
  local_1e20 = (undefined **)((ulong)local_1e20 & 0xffffffff00000000);
  local_1e20 = (undefined **)CONCAT44((int)uVar18,6);
  local_16b0 = (undefined **)CONCAT44((int)((ulong)local_16b0 >> 0x20),6);
  local_f3c = 0x41;
  uVar10 = 0;
  local_16a8[0] = &local_f3c;
  local_16b0 = &PTR_FUN_049ff420;
  do {
    (**(code **)(local_f38 + 0x10))(&local_1e20,&local_f38,uVar10);
    lVar17 = (**(code **)(local_f38 + 0x20))(&local_f38);
    uVar13 = 1 << (ulong)(uVar10 & 0x1f);
    if ((*(uint *)(lVar17 + (ulong)(uVar10 >> 5) * 4) & uVar13) != 0) {
      lVar17 = *(long *)puVar8;
      uVar11 = FUN_0277d6c4(&local_1e20);
      if (*(long *)puVar8 != 0) {
        lVar17 = *(long *)(lVar17 + 0x57e58);
        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
        if (((uVar11 < *(uint *)(lVar17 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) &&
           (uVar18 = (*(code *)*local_16b0)(&local_16b0,&local_1e20), (uVar18 & 1) != 0))
        goto LAB_028a4da0;
      }
      lVar17 = (**(code **)(local_f38 + 0x18))(&local_f38);
      lVar19 = (ulong)(uVar10 >> 5) * 4;
      *(uint *)(lVar17 + lVar19) = *(uint *)(lVar17 + lVar19) & (uVar13 ^ 0xffffffff);
    }
LAB_028a4da0:
    uVar10 = uVar10 + 1;
  } while (uVar10 != 15000);
  local_16b0 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
  memset(local_16a8,0,0x754);
  uVar10 = nn::os::GetSystemTick();
  local_f54 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 1;
  local_f50 = (local_f54 ^ local_f54 >> 0x1e) * 0x6c078965 + 2;
  local_f4c = (local_f50 ^ local_f50 >> 0x1e) * 0x6c078965 + 3;
  local_f48 = (local_f4c ^ local_f4c >> 0x1e) * 0x6c078965 + 4;
  pvVar16 = (void *)(**(code **)((long)local_16b0 + 0x18))(&local_16b0);
  memset(pvVar16,0,0x754);
  local_7c0._0_4_ = 7;
  local_1e20 = &PTR_FUN_049ff538;
  local_1e18 = &local_7c0;
  FUN_008a1ba0(&local_16b0,&local_1e20);
  local_7c0 = (undefined **)CONCAT44(local_7c0._4_4_,5);
  local_1e20 = &PTR_FUN_049ff538;
  local_1e18 = &local_7c0;
  FUN_008a1ba0(&local_16b0,&local_1e20);
  pvVar16 = (void *)(**(code **)(local_f38 + 0x18))(&local_f38);
  lVar19 = (**(code **)((long)local_16b0 + 0x20))(&local_16b0);
  for (lVar17 = 0;
      *(uint *)((long)&local_1e20 + lVar17) =
           *(uint *)(lVar19 + lVar17) & *(uint *)((long)pvVar16 + lVar17), lVar17 != 0x750;
      lVar17 = lVar17 + 8) {
    *(uint *)((long)&local_1e20 + lVar17 + 4) =
         *(uint *)(lVar19 + lVar17 + 4) & *(uint *)((long)pvVar16 + lVar17 + 4);
  }
  memcpy(pvVar16,&local_1e20,0x754);
  *(uint *)((long)pvVar16 + 0x750) = *(uint *)((long)pvVar16 + 0x750) & 0xffffff;
  local_1e20 = &PTR_LAB_049ff3a8;
  memset(&local_1e18,0,0x754);
  uVar10 = nn::os::GetSystemTick();
  local_16c4 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 1;
  local_16c0 = (local_16c4 ^ local_16c4 >> 0x1e) * 0x6c078965 + 2;
  local_16bc = (local_16c0 ^ local_16c0 >> 0x1e) * 0x6c078965 + 3;
  local_16b8 = (local_16bc ^ local_16bc >> 0x1e) * 0x6c078965 + 4;
  pvVar16 = (void *)(*(code *)local_1e20[3])(&local_1e20);
  memset(pvVar16,0,0x754);
  local_1e30 = 0;
  local_7c0 = &PTR_FUN_049ff448;
  local_7b8 = &local_1e30;
  FUN_008a1ba0(&local_1e20,&local_7c0);
  local_7c0 = &PTR_FUN_049ff448;
  local_1e30 = 1;
  local_7b8 = &local_1e30;
  FUN_008a1ba0(&local_1e20,&local_7c0);
  local_7c0 = &PTR_FUN_049ff448;
  local_1e30 = 2;
  local_7b8 = &local_1e30;
  FUN_008a1ba0(&local_1e20,&local_7c0);
  pvVar16 = (void *)(**(code **)(local_f38 + 0x18))(&local_f38);
  lVar19 = (*(code *)local_1e20[4])(&local_1e20);
  for (lVar17 = 0;
      *(uint *)((long)&local_7c0 + lVar17) =
           *(uint *)(lVar19 + lVar17) & *(uint *)((long)pvVar16 + lVar17), lVar17 != 0x750;
      lVar17 = lVar17 + 8) {
    *(uint *)((long)&local_7c0 + lVar17 + 4) =
         *(uint *)(lVar19 + lVar17 + 4) & *(uint *)((long)pvVar16 + lVar17 + 4);
  }
  memcpy(pvVar16,&local_7c0,0x754);
  uVar10 = 0;
  local_7c0 = &PTR_FUN_049ff6a0;
  *(uint *)((long)pvVar16 + 0x750) = *(uint *)((long)pvVar16 + 0x750) & 0xffffff;
  local_7b8 = &local_7c4;
  do {
    (**(code **)(local_f38 + 0x10))(&local_1e30,&local_f38,uVar10);
    lVar17 = (**(code **)(local_f38 + 0x20))(&local_f38);
    uVar13 = 1 << (ulong)(uVar10 & 0x1f);
    if ((*(uint *)(lVar17 + (ulong)(uVar10 >> 5) * 4) & uVar13) != 0) {
      lVar17 = *(long *)puVar8;
      uVar11 = FUN_0277d6c4(&local_1e30);
      if (*(long *)puVar8 != 0) {
        lVar17 = *(long *)(lVar17 + 0x57e58);
        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
        if (((uVar11 < *(uint *)(lVar17 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) &&
           (uVar18 = (*(code *)*local_7c0)(&local_7c0,&local_1e30), (uVar18 & 1) != 0))
        goto LAB_028a5160;
      }
      lVar17 = (**(code **)(local_f38 + 0x18))(&local_f38);
      lVar19 = (ulong)(uVar10 >> 5) * 4;
      *(uint *)(lVar17 + lVar19) = *(uint *)(lVar17 + lVar19) & (uVar13 ^ 0xffffffff);
    }
LAB_028a5160:
    uVar10 = uVar10 + 1;
  } while (uVar10 != 15000);
  FUN_02690004(&local_7c0);
  puVar20 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
  uVar11 = puVar20[3];
  uVar10 = *puVar20 ^ *puVar20 << 0xb;
  *puVar20 = puVar20[1];
  puVar20[1] = puVar20[2];
  uVar13 = uVar10 ^ uVar11;
  uVar10 = uVar10 >> 8 ^ uVar11 >> 0x13 ^ uVar13;
  puVar20[2] = uVar11;
  puVar20[3] = uVar10;
  local_1e30 = (uVar10 ^ uVar13 >> 0x1e) * 0x6c078965 + 1;
  local_1e2c = (local_1e30 ^ local_1e30 >> 0x1e) * 0x6c078965 + 2;
  local_1e28 = (local_1e2c ^ local_1e2c >> 0x1e) * 0x6c078965 + 3;
  iStack_1e24 = (local_1e28 ^ local_1e28 >> 0x1e) * 0x6c078965 + 4;
  iVar12 = FUN_01a4cc70(&local_1e30,&local_7c0,&local_f38,5,0,0,PTR_FUN_04bb67e0,0);
  uVar10 = iVar12 - 1;
  if (0 < iVar12) {
    uVar11 = 0;
    uVar13 = 0;
    if (0x1e < uVar10) {
      uVar10 = 0x1f;
    }
    uVar14 = 0x7f;
    do {
      puVar20 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
      uVar22 = *puVar20 ^ *puVar20 << 0xb;
      uVar4 = puVar20[3];
      *puVar20 = puVar20[1];
      puVar20[1] = puVar20[2];
      uVar22 = uVar22 >> 8 ^ uVar4 >> 0x13 ^ uVar22 ^ uVar4;
      puVar20[2] = uVar4;
      puVar20[3] = uVar22;
      if (uVar14 != 0) {
        uVar4 = uVar14 - (uVar14 >> 1 & 0x55555555);
        uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
        uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
        uVar4 = uVar4 + (uVar4 >> 8);
        iVar12 = (int)((ulong)(uVar4 + (uVar4 >> 0x10) & 0x3f) * (ulong)uVar22 >> 0x20) + 2;
        uVar22 = uVar14;
        do {
          iVar12 = iVar12 + -1;
          if (iVar12 < 2) {
            uVar22 = uVar22 - 1 & (uVar22 ^ 0xffffffff);
            uVar22 = uVar22 - (uVar22 >> 1 & 0x55555555);
            uVar22 = (uVar22 >> 2 & 0x33333333) + (uVar22 & 0x33333333);
            uVar22 = uVar22 + (uVar22 >> 4) & 0xf0f0f0f;
            uVar22 = uVar22 + (uVar22 >> 8);
            uVar22 = uVar22 + (uVar22 >> 0x10) & 0x3f;
            goto LAB_028a52d4;
          }
          uVar22 = uVar22 - 1 & uVar22;
        } while (uVar22 != 0);
      }
      uVar22 = 0xffffffff;
LAB_028a52d4:
      puVar20 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
      uVar3 = puVar20[3];
      uVar4 = *puVar20 ^ *puVar20 << 0xb;
      *puVar20 = puVar20[1];
      puVar20[1] = puVar20[2];
      uVar4 = uVar4 >> 8 ^ uVar3 >> 0x13 ^ uVar4 ^ uVar3;
      puVar20[2] = uVar3;
      puVar20[3] = uVar4;
      lVar17 = (long)((ulong)uVar13 << 0x20) >> 0x1d;
      local_1e38 = *(int *)((long)&local_7c0 + lVar17);
      uStack_1e34 = *(undefined4 *)((long)&local_7c0 + lVar17 + 4);
      FUN_028a8398(param_1,uVar4 & 1,&local_1e38,uVar22);
      uVar13 = uVar13 + 1;
      bVar9 = uVar11 != uVar10;
      uVar14 = uVar14 & (1 << (ulong)(uVar22 & 0x1f) ^ 0xffffffffU);
      uVar11 = uVar11 + 1;
    } while (bVar9);
  }
  local_f38 = PTR_DAT_04bbfe60 + 0x10;
  memset(auStack_f30,0,0x754);
  uVar10 = nn::os::GetSystemTick();
  local_7dc = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 1;
  local_7d8 = (local_7dc ^ local_7dc >> 0x1e) * 0x6c078965 + 2;
  local_7d4 = (local_7d8 ^ local_7d8 >> 0x1e) * 0x6c078965 + 3;
  local_7d0 = (local_7d4 ^ local_7d4 >> 0x1e) * 0x6c078965 + 4;
  pvVar16 = (void *)(**(code **)(local_f38 + 0x18))(&local_f38);
  memset(pvVar16,0,0x754);
  local_1e20._0_4_ = 0x27;
  local_16b0 = &PTR_FUN_049ff4e8;
  local_16a8[0] = (int *)&local_1e20;
  FUN_008a1ba0(&local_f38,&local_16b0);
  local_16b0 = &PTR_FUN_049ff4e8;
  local_1e20 = (undefined **)CONCAT44(local_1e20._4_4_,0x2b);
  local_16a8[0] = (int *)&local_1e20;
  FUN_008a1ba0(&local_f38,&local_16b0);
  local_16b0 = &PTR_FUN_049ff740;
  uVar10 = 0;
  local_16a8[0] = (int *)CONCAT44(local_16a8[0]._4_4_,9999);
  do {
    (**(code **)(local_f38 + 0x10))(&local_1e20,&local_f38,uVar10);
    lVar17 = (**(code **)(local_f38 + 0x20))(&local_f38);
    uVar13 = 1 << (ulong)(uVar10 & 0x1f);
    if ((*(uint *)(lVar17 + (ulong)(uVar10 >> 5) * 4) & uVar13) != 0) {
      lVar17 = *(long *)puVar8;
      uVar11 = FUN_0277d6c4(&local_1e20);
      if (*(long *)puVar8 != 0) {
        lVar17 = *(long *)(lVar17 + 0x57e58);
        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
        if (((uVar11 < *(uint *)(lVar17 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) &&
           (uVar18 = (*(code *)*local_16b0)(&local_16b0,&local_1e20), (uVar18 & 1) != 0))
        goto LAB_028a5540;
      }
      lVar17 = (**(code **)(local_f38 + 0x18))(&local_f38);
      lVar19 = (ulong)(uVar10 >> 5) * 4;
      *(uint *)(lVar17 + lVar19) = *(uint *)(lVar17 + lVar19) & (uVar13 ^ 0xffffffff);
    }
LAB_028a5540:
    uVar10 = uVar10 + 1;
  } while (uVar10 != 15000);
  local_1e30 = 0;
  local_1e20._4_4_ = (undefined4)((ulong)local_1e20 >> 0x20);
  uVar24 = (undefined4)((ulong)local_16b0 >> 0x20);
  local_16b0 = (undefined **)((ulong)local_16b0 & 0xffffffff00000000);
  local_1e20._0_4_ = 1;
  local_16b0._0_4_ = 1;
  local_16b0._4_4_ = uVar24;
  local_1e20._0_4_ = 2;
  local_16b0._0_4_ = 2;
  local_1e20._0_4_ = 6;
  local_16b0._0_4_ = 6;
  local_1e20._0_4_ = 7;
  local_16b0._0_4_ = 7;
  local_1e20._0_4_ = 9;
  local_16b0._0_4_ = 9;
  local_1e20._0_4_ = 10;
  local_16b0._0_4_ = 10;
  local_1e20._0_4_ = 0xb;
  local_16b0._0_4_ = 0xb;
  local_1e20._0_4_ = 0xc;
  local_16b0._0_4_ = 0xc;
  local_1e20._0_4_ = 0xd;
  local_16b0._0_4_ = 0xd;
  local_1e20._0_4_ = 0xe;
  local_16b0._0_4_ = 0xe;
  local_1e20._0_4_ = 0xf;
  local_16b0._0_4_ = 0xf;
  local_1e20._0_4_ = 0x10;
  local_16b0._0_4_ = 0x10;
  local_1e20 = (undefined **)CONCAT44(local_1e20._4_4_,0x11);
  local_16b0 = (undefined **)CONCAT44(uVar24,0x11);
  local_1e30 = 0x42c7;
  uVar10 = 0;
  local_16a8[0] = &local_1e30;
  local_16b0 = &PTR_FUN_049ff420;
  do {
    (**(code **)(local_f38 + 0x10))(&local_1e20,&local_f38,uVar10);
    lVar17 = (**(code **)(local_f38 + 0x20))(&local_f38);
    uVar13 = 1 << (ulong)(uVar10 & 0x1f);
    if ((*(uint *)(lVar17 + (ulong)(uVar10 >> 5) * 4) & uVar13) != 0) {
      lVar17 = *(long *)puVar8;
      uVar11 = FUN_0277d6c4(&local_1e20);
      if (*(long *)puVar8 != 0) {
        lVar17 = *(long *)(lVar17 + 0x57e58);
        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
        if (((uVar11 < *(uint *)(lVar17 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) &&
           (uVar18 = (*(code *)*local_16b0)(&local_16b0,&local_1e20), (uVar18 & 1) != 0))
        goto LAB_028a5b00;
      }
      lVar17 = (**(code **)(local_f38 + 0x18))(&local_f38);
      lVar19 = (ulong)(uVar10 >> 5) * 4;
      *(uint *)(lVar17 + lVar19) = *(uint *)(lVar17 + lVar19) & (uVar13 ^ 0xffffffff);
    }
LAB_028a5b00:
    uVar10 = uVar10 + 1;
  } while (uVar10 != 15000);
  uVar10 = 0;
  local_7c0 = (undefined **)((ulong)local_7c0 & 0xffffffff00000000);
  local_16a8[0] = (int *)&local_7c0;
  local_16b0 = &PTR_FUN_049ff448;
  do {
    (**(code **)(local_f38 + 0x10))(&local_1e20,&local_f38,uVar10);
    lVar17 = (**(code **)(local_f38 + 0x20))(&local_f38);
    uVar13 = 1 << (ulong)(uVar10 & 0x1f);
    if ((*(uint *)(lVar17 + (ulong)(uVar10 >> 5) * 4) & uVar13) != 0) {
      lVar17 = *(long *)puVar8;
      uVar11 = FUN_0277d6c4(&local_1e20);
      if (*(long *)puVar8 != 0) {
        lVar17 = *(long *)(lVar17 + 0x57e58);
        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
        if (((uVar11 < *(uint *)(lVar17 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) &&
           (uVar18 = (*(code *)*local_16b0)(&local_16b0,&local_1e20), (uVar18 & 1) != 0))
        goto LAB_028a5bf0;
      }
      lVar17 = (**(code **)(local_f38 + 0x18))(&local_f38);
      lVar19 = (ulong)(uVar10 >> 5) * 4;
      *(uint *)(lVar17 + lVar19) = *(uint *)(lVar17 + lVar19) & (uVar13 ^ 0xffffffff);
    }
LAB_028a5bf0:
    uVar10 = uVar10 + 1;
  } while (uVar10 != 15000);
  uVar10 = 0;
  local_16b0 = &PTR_FUN_049ff6a0;
  local_16a8[0] = &local_7c4;
  do {
    (**(code **)(local_f38 + 0x10))(&local_1e20,&local_f38,uVar10);
    lVar17 = (**(code **)(local_f38 + 0x20))(&local_f38);
    uVar13 = 1 << (ulong)(uVar10 & 0x1f);
    if ((*(uint *)(lVar17 + (ulong)(uVar10 >> 5) * 4) & uVar13) != 0) {
      lVar17 = *(long *)puVar8;
      uVar11 = FUN_0277d6c4(&local_1e20);
      if (*(long *)puVar8 != 0) {
        lVar17 = *(long *)(lVar17 + 0x57e58);
        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
        if (((uVar11 < *(uint *)(lVar17 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) &&
           (uVar18 = (*(code *)*local_16b0)(&local_16b0,&local_1e20), (uVar18 & 1) != 0))
        goto LAB_028a5ce0;
      }
      lVar17 = (**(code **)(local_f38 + 0x18))(&local_f38);
      lVar19 = (ulong)(uVar10 >> 5) * 4;
      *(uint *)(lVar17 + lVar19) = *(uint *)(lVar17 + lVar19) & (uVar13 ^ 0xffffffff);
    }
LAB_028a5ce0:
    uVar10 = uVar10 + 1;
  } while (uVar10 != 15000);
  FUN_02690004(&local_16b0);
  puVar20 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
  uVar11 = puVar20[3];
  uVar10 = *puVar20 ^ *puVar20 << 0xb;
  *puVar20 = puVar20[1];
  puVar20[1] = puVar20[2];
  uVar13 = uVar10 ^ uVar11;
  uVar10 = uVar10 >> 8 ^ uVar11 >> 0x13 ^ uVar13;
  puVar20[2] = uVar11;
  puVar20[3] = uVar10;
  uVar10 = (uVar10 ^ uVar13 >> 0x1e) * 0x6c078965 + 1;
  uVar13 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 2;
  local_1e20 = (undefined **)CONCAT44(uVar13,uVar10);
  uVar10 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 3;
  local_1e18 = (undefined8 *)CONCAT44((uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 4,uVar10);
  iVar12 = FUN_01a4cc70(&local_1e20,&local_16b0,&local_f38,4,0,0,PTR_FUN_04bb67e0,0);
  if (iVar12 < 1) {
    uVar10 = 0x7f;
  }
  else {
    iVar15 = 0;
    uVar13 = 0;
    uVar10 = 0x7f;
    puVar25 = (undefined4 *)PTR_DAT_04bb39d8;
    do {
      puVar20 = (uint *)nn::os::GetTlsValue(*puVar25);
      uVar11 = *puVar20 ^ *puVar20 << 0xb;
      uVar14 = puVar20[3];
      *puVar20 = puVar20[1];
      puVar20[1] = puVar20[2];
      uVar11 = uVar11 >> 8 ^ uVar14 >> 0x13 ^ uVar11 ^ uVar14;
      puVar20[2] = uVar14;
      puVar20[3] = uVar11;
      if (uVar10 != 0) {
        uVar14 = uVar10 - (uVar10 >> 1 & 0x55555555);
        uVar14 = (uVar14 >> 2 & 0x33333333) + (uVar14 & 0x33333333);
        uVar14 = uVar14 + (uVar14 >> 4) & 0xf0f0f0f;
        uVar14 = uVar14 + (uVar14 >> 8);
        iVar21 = (int)((ulong)(uVar14 + (uVar14 >> 0x10) & 0x3f) * (ulong)uVar11 >> 0x20) + 2;
        uVar11 = uVar10;
        do {
          iVar21 = iVar21 + -1;
          if (iVar21 < 2) {
            uVar11 = uVar11 - 1 & (uVar11 ^ 0xffffffff);
            uVar11 = uVar11 - (uVar11 >> 1 & 0x55555555);
            uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
            uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
            uVar11 = uVar11 + (uVar11 >> 8);
            uVar11 = uVar11 + (uVar11 >> 0x10) & 0x3f;
            goto LAB_028a5e44;
          }
          uVar11 = uVar11 - 1 & uVar11;
        } while (uVar11 != 0);
      }
      uVar11 = 0xffffffff;
LAB_028a5e44:
      puVar25 = &DAT_05ae7880;
      puVar20 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
      uVar22 = puVar20[3];
      uVar14 = *puVar20 ^ *puVar20 << 0xb;
      *puVar20 = puVar20[1];
      puVar20[1] = puVar20[2];
      uVar14 = uVar14 >> 8 ^ uVar22 >> 0x13 ^ uVar14 ^ uVar22;
      puVar20[2] = uVar22;
      puVar20[3] = uVar14;
      lVar17 = (long)((ulong)uVar13 << 0x20) >> 0x1d;
      uVar24 = 3;
      if ((uVar14 & 1) == 0) {
        uVar24 = 4;
      }
      local_7c0 = (undefined **)
                  CONCAT44(*(undefined4 *)((long)local_16a8 + lVar17 + -4),
                           *(undefined4 *)((long)local_16a8 + lVar17 + -8));
      FUN_028a8398(param_1,uVar24,&local_7c0,uVar11);
      iVar15 = iVar15 + 1;
      uVar13 = uVar13 + 1;
      uVar10 = uVar10 & (1 << (ulong)(uVar11 & 0x1f) ^ 0xffffffffU);
    } while (iVar15 != iVar12);
  }
  local_f38 = PTR_DAT_04bbfe60 + 0x10;
  memset(auStack_f30,0,0x754);
  uVar13 = nn::os::GetSystemTick();
  local_7dc = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 1;
  local_7d8 = (local_7dc ^ local_7dc >> 0x1e) * 0x6c078965 + 2;
  local_7d4 = (local_7d8 ^ local_7d8 >> 0x1e) * 0x6c078965 + 3;
  local_7d0 = (local_7d4 ^ local_7d4 >> 0x1e) * 0x6c078965 + 4;
  pvVar16 = (void *)(**(code **)(local_f38 + 0x18))(&local_f38);
  memset(pvVar16,0,0x754);
  local_1e20._0_4_ = 0x27;
  local_16b0 = &PTR_FUN_049ff4e8;
  local_16a8[0] = (int *)&local_1e20;
  FUN_008a1ba0(&local_f38,&local_16b0);
  local_16b0 = &PTR_FUN_049ff4e8;
  local_1e20._0_4_ = 0x2b;
  local_16a8[0] = (int *)&local_1e20;
  FUN_008a1ba0(&local_f38,&local_16b0);
  local_16b0 = &PTR_FUN_049ff4e8;
  local_1e20._0_4_ = 0x28;
  local_16a8[0] = (int *)&local_1e20;
  FUN_008a1ba0(&local_f38,&local_16b0);
  local_16b0 = &PTR_FUN_049ff4e8;
  local_1e20._0_4_ = 0x2a;
  local_16a8[0] = (int *)&local_1e20;
  FUN_008a1ba0(&local_f38,&local_16b0);
  local_16b0 = &PTR_FUN_049ff4e8;
  local_1e20._0_4_ = 299;
  local_16a8[0] = (int *)&local_1e20;
  FUN_008a1ba0(&local_f38,&local_16b0);
  local_16b0 = &PTR_FUN_049ff4e8;
  local_1e20._0_4_ = 300;
  local_16a8[0] = (int *)&local_1e20;
  FUN_008a1ba0(&local_f38,&local_16b0);
  local_16b0 = &PTR_FUN_049ff4e8;
  local_1e20._0_4_ = 0x12d;
  local_16a8[0] = (int *)&local_1e20;
  FUN_008a1ba0(&local_f38,&local_16b0);
  local_16b0 = &PTR_FUN_049ff4e8;
  local_1e20._0_4_ = 0x12e;
  local_16a8[0] = (int *)&local_1e20;
  FUN_008a1ba0(&local_f38,&local_16b0);
  local_16b0 = &PTR_FUN_049ff4e8;
  local_1e20._0_4_ = 0x12f;
  local_16a8[0] = (int *)&local_1e20;
  FUN_008a1ba0(&local_f38,&local_16b0);
  local_16b0 = &PTR_FUN_049ff4e8;
  local_1e20._0_4_ = 0x130;
  local_16a8[0] = (int *)&local_1e20;
  FUN_008a1ba0(&local_f38,&local_16b0);
  local_16b0 = &PTR_FUN_049ff4e8;
  local_1e20._0_4_ = 0x131;
  local_16a8[0] = (int *)&local_1e20;
  FUN_008a1ba0(&local_f38,&local_16b0);
  local_16b0 = &PTR_FUN_049ff4e8;
  local_1e20 = (undefined **)CONCAT44(local_1e20._4_4_,0x2d);
  local_16a8[0] = (int *)&local_1e20;
  FUN_008a1ba0(&local_f38,&local_16b0);
  uVar13 = 0;
  local_16b0 = &PTR_FUN_049ff718;
  local_16a8[0] = (int *)CONCAT44(local_16a8[0]._4_4_,10000);
  do {
    (**(code **)(local_f38 + 0x10))(&local_1e20,&local_f38,uVar13);
    lVar17 = (**(code **)(local_f38 + 0x20))(&local_f38);
    uVar11 = 1 << (ulong)(uVar13 & 0x1f);
    if ((*(uint *)(lVar17 + (ulong)(uVar13 >> 5) * 4) & uVar11) != 0) {
      lVar17 = *(long *)puVar8;
      uVar14 = FUN_0277d6c4(&local_1e20);
      if (*(long *)puVar8 != 0) {
        lVar17 = *(long *)(lVar17 + 0x57e58);
        uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
        if (((uVar14 < *(uint *)(lVar17 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) &&
           (uVar18 = (*(code *)*local_16b0)(&local_16b0,&local_1e20), (uVar18 & 1) != 0))
        goto LAB_028a61e0;
      }
      lVar17 = (**(code **)(local_f38 + 0x18))(&local_f38);
      lVar19 = (ulong)(uVar13 >> 5) * 4;
      *(uint *)(lVar17 + lVar19) = *(uint *)(lVar17 + lVar19) & (uVar11 ^ 0xffffffff);
    }
LAB_028a61e0:
    uVar13 = uVar13 + 1;
  } while (uVar13 != 15000);
  local_1e38 = 0;
  local_1e20._4_4_ = (undefined4)((ulong)local_1e20 >> 0x20);
  uVar24 = (undefined4)((ulong)local_16b0 >> 0x20);
  local_16b0 = (undefined **)((ulong)local_16b0 & 0xffffffff00000000);
  local_1e20._0_4_ = 1;
  local_16b0._0_4_ = 1;
  local_16b0._4_4_ = uVar24;
  local_1e20._0_4_ = 2;
  local_16b0._0_4_ = 2;
  local_1e20._0_4_ = 6;
  local_16b0._0_4_ = 6;
  local_1e20._0_4_ = 7;
  local_16b0._0_4_ = 7;
  local_1e20._0_4_ = 9;
  local_16b0._0_4_ = 9;
  local_1e20._0_4_ = 10;
  local_16b0._0_4_ = 10;
  local_1e20._0_4_ = 0xb;
  local_16b0._0_4_ = 0xb;
  local_1e20._0_4_ = 0xc;
  local_16b0._0_4_ = 0xc;
  local_1e20._0_4_ = 0xd;
  local_16b0._0_4_ = 0xd;
  local_1e20._0_4_ = 0xe;
  local_16b0._0_4_ = 0xe;
  local_1e20._0_4_ = 0xf;
  local_16b0._0_4_ = 0xf;
  local_1e20._0_4_ = 0x10;
  local_16b0._0_4_ = 0x10;
  local_1e20 = (undefined **)CONCAT44(local_1e20._4_4_,0x11);
  local_16b0 = (undefined **)CONCAT44(uVar24,0x11);
  local_1e38 = 0x42c7;
  uVar13 = 0;
  local_16a8[0] = &local_1e38;
  local_16b0 = &PTR_FUN_049ff420;
  do {
    (**(code **)(local_f38 + 0x10))(&local_1e20,&local_f38,uVar13);
    lVar17 = (**(code **)(local_f38 + 0x20))(&local_f38);
    uVar11 = 1 << (ulong)(uVar13 & 0x1f);
    if ((*(uint *)(lVar17 + (ulong)(uVar13 >> 5) * 4) & uVar11) != 0) {
      lVar17 = *(long *)puVar8;
      uVar14 = FUN_0277d6c4(&local_1e20);
      if (*(long *)puVar8 != 0) {
        lVar17 = *(long *)(lVar17 + 0x57e58);
        uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
        if (((uVar14 < *(uint *)(lVar17 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) &&
           (uVar18 = (*(code *)*local_16b0)(&local_16b0,&local_1e20), (uVar18 & 1) != 0))
        goto LAB_028a67a0;
      }
      lVar17 = (**(code **)(local_f38 + 0x18))(&local_f38);
      lVar19 = (ulong)(uVar13 >> 5) * 4;
      *(uint *)(lVar17 + lVar19) = *(uint *)(lVar17 + lVar19) & (uVar11 ^ 0xffffffff);
    }
LAB_028a67a0:
    uVar13 = uVar13 + 1;
  } while (uVar13 != 15000);
  local_16b0 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
  memset(local_16a8,0,0x754);
  uVar13 = nn::os::GetSystemTick();
  local_f54 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 1;
  local_f50 = (local_f54 ^ local_f54 >> 0x1e) * 0x6c078965 + 2;
  local_f4c = (local_f50 ^ local_f50 >> 0x1e) * 0x6c078965 + 3;
  local_f48 = (local_f4c ^ local_f4c >> 0x1e) * 0x6c078965 + 4;
  pvVar16 = (void *)(**(code **)((long)local_16b0 + 0x18))(&local_16b0);
  memset(pvVar16,0,0x754);
  local_7c0 = (undefined **)((ulong)local_7c0 & 0xffffffff00000000);
  local_1e20 = &PTR_FUN_049ff448;
  local_1e18 = &local_7c0;
  FUN_008a1ba0(&local_16b0,&local_1e20);
  local_7c0._0_4_ = 1;
  local_1e20 = &PTR_FUN_049ff448;
  local_1e18 = &local_7c0;
  FUN_008a1ba0(&local_16b0,&local_1e20);
  local_7c0 = (undefined **)CONCAT44(local_7c0._4_4_,2);
  local_1e20 = &PTR_FUN_049ff448;
  local_1e18 = &local_7c0;
  FUN_008a1ba0(&local_16b0,&local_1e20);
  pvVar16 = (void *)(**(code **)(local_f38 + 0x18))(&local_f38);
  lVar19 = (**(code **)((long)local_16b0 + 0x20))(&local_16b0);
  for (lVar17 = 0;
      *(uint *)((long)&local_1e20 + lVar17) =
           *(uint *)(lVar19 + lVar17) & *(uint *)((long)pvVar16 + lVar17), lVar17 != 0x750;
      lVar17 = lVar17 + 8) {
    *(uint *)((long)&local_1e20 + lVar17 + 4) =
         *(uint *)(lVar19 + lVar17 + 4) & *(uint *)((long)pvVar16 + lVar17 + 4);
  }
  memcpy(pvVar16,&local_1e20,0x754);
  uVar13 = 0;
  *(uint *)((long)pvVar16 + 0x750) = *(uint *)((long)pvVar16 + 0x750) & 0xffffff;
  local_1e18 = (undefined8 *)&local_7c4;
  local_1e20 = &PTR_FUN_049ff6a0;
  do {
    (**(code **)(local_f38 + 0x10))(&local_7c0,&local_f38,uVar13);
    lVar17 = (**(code **)(local_f38 + 0x20))(&local_f38);
    uVar11 = 1 << (ulong)(uVar13 & 0x1f);
    if ((*(uint *)(lVar17 + (ulong)(uVar13 >> 5) * 4) & uVar11) != 0) {
      lVar17 = *(long *)puVar8;
      uVar14 = FUN_0277d6c4(&local_7c0);
      if (*(long *)puVar8 != 0) {
        lVar17 = *(long *)(lVar17 + 0x57e58);
        uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
        if (((uVar14 < *(uint *)(lVar17 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) &&
           (uVar18 = (*(code *)*local_1e20)(&local_1e20,&local_7c0), (uVar18 & 1) != 0))
        goto LAB_028a69f0;
      }
      lVar17 = (**(code **)(local_f38 + 0x18))(&local_f38);
      lVar19 = (ulong)(uVar13 >> 5) * 4;
      *(uint *)(lVar17 + lVar19) = *(uint *)(lVar17 + lVar19) & (uVar11 ^ 0xffffffff);
    }
LAB_028a69f0:
    uVar13 = uVar13 + 1;
  } while (uVar13 != 15000);
  FUN_02690004(&local_1e20);
  puVar20 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
  uVar14 = puVar20[3];
  uVar13 = *puVar20 ^ *puVar20 << 0xb;
  *puVar20 = puVar20[1];
  puVar20[1] = puVar20[2];
  uVar11 = uVar13 ^ uVar14;
  uVar13 = uVar13 >> 8 ^ uVar14 >> 0x13 ^ uVar11;
  puVar20[2] = uVar14;
  puVar20[3] = uVar13;
  uVar13 = (uVar13 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
  uVar11 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 2;
  local_7c0 = (undefined **)CONCAT44(uVar11,uVar13);
  uVar13 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 3;
  local_7b8 = (undefined4 *)CONCAT44((uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 4,uVar13);
  iVar12 = FUN_01a4cc70(&local_7c0,&local_1e20,&local_f38,3,0,0,PTR_FUN_04bb67e0,0);
  if (0 < iVar12) {
    uVar11 = 0;
    uVar13 = iVar12 + 1;
    do {
      if (uVar10 == 0) {
        uVar14 = 0xffffffff;
      }
      else {
        uVar14 = uVar10 - 1 & (uVar10 ^ 0xffffffff);
        uVar14 = uVar14 - (uVar14 >> 1 & 0x55555555);
        uVar14 = (uVar14 >> 2 & 0x33333333) + (uVar14 & 0x33333333);
        uVar14 = uVar14 + (uVar14 >> 4) & 0xf0f0f0f;
        uVar14 = uVar14 + (uVar14 >> 8);
        uVar14 = uVar14 + (uVar14 >> 0x10) & 0x3f;
      }
      lVar17 = (long)((ulong)uVar11 << 0x20) >> 0x1d;
      local_1e30 = *(int *)((long)&local_1e20 + lVar17);
      local_1e2c = *(uint *)((long)&local_1e20 + lVar17 + 4);
      FUN_028a8398(param_1,5,&local_1e30,uVar14);
      uVar13 = uVar13 - 1;
      uVar11 = uVar11 + 1;
      uVar10 = uVar10 & (1 << (ulong)(uVar14 & 0x1f) ^ 0xffffffffU);
    } while (1 < uVar13);
  }
  puVar1 = PTR_DAT_04bbfe60 + 0x10;
  local_f38 = puVar1;
  memset(auStack_f30,0,0x754);
  uVar10 = nn::os::GetSystemTick();
  local_7dc = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 1;
  local_7d8 = (local_7dc ^ local_7dc >> 0x1e) * 0x6c078965 + 2;
  local_7d4 = (local_7d8 ^ local_7d8 >> 0x1e) * 0x6c078965 + 3;
  local_7d0 = (local_7d4 ^ local_7d4 >> 0x1e) * 0x6c078965 + 4;
  pvVar16 = (void *)(**(code **)(local_f38 + 0x18))(&local_f38);
  memset(pvVar16,0,0x754);
  local_1e20._0_4_ = 0x27;
  local_16b0 = &PTR_FUN_049ff4e8;
  local_16a8[0] = (int *)&local_1e20;
  FUN_008a1ba0(&local_f38,&local_16b0);
  local_16b0 = &PTR_FUN_049ff4e8;
  local_1e20._0_4_ = 0x2b;
  local_16a8[0] = (int *)&local_1e20;
  FUN_008a1ba0(&local_f38,&local_16b0);
  local_16b0 = &PTR_FUN_049ff4e8;
  local_1e20._0_4_ = 5;
  local_16a8[0] = (int *)&local_1e20;
  FUN_008a1ba0(&local_f38,&local_16b0);
  local_16b0 = &PTR_FUN_049ff4e8;
  local_1e20._0_4_ = 7;
  local_16a8[0] = (int *)&local_1e20;
  FUN_008a1ba0(&local_f38,&local_16b0);
  local_16b0 = &PTR_FUN_049ff4e8;
  local_1e20 = (undefined **)CONCAT44(local_1e20._4_4_,4);
  local_16a8[0] = (int *)&local_1e20;
  FUN_008a1ba0(&local_f38,&local_16b0);
  local_16b0 = (undefined **)puVar1;
  memset(local_16a8,0,0x754);
  uVar10 = nn::os::GetSystemTick();
  local_f54 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 1;
  local_f50 = (local_f54 ^ local_f54 >> 0x1e) * 0x6c078965 + 2;
  local_f4c = (local_f50 ^ local_f50 >> 0x1e) * 0x6c078965 + 3;
  local_f48 = (local_f4c ^ local_f4c >> 0x1e) * 0x6c078965 + 4;
  pvVar16 = (void *)(**(code **)((long)local_16b0 + 0x18))(&local_16b0);
  memset(pvVar16,0,0x754);
  local_7c0._0_4_ = 10;
  local_1e20 = &PTR_FUN_049ff538;
  local_1e18 = &local_7c0;
  FUN_008a1ba0(&local_16b0,&local_1e20);
  local_7c0._0_4_ = 0xb;
  local_1e20 = &PTR_FUN_049ff538;
  local_1e18 = &local_7c0;
  FUN_008a1ba0(&local_16b0,&local_1e20);
  local_7c0 = (undefined **)CONCAT44(local_7c0._4_4_,0xc);
  local_1e20 = &PTR_FUN_049ff538;
  local_1e18 = &local_7c0;
  FUN_008a1ba0(&local_16b0,&local_1e20);
  pvVar16 = (void *)(**(code **)(local_f38 + 0x18))(&local_f38);
  lVar19 = (**(code **)((long)local_16b0 + 0x20))(&local_16b0);
  for (lVar17 = 0;
      *(uint *)((long)&local_1e20 + lVar17) =
           *(uint *)(lVar19 + lVar17) & *(uint *)((long)pvVar16 + lVar17), lVar17 != 0x750;
      lVar17 = lVar17 + 8) {
    *(uint *)((long)&local_1e20 + lVar17 + 4) =
         *(uint *)(lVar19 + lVar17 + 4) & *(uint *)((long)pvVar16 + lVar17 + 4);
  }
  memcpy(pvVar16,&local_1e20,0x754);
  uVar10 = 0;
  local_7c0 = (undefined **)((ulong)local_7c0 & 0xffffffff00000000);
  local_16b0 = &PTR_FUN_049ff448;
  *(uint *)((long)pvVar16 + 0x750) = *(uint *)((long)pvVar16 + 0x750) & 0xffffff;
  local_16a8[0] = (int *)&local_7c0;
  do {
    (**(code **)(local_f38 + 0x10))(&local_1e20,&local_f38,uVar10);
    lVar17 = (**(code **)(local_f38 + 0x20))(&local_f38);
    uVar13 = 1 << (ulong)(uVar10 & 0x1f);
    if ((*(uint *)(lVar17 + (ulong)(uVar10 >> 5) * 4) & uVar13) != 0) {
      lVar17 = *(long *)puVar8;
      uVar11 = FUN_0277d6c4(&local_1e20);
      if (*(long *)puVar8 != 0) {
        lVar17 = *(long *)(lVar17 + 0x57e58);
        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
        if (((uVar11 < *(uint *)(lVar17 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) &&
           (uVar18 = (*(code *)*local_16b0)(&local_16b0,&local_1e20), (uVar18 & 1) != 0))
        goto LAB_028a6eb0;
      }
      lVar17 = (**(code **)(local_f38 + 0x18))(&local_f38);
      lVar19 = (ulong)(uVar10 >> 5) * 4;
      *(uint *)(lVar17 + lVar19) = *(uint *)(lVar17 + lVar19) & (uVar13 ^ 0xffffffff);
    }
LAB_028a6eb0:
    uVar10 = uVar10 + 1;
  } while (uVar10 != 15000);
  uVar10 = 0;
  local_16b0 = &PTR_FUN_049ff6a0;
  local_16a8[0] = &local_7c4;
  do {
    (**(code **)(local_f38 + 0x10))(&local_1e20,&local_f38,uVar10);
    lVar17 = (**(code **)(local_f38 + 0x20))(&local_f38);
    uVar13 = 1 << (ulong)(uVar10 & 0x1f);
    if ((*(uint *)(lVar17 + (ulong)(uVar10 >> 5) * 4) & uVar13) != 0) {
      lVar17 = *(long *)puVar8;
      uVar11 = FUN_0277d6c4(&local_1e20);
      if (*(long *)puVar8 != 0) {
        lVar17 = *(long *)(lVar17 + 0x57e58);
        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
        if (((uVar11 < *(uint *)(lVar17 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) &&
           (uVar18 = (*(code *)*local_16b0)(&local_16b0,&local_1e20), (uVar18 & 1) != 0))
        goto LAB_028a6fa0;
      }
      lVar17 = (**(code **)(local_f38 + 0x18))(&local_f38);
      lVar19 = (ulong)(uVar10 >> 5) * 4;
      *(uint *)(lVar17 + lVar19) = *(uint *)(lVar17 + lVar19) & (uVar13 ^ 0xffffffff);
    }
LAB_028a6fa0:
    uVar10 = uVar10 + 1;
  } while (uVar10 != 15000);
  FUN_02690004(&local_16b0);
  puVar20 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
  uVar11 = puVar20[3];
  uVar10 = *puVar20 ^ *puVar20 << 0xb;
  *puVar20 = puVar20[1];
  puVar20[1] = puVar20[2];
  uVar13 = uVar10 ^ uVar11;
  uVar10 = uVar10 >> 8 ^ uVar11 >> 0x13 ^ uVar13;
  puVar20[2] = uVar11;
  puVar20[3] = uVar10;
  uVar10 = (uVar10 ^ uVar13 >> 0x1e) * 0x6c078965 + 1;
  uVar13 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 2;
  local_7c0 = (undefined **)CONCAT44(uVar13,uVar10);
  uVar10 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 3;
  local_7b8 = (undefined4 *)CONCAT44((uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 4,uVar10);
  iVar12 = FUN_01a4cc70(&local_7c0,&local_16b0,&local_f38,2,0,0,PTR_FUN_04bb67e0,0);
  uVar10 = 0;
  uVar13 = 0;
  ppuVar2 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
  do {
    local_1e20 = (undefined **)CONCAT44(local_1e20._4_4_,uVar10);
    lVar19 = *(long *)puVar8;
    lVar17 = param_1 + (ulong)uVar10 * 0x200;
    if (6 < uVar10) {
      lVar17 = param_1;
    }
    uVar11 = FUN_0277d6c4(lVar17 + 0x18);
    lVar23 = *(long *)puVar8;
    if (lVar23 == 0) {
LAB_028a7280:
      uVar11 = 0;
    }
    else {
      lVar19 = *(long *)(lVar19 + 0x57e58);
      uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
      if ((*(uint *)(lVar19 + 0x1d8) <= uVar11) ||
         (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar11 * 8) == 0)) goto LAB_028a7280;
      local_1e10 = (uint *)0x0;
      local_1e20 = &PTR_FUN_04a36b50;
      local_1e18 = *(undefined8 **)(lVar17 + 0x18);
      uVar11 = FUN_0277d6c4(&local_1e18);
      if (*(long *)puVar8 != 0) {
        lVar19 = *(long *)(lVar23 + 0x57e58);
        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
        if ((uVar11 < *(uint *)(lVar19 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
          lVar19 = *(long *)PTR_DAT_04bc0428;
          uVar11 = FUN_0277d6c4(lVar17 + 0x18);
          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
          if ((uVar11 < *(uint *)(lVar19 + 0x1d8)) &&
             (puVar20 = *(uint **)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar11 * 8),
             puVar20 != (uint *)0x0)) {
            local_1e10 = puVar20;
          }
        }
      }
      local_1e30 = 10;
      local_1e38 = FUN_01ae7550(&local_1e20);
      if (local_1e38 == local_1e30) {
LAB_028a7270:
        uVar11 = 1;
      }
      else {
        local_1e30 = 0xb;
        local_1e38 = FUN_01ae7550(&local_1e20);
        if (local_1e38 == local_1e30) goto LAB_028a7270;
        local_1e30 = 0xc;
        local_1e38 = FUN_01ae7550(&local_1e20);
        uVar11 = (uint)(local_1e38 == local_1e30);
      }
      lVar23 = *(long *)puVar8;
      iVar12 = iVar12 - uVar11;
    }
    local_1e20 = (undefined **)CONCAT44(local_1e20._4_4_,uVar10);
    lVar17 = param_1 + (ulong)uVar10 * 0x200;
    if (6 < uVar10) {
      lVar17 = param_1;
    }
    uVar14 = FUN_0277d6c4(lVar17 + 0x20);
    lVar19 = *(long *)puVar8;
    if (lVar19 != 0) {
      lVar23 = *(long *)(lVar23 + 0x57e58);
      uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
      if ((uVar14 < *(uint *)(lVar23 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
        local_1e10 = (uint *)0x0;
        local_1e20 = &PTR_FUN_04a36b50;
        local_1e18 = *(undefined8 **)(lVar17 + 0x20);
        uVar14 = FUN_0277d6c4(&local_1e18);
        if (*(long *)puVar8 != 0) {
          lVar19 = *(long *)(lVar19 + 0x57e58);
          uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
          if ((uVar14 < *(uint *)(lVar19 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
            lVar19 = *(long *)PTR_DAT_04bc0428;
            uVar14 = FUN_0277d6c4(lVar17 + 0x20);
            uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
            if ((uVar14 < *(uint *)(lVar19 + 0x1d8)) &&
               (puVar20 = *(uint **)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar14 * 8),
               puVar20 != (uint *)0x0)) {
              local_1e10 = puVar20;
            }
          }
        }
        local_1e30 = 10;
        local_1e38 = FUN_01ae7550(&local_1e20);
        if (local_1e38 == local_1e30) {
LAB_028a73bc:
          uVar14 = 1;
        }
        else {
          local_1e30 = 0xb;
          local_1e38 = FUN_01ae7550(&local_1e20);
          if (local_1e38 == local_1e30) goto LAB_028a73bc;
          local_1e30 = 0xc;
          local_1e38 = FUN_01ae7550(&local_1e20);
          uVar14 = (uint)(local_1e38 == local_1e30);
        }
        lVar19 = *(long *)puVar8;
        uVar11 = uVar11 | uVar14;
        iVar12 = iVar12 - uVar14;
      }
    }
    local_1e20 = (undefined **)CONCAT44(local_1e20._4_4_,uVar10);
    lVar17 = param_1 + (ulong)uVar10 * 0x200;
    if (6 < uVar10) {
      lVar17 = param_1;
    }
    uVar14 = FUN_0277d6c4(lVar17 + 0x28);
    lVar23 = *(long *)puVar8;
    if (lVar23 != 0) {
      lVar19 = *(long *)(lVar19 + 0x57e58);
      uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
      if ((uVar14 < *(uint *)(lVar19 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
        local_1e10 = (uint *)0x0;
        local_1e18 = *(undefined8 **)(lVar17 + 0x28);
        local_1e20 = ppuVar2;
        uVar14 = FUN_0277d6c4(&local_1e18);
        if (*(long *)puVar8 != 0) {
          lVar19 = *(long *)(lVar23 + 0x57e58);
          uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
          if ((uVar14 < *(uint *)(lVar19 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
            lVar19 = *(long *)PTR_DAT_04bc0428;
            uVar14 = FUN_0277d6c4(lVar17 + 0x28);
            uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
            if ((uVar14 < *(uint *)(lVar19 + 0x1d8)) &&
               (puVar20 = *(uint **)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar14 * 8),
               puVar20 != (uint *)0x0)) {
              local_1e10 = puVar20;
            }
          }
        }
        local_1e30 = 10;
        local_1e38 = FUN_01ae7550(&local_1e20);
        if (local_1e38 == local_1e30) {
LAB_028a7558:
          uVar14 = 1;
        }
        else {
          local_1e30 = 0xb;
          local_1e38 = FUN_01ae7550(&local_1e20);
          if (local_1e38 == local_1e30) goto LAB_028a7558;
          local_1e30 = 0xc;
          local_1e38 = FUN_01ae7550(&local_1e20);
          uVar14 = (uint)(local_1e38 == local_1e30);
        }
        uVar11 = uVar11 | uVar14;
        iVar12 = iVar12 - uVar14;
      }
    }
    uVar22 = uVar10 & 0x1f;
    uVar10 = uVar10 + 1;
    uVar14 = 0;
    if (uVar11 == 0) {
      uVar14 = 1 << (ulong)uVar22;
    }
    uVar13 = uVar14 | uVar13;
  } while (uVar10 != 7);
  if (0 < iVar12) {
    uVar10 = 0;
    do {
      puVar20 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
      uVar11 = *puVar20 ^ *puVar20 << 0xb;
      uVar14 = puVar20[3];
      *puVar20 = puVar20[1];
      puVar20[1] = puVar20[2];
      uVar11 = uVar11 >> 8 ^ uVar14 >> 0x13 ^ uVar11 ^ uVar14;
      puVar20[2] = uVar14;
      puVar20[3] = uVar11;
      if (uVar13 != 0) {
        uVar14 = uVar13 - (uVar13 >> 1 & 0x55555555);
        uVar14 = (uVar14 >> 2 & 0x33333333) + (uVar14 & 0x33333333);
        uVar14 = uVar14 + (uVar14 >> 4) & 0xf0f0f0f;
        uVar14 = uVar14 + (uVar14 >> 8);
        iVar15 = (int)((ulong)(uVar14 + (uVar14 >> 0x10) & 0x3f) * (ulong)uVar11 >> 0x20) + 2;
        uVar11 = uVar13;
        do {
          iVar15 = iVar15 + -1;
          if (iVar15 < 2) {
            uVar11 = uVar11 - 1 & (uVar11 ^ 0xffffffff);
            uVar11 = uVar11 - (uVar11 >> 1 & 0x55555555);
            uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
            uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
            uVar11 = uVar11 + (uVar11 >> 8);
            uVar11 = uVar11 + (uVar11 >> 0x10) & 0x3f;
            goto LAB_028a76cc;
          }
          uVar11 = uVar11 - 1 & uVar11;
        } while (uVar11 != 0);
      }
      uVar11 = 0xffffffff;
LAB_028a76cc:
      lVar19 = *(long *)puVar8;
      lVar17 = (long)((ulong)uVar10 << 0x20) >> 0x1d;
      local_1e20 = &PTR_FUN_04a36b50;
      local_1e10 = (uint *)0x0;
      uVar7 = *(undefined2 *)((long)local_16a8 + lVar17 + -8);
      uVar5 = *(undefined1 *)((long)local_16a8 + lVar17 + -6);
      uVar6 = *(undefined1 *)((long)local_16a8 + lVar17 + -5);
      local_1e30 = CONCAT22(local_1e30._2_2_,uVar7);
      local_1e2c = *(uint *)((long)local_16a8 + lVar17 + -4);
      local_1e30._0_3_ = CONCAT12(uVar5,uVar7);
      local_1e30 = CONCAT13(uVar6,(undefined3)local_1e30);
      local_1e18._0_3_ = CONCAT12(uVar5,uVar7);
      local_1e18._0_4_ = CONCAT13(uVar6,(undefined3)local_1e18);
      local_1e18 = (undefined8 *)CONCAT44(local_1e2c,(undefined4)local_1e18);
      uVar14 = FUN_0277d6c4(&local_1e18);
      uVar18 = extraout_x1;
      if (*(long *)puVar8 == 0) {
LAB_028a7794:
        if (local_1e10 != (uint *)0x0) goto LAB_028a779c;
LAB_028a7824:
        iVar15 = FUN_01aed730(&local_1e20,uVar18);
        uVar18 = 5;
        if (iVar15 < 10000) {
          puVar20 = (uint *)nn::os::GetTlsValue(DAT_05ae7880,5);
          uVar14 = *puVar20 ^ *puVar20 << 0xb;
          uVar4 = puVar20[3];
          *puVar20 = puVar20[1];
          puVar20[1] = puVar20[2];
          uVar22 = uVar14 >> 8 ^ uVar4 >> 0x13 ^ uVar14 ^ uVar4;
          puVar20[2] = uVar4;
          puVar20[3] = uVar22;
          uVar14 = 3;
          if ((uVar22 & 1) == 0) {
            uVar14 = 4;
          }
          uVar18 = (ulong)uVar14;
        }
      }
      else {
        lVar17 = *(long *)(lVar19 + 0x57e58);
        uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
        if ((*(uint *)(lVar17 + 0x1d8) <= uVar14) ||
           (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar14 * 8) == 0)) goto LAB_028a7794;
        lVar17 = *(long *)PTR_DAT_04bc0428;
        uVar14 = FUN_0277d6c4(&local_1e30);
        uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
        uVar18 = extraout_x1_00;
        if ((*(uint *)(lVar17 + 0x1d8) <= uVar14) ||
           (puVar20 = *(uint **)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar14 * 8),
           puVar20 == (uint *)0x0)) goto LAB_028a7794;
        local_1e10 = puVar20;
LAB_028a779c:
        puVar20 = (uint *)((long)local_1e10 - (ulong)*local_1e10);
        if ((((*local_1e10 == 0) || (puVar20 == (uint *)0x0)) || (*puVar20 == 0)) ||
           ((uVar14 = puVar20[1], uVar14 == 0 || ((ulong)(ushort)puVar20[2] == 0))))
        goto LAB_028a7824;
        lVar17 = 0xc;
        if (*(char *)((long)puVar20 + 10) != '\0') {
          lVar17 = 0x1c;
        }
        lVar17 = (long)puVar20 + lVar17 + (ulong)(ushort)puVar20[2] * 8;
        if (lVar17 == 0) goto LAB_028a7824;
        uVar22 = 0;
        if ((ulong)uVar14 != 0) {
          uVar22 = (uint)((ulong)((long)local_1e10 - lVar17) / (ulong)uVar14);
        }
        if (*puVar20 <= uVar22) {
          uVar22 = 0xffffffff;
        }
        if ((*(uint *)PTR_DAT_04bc0068 <= uVar22) ||
           (uVar18 = 5, *(short *)(*(long *)(PTR_DAT_04bc0068 + 8) + (long)(int)uVar22 * 2) != 4))
        goto LAB_028a7824;
      }
      FUN_028a8398(param_1,uVar18,&local_1e30,uVar11);
      iVar15 = iVar12 + -1;
      uVar10 = uVar10 + 1;
      uVar13 = uVar13 & (1 << (ulong)(uVar11 & 0x1f) ^ 0xffffffffU);
      bVar9 = 0 < iVar12;
      iVar12 = iVar15;
    } while (iVar15 != 0 && bVar9);
  }
  local_f38 = PTR_DAT_04bbfe60 + 0x10;
  memset(auStack_f30,0,0x754);
  uVar10 = nn::os::GetSystemTick();
  local_7dc = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 1;
  local_7d8 = (local_7dc ^ local_7dc >> 0x1e) * 0x6c078965 + 2;
  local_7d4 = (local_7d8 ^ local_7d8 >> 0x1e) * 0x6c078965 + 3;
  local_7d0 = (local_7d4 ^ local_7d4 >> 0x1e) * 0x6c078965 + 4;
  pvVar16 = (void *)(**(code **)(local_f38 + 0x18))(&local_f38);
  memset(pvVar16,0,0x754);
  local_1e20._0_4_ = 0x27;
  local_16b0 = &PTR_FUN_049ff4e8;
  local_16a8[0] = (int *)&local_1e20;
  FUN_008a1ba0(&local_f38,&local_16b0);
  local_16b0 = &PTR_FUN_049ff4e8;
  local_1e20 = (undefined **)CONCAT44(local_1e20._4_4_,0x2b);
  local_16a8[0] = (int *)&local_1e20;
  FUN_008a1ba0(&local_f38,&local_16b0);
  uVar10 = 0;
  local_7c0 = (undefined **)CONCAT44(local_7c0._4_4_,0xe);
  local_16a8[0] = (int *)&local_7c0;
  local_16b0 = &PTR_FUN_049ff538;
  do {
    (**(code **)(local_f38 + 0x10))(&local_1e20,&local_f38,uVar10);
    lVar17 = (**(code **)(local_f38 + 0x20))(&local_f38);
    uVar13 = 1 << (ulong)(uVar10 & 0x1f);
    if ((*(uint *)(lVar17 + (ulong)(uVar10 >> 5) * 4) & uVar13) != 0) {
      lVar17 = *(long *)puVar8;
      uVar11 = FUN_0277d6c4(&local_1e20);
      if (*(long *)puVar8 != 0) {
        lVar17 = *(long *)(lVar17 + 0x57e58);
        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
        if (((uVar11 < *(uint *)(lVar17 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) &&
           (uVar18 = (*(code *)*local_16b0)(&local_16b0,&local_1e20), (uVar18 & 1) != 0))
        goto LAB_028a79b0;
      }
      lVar17 = (**(code **)(local_f38 + 0x18))(&local_f38);
      lVar19 = (ulong)(uVar10 >> 5) * 4;
      *(uint *)(lVar17 + lVar19) = *(uint *)(lVar17 + lVar19) & (uVar13 ^ 0xffffffff);
    }
LAB_028a79b0:
    uVar10 = uVar10 + 1;
  } while (uVar10 != 15000);
  uVar10 = 0;
  local_7c0 = (undefined **)((ulong)local_7c0 & 0xffffffff00000000);
  local_16a8[0] = (int *)&local_7c0;
  local_16b0 = &PTR_FUN_049ff448;
  do {
    (**(code **)(local_f38 + 0x10))(&local_1e20,&local_f38,uVar10);
    lVar17 = (**(code **)(local_f38 + 0x20))(&local_f38);
    uVar13 = 1 << (ulong)(uVar10 & 0x1f);
    if ((*(uint *)(lVar17 + (ulong)(uVar10 >> 5) * 4) & uVar13) != 0) {
      lVar17 = *(long *)puVar8;
      uVar11 = FUN_0277d6c4(&local_1e20);
      if (*(long *)puVar8 != 0) {
        lVar17 = *(long *)(lVar17 + 0x57e58);
        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
        if (((uVar11 < *(uint *)(lVar17 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) &&
           (uVar18 = (*(code *)*local_16b0)(&local_16b0,&local_1e20), (uVar18 & 1) != 0))
        goto LAB_028a7aa0;
      }
      lVar17 = (**(code **)(local_f38 + 0x18))(&local_f38);
      lVar19 = (ulong)(uVar10 >> 5) * 4;
      *(uint *)(lVar17 + lVar19) = *(uint *)(lVar17 + lVar19) & (uVar13 ^ 0xffffffff);
    }
LAB_028a7aa0:
    uVar10 = uVar10 + 1;
  } while (uVar10 != 15000);
  uVar10 = 0;
  local_16b0 = &PTR_FUN_049ff6a0;
  local_16a8[0] = &local_7c4;
  do {
    (**(code **)(local_f38 + 0x10))(&local_1e20,&local_f38,uVar10);
    lVar17 = (**(code **)(local_f38 + 0x20))(&local_f38);
    uVar13 = 1 << (ulong)(uVar10 & 0x1f);
    if ((*(uint *)(lVar17 + (ulong)(uVar10 >> 5) * 4) & uVar13) != 0) {
      lVar17 = *(long *)puVar8;
      uVar11 = FUN_0277d6c4(&local_1e20);
      if (*(long *)puVar8 != 0) {
        lVar17 = *(long *)(lVar17 + 0x57e58);
        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
        if (((uVar11 < *(uint *)(lVar17 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) &&
           (uVar18 = (*(code *)*local_16b0)(&local_16b0,&local_1e20), (uVar18 & 1) != 0))
        goto LAB_028a7b90;
      }
      lVar17 = (**(code **)(local_f38 + 0x18))(&local_f38);
      lVar19 = (ulong)(uVar10 >> 5) * 4;
      *(uint *)(lVar17 + lVar19) = *(uint *)(lVar17 + lVar19) & (uVar13 ^ 0xffffffff);
    }
LAB_028a7b90:
    uVar10 = uVar10 + 1;
  } while (uVar10 != 15000);
  FUN_02690004(&local_16b0);
  puVar20 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
  uVar11 = puVar20[3];
  uVar10 = *puVar20 ^ *puVar20 << 0xb;
  *puVar20 = puVar20[1];
  puVar20[1] = puVar20[2];
  uVar13 = uVar10 ^ uVar11;
  uVar10 = uVar10 >> 8 ^ uVar11 >> 0x13 ^ uVar13;
  puVar20[2] = uVar11;
  puVar20[3] = uVar10;
  uVar10 = (uVar10 ^ uVar13 >> 0x1e) * 0x6c078965 + 1;
  uVar13 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 2;
  local_7c0 = (undefined **)CONCAT44(uVar13,uVar10);
  uVar10 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 3;
  local_7b8 = (undefined4 *)CONCAT44((uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 4,uVar10);
  iVar12 = FUN_01a4cc70(&local_7c0,&local_16b0,&local_f38,1,0,0,PTR_FUN_04bb67e0,0);
  lVar17 = *(long *)puVar8;
  uVar10 = 0;
  uVar13 = 0;
  ppuVar2 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
  do {
    local_1e20 = (undefined **)CONCAT44(local_1e20._4_4_,uVar10);
    lVar19 = param_1 + (ulong)uVar10 * 0x200;
    if (6 < uVar10) {
      lVar19 = param_1;
    }
    uVar11 = FUN_0277d6c4(lVar19 + 0x18);
    lVar23 = *(long *)puVar8;
    if (lVar23 == 0) {
LAB_028a7e70:
      uVar11 = 0;
    }
    else {
      lVar17 = *(long *)(lVar17 + 0x57e58);
      uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
      if ((*(uint *)(lVar17 + 0x1d8) <= uVar11) ||
         (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar11 * 8) == 0)) goto LAB_028a7e70;
      local_1e10 = (uint *)0x0;
      local_1e20 = &PTR_FUN_04a36b50;
      local_1e18 = *(undefined8 **)(lVar19 + 0x18);
      uVar11 = FUN_0277d6c4(&local_1e18);
      if (*(long *)puVar8 != 0) {
        lVar17 = *(long *)(lVar23 + 0x57e58);
        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
        if ((uVar11 < *(uint *)(lVar17 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
          lVar17 = *(long *)PTR_DAT_04bc0428;
          uVar11 = FUN_0277d6c4(lVar19 + 0x18);
          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
          if ((uVar11 < *(uint *)(lVar17 + 0x1d8)) &&
             (puVar20 = *(uint **)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar11 * 8),
             puVar20 != (uint *)0x0)) {
            local_1e10 = puVar20;
          }
        }
      }
      local_1e30 = 0xe;
      local_1e38 = FUN_01ae7550(&local_1e20);
      lVar23 = *(long *)puVar8;
      uVar11 = (uint)(local_1e38 == local_1e30);
      iVar12 = iVar12 - uVar11;
    }
    local_1e20 = (undefined **)CONCAT44(local_1e20._4_4_,uVar10);
    lVar17 = param_1 + (ulong)uVar10 * 0x200;
    if (6 < uVar10) {
      lVar17 = param_1;
    }
    uVar14 = FUN_0277d6c4(lVar17 + 0x20);
    lVar19 = *(long *)puVar8;
    if (lVar19 != 0) {
      lVar23 = *(long *)(lVar23 + 0x57e58);
      uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
      if ((uVar14 < *(uint *)(lVar23 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
        local_1e10 = (uint *)0x0;
        local_1e20 = &PTR_FUN_04a36b50;
        local_1e18 = *(undefined8 **)(lVar17 + 0x20);
        uVar14 = FUN_0277d6c4(&local_1e18);
        if (*(long *)puVar8 != 0) {
          lVar19 = *(long *)(lVar19 + 0x57e58);
          uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
          if ((uVar14 < *(uint *)(lVar19 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
            lVar19 = *(long *)PTR_DAT_04bc0428;
            uVar14 = FUN_0277d6c4(lVar17 + 0x20);
            uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
            if ((uVar14 < *(uint *)(lVar19 + 0x1d8)) &&
               (puVar20 = *(uint **)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar14 * 8),
               puVar20 != (uint *)0x0)) {
              local_1e10 = puVar20;
            }
          }
        }
        local_1e30 = 0xe;
        local_1e38 = FUN_01ae7550(&local_1e20);
        lVar19 = *(long *)puVar8;
        if (local_1e38 == local_1e30) {
          uVar11 = 1;
        }
        iVar12 = iVar12 - (uint)(local_1e38 == local_1e30);
      }
    }
    local_1e20 = (undefined **)CONCAT44(local_1e20._4_4_,uVar10);
    lVar23 = param_1 + (ulong)uVar10 * 0x200;
    if (6 < uVar10) {
      lVar23 = param_1;
    }
    uVar14 = FUN_0277d6c4(lVar23 + 0x28);
    lVar17 = *(long *)puVar8;
    if (lVar17 != 0) {
      lVar19 = *(long *)(lVar19 + 0x57e58);
      uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
      if ((uVar14 < *(uint *)(lVar19 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
        local_1e10 = (uint *)0x0;
        local_1e18 = *(undefined8 **)(lVar23 + 0x28);
        local_1e20 = ppuVar2;
        uVar14 = FUN_0277d6c4(&local_1e18);
        if (*(long *)puVar8 != 0) {
          lVar17 = *(long *)(lVar17 + 0x57e58);
          uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
          if ((uVar14 < *(uint *)(lVar17 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
            lVar17 = *(long *)PTR_DAT_04bc0428;
            uVar14 = FUN_0277d6c4(lVar23 + 0x28);
            uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
            if ((uVar14 < *(uint *)(lVar17 + 0x1d8)) &&
               (puVar20 = *(uint **)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar14 * 8),
               puVar20 != (uint *)0x0)) {
              local_1e10 = puVar20;
            }
          }
        }
        local_1e30 = 0xe;
        local_1e38 = FUN_01ae7550(&local_1e20);
        lVar17 = *(long *)puVar8;
        if (local_1e38 == local_1e30) {
          uVar11 = 1;
        }
        iVar12 = iVar12 - (uint)(local_1e38 == local_1e30);
      }
    }
    uVar22 = uVar10 & 0x1f;
    uVar10 = uVar10 + 1;
    uVar14 = 0;
    if (uVar11 == 0) {
      uVar14 = 1 << (ulong)uVar22;
    }
    uVar13 = uVar14 | uVar13;
  } while (uVar10 != 7);
  if (0 < iVar12) {
    uVar10 = 0;
    puVar25 = (undefined4 *)PTR_DAT_04bb39d8;
    do {
      puVar20 = (uint *)nn::os::GetTlsValue(*puVar25);
      uVar11 = *puVar20 ^ *puVar20 << 0xb;
      uVar14 = puVar20[3];
      *puVar20 = puVar20[1];
      puVar20[1] = puVar20[2];
      uVar11 = uVar11 >> 8 ^ uVar14 >> 0x13 ^ uVar11 ^ uVar14;
      puVar20[2] = uVar14;
      puVar20[3] = uVar11;
      if (uVar13 != 0) {
        uVar14 = uVar13 - (uVar13 >> 1 & 0x55555555);
        uVar14 = (uVar14 >> 2 & 0x33333333) + (uVar14 & 0x33333333);
        uVar14 = uVar14 + (uVar14 >> 4) & 0xf0f0f0f;
        uVar14 = uVar14 + (uVar14 >> 8);
        iVar15 = (int)((ulong)(uVar14 + (uVar14 >> 0x10) & 0x3f) * (ulong)uVar11 >> 0x20) + 2;
        uVar11 = uVar13;
        do {
          iVar15 = iVar15 + -1;
          if (iVar15 < 2) {
            uVar11 = uVar11 - 1 & (uVar11 ^ 0xffffffff);
            uVar11 = uVar11 - (uVar11 >> 1 & 0x55555555);
            uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
            uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
            uVar11 = uVar11 + (uVar11 >> 8);
            uVar11 = uVar11 + (uVar11 >> 0x10) & 0x3f;
            goto LAB_028a81ac;
          }
          uVar11 = uVar11 - 1 & uVar11;
        } while (uVar11 != 0);
      }
      uVar11 = 0xffffffff;
LAB_028a81ac:
      lVar19 = *(long *)puVar8;
      lVar17 = (long)((ulong)uVar10 << 0x20) >> 0x1d;
      local_1e20 = &PTR_FUN_04a36b50;
      local_1e10 = (uint *)0x0;
      uVar7 = *(undefined2 *)((long)local_16a8 + lVar17 + -8);
      uVar5 = *(undefined1 *)((long)local_16a8 + lVar17 + -6);
      uVar6 = *(undefined1 *)((long)local_16a8 + lVar17 + -5);
      local_1e30 = CONCAT22(local_1e30._2_2_,uVar7);
      local_1e2c = *(uint *)((long)local_16a8 + lVar17 + -4);
      local_1e30._0_3_ = CONCAT12(uVar5,uVar7);
      local_1e30 = CONCAT13(uVar6,(undefined3)local_1e30);
      local_1e18._0_3_ = CONCAT12(uVar5,uVar7);
      local_1e18._0_4_ = CONCAT13(uVar6,(undefined3)local_1e18);
      local_1e18 = (undefined8 *)CONCAT44(local_1e2c,(undefined4)local_1e18);
      uVar14 = FUN_0277d6c4(&local_1e18);
      uVar18 = extraout_x1_01;
      if (*(long *)puVar8 == 0) {
LAB_028a8280:
        puVar25 = (undefined4 *)PTR_DAT_04bb39d8;
        if (local_1e10 != (uint *)0x0) goto LAB_028a8290;
LAB_028a8320:
        iVar15 = FUN_01aed730(&local_1e20,uVar18);
        uVar18 = 5;
        if (iVar15 < 10000) {
          puVar20 = (uint *)nn::os::GetTlsValue(*puVar25,5);
          uVar14 = *puVar20 ^ *puVar20 << 0xb;
          uVar4 = puVar20[3];
          *puVar20 = puVar20[1];
          puVar20[1] = puVar20[2];
          uVar22 = uVar14 >> 8 ^ uVar4 >> 0x13 ^ uVar14 ^ uVar4;
          puVar20[2] = uVar4;
          puVar20[3] = uVar22;
          uVar14 = 3;
          if ((uVar22 & 1) == 0) {
            uVar14 = 4;
          }
          uVar18 = (ulong)uVar14;
        }
      }
      else {
        lVar17 = *(long *)(lVar19 + 0x57e58);
        uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
        if ((*(uint *)(lVar17 + 0x1d8) <= uVar14) ||
           (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar14 * 8) == 0)) goto LAB_028a8280;
        lVar17 = *(long *)PTR_DAT_04bc0428;
        uVar14 = FUN_0277d6c4(&local_1e30);
        uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
        uVar18 = extraout_x1_02;
        if ((*(uint *)(lVar17 + 0x1d8) <= uVar14) ||
           (puVar20 = *(uint **)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar14 * 8),
           puVar20 == (uint *)0x0)) goto LAB_028a8280;
        puVar25 = &DAT_05ae7880;
        local_1e10 = puVar20;
LAB_028a8290:
        puVar20 = (uint *)((long)local_1e10 - (ulong)*local_1e10);
        if ((((*local_1e10 == 0) || (puVar20 == (uint *)0x0)) || (*puVar20 == 0)) ||
           ((uVar14 = puVar20[1], uVar14 == 0 || ((ulong)(ushort)puVar20[2] == 0))))
        goto LAB_028a8320;
        lVar17 = 0xc;
        if (*(char *)((long)puVar20 + 10) != '\0') {
          lVar17 = 0x1c;
        }
        lVar17 = (long)puVar20 + lVar17 + (ulong)(ushort)puVar20[2] * 8;
        if (lVar17 == 0) goto LAB_028a8320;
        uVar22 = 0;
        if ((ulong)uVar14 != 0) {
          uVar22 = (uint)((ulong)((long)local_1e10 - lVar17) / (ulong)uVar14);
        }
        if (*puVar20 <= uVar22) {
          uVar22 = 0xffffffff;
        }
        if ((*(uint *)PTR_DAT_04bc0068 <= uVar22) ||
           (uVar18 = 5, *(short *)(*(long *)(PTR_DAT_04bc0068 + 8) + (long)(int)uVar22 * 2) != 4))
        goto LAB_028a8320;
      }
      FUN_028a8398(param_1,uVar18,&local_1e30,uVar11);
      iVar15 = iVar12 + -1;
      uVar10 = uVar10 + 1;
      uVar13 = uVar13 & (1 << (ulong)(uVar11 & 0x1f) ^ 0xffffffffU);
      bVar9 = 0 < iVar12;
      iVar12 = iVar15;
    } while (iVar15 != 0 && bVar9);
  }
  return;
}

