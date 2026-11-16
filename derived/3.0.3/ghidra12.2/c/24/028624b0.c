
void FUN_028624b0(undefined2 *param_1,long *param_2)

{
  undefined **ppuVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  uint uVar8;
  uint uVar9;
  void *pvVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  uint *puVar14;
  undefined1 uVar15;
  int iVar16;
  uint uVar17;
  undefined1 uVar18;
  undefined4 *puVar19;
  undefined4 local_16b4;
  undefined **local_16b0;
  undefined1 *apuStack_16a8 [234];
  uint local_f54;
  uint local_f50;
  uint local_f4c;
  int local_f48;
  undefined **local_f40;
  undefined1 auStack_f38 [1876];
  uint local_7e4;
  uint local_7e0;
  uint local_7dc;
  int local_7d8;
  undefined1 local_7cc [4];
  undefined4 local_7c8;
  undefined8 local_7c0;
  undefined8 local_7b8;
  
  if ((char)param_2[5] != '\0' || *param_2 != 0) {
    local_7cc[0] = 0;
    FUN_01b02920(local_7cc,param_2 + 2,0);
    ppuVar1 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
    local_f40 = ppuVar1;
    memset(auStack_f38,0,0x754);
    uVar8 = nn::os::GetSystemTick();
    local_7e4 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
    local_7e0 = (local_7e4 ^ local_7e4 >> 0x1e) * 0x6c078965 + 2;
    local_7dc = (local_7e0 ^ local_7e0 >> 0x1e) * 0x6c078965 + 3;
    local_7d8 = (local_7dc ^ local_7dc >> 0x1e) * 0x6c078965 + 4;
    pvVar10 = (void *)(*(code *)local_f40[3])(&local_f40);
    memset(pvVar10,0,0x754);
    local_16b0 = &PTR_FUN_049ff6a0;
    apuStack_16a8[0] = local_7cc;
    FUN_008a1ba0(&local_f40,&local_16b0);
    local_16b0 = ppuVar1;
    memset(apuStack_16a8,0,0x754);
    uVar8 = nn::os::GetSystemTick();
    local_f54 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
    local_f50 = (local_f54 ^ local_f54 >> 0x1e) * 0x6c078965 + 2;
    local_f4c = (local_f50 ^ local_f50 >> 0x1e) * 0x6c078965 + 3;
    local_f48 = (local_f4c ^ local_f4c >> 0x1e) * 0x6c078965 + 4;
    pvVar10 = (void *)(*(code *)local_16b0[3])(&local_16b0);
    memset(pvVar10,0,0x754);
    local_7c8 = 6;
    local_7c0 = &PTR_FUN_049ff448;
    local_7b8 = &local_7c8;
    FUN_008a1ba0(&local_16b0,&local_7c0);
    puVar7 = PTR_DAT_04bb43c0;
    local_16b4 = 0x5f;
    local_7b8 = &local_16b4;
    local_7c0 = &PTR_FUN_049ff4e8;
    uVar8 = 0;
    do {
      (*(code *)local_16b0[2])(&local_7c8,&local_16b0,uVar8);
      lVar11 = (*(code *)local_16b0[4])(&local_16b0);
      uVar4 = 1 << (ulong)(uVar8 & 0x1f);
      if ((*(uint *)(lVar11 + (ulong)(uVar8 >> 5) * 4) & uVar4) != 0) {
        lVar11 = *(long *)puVar7;
        uVar9 = FUN_0277d6c4(&local_7c8);
        if (*(long *)puVar7 != 0) {
          lVar11 = *(long *)(lVar11 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if (((uVar9 < *(uint *)(lVar11 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) &&
             (uVar12 = (*(code *)*local_7c0)(&local_7c0,&local_7c8), (uVar12 & 1) != 0))
          goto LAB_028626a0;
        }
        lVar11 = (*(code *)local_16b0[3])(&local_16b0);
        lVar13 = (ulong)(uVar8 >> 5) * 4;
        *(uint *)(lVar11 + lVar13) = *(uint *)(lVar11 + lVar13) & (uVar4 ^ 0xffffffff);
      }
LAB_028626a0:
      uVar8 = uVar8 + 1;
    } while (uVar8 != 15000);
    pvVar10 = (void *)(*(code *)local_16b0[3])(&local_16b0);
    lVar13 = (*(code *)local_f40[4])(&local_f40);
    for (lVar11 = 0;
        *(uint *)((long)&local_7c0 + lVar11) =
             *(uint *)(lVar13 + lVar11) & *(uint *)((long)pvVar10 + lVar11), lVar11 != 0x750;
        lVar11 = lVar11 + 8) {
      *(uint *)((long)&local_7c0 + lVar11 + 4) =
           *(uint *)(lVar13 + lVar11 + 4) & *(uint *)((long)pvVar10 + lVar11 + 4);
    }
    memcpy(pvVar10,&local_7c0,0x754);
    *(uint *)((long)pvVar10 + 0x750) = *(uint *)((long)pvVar10 + 0x750) & 0xffffff;
    FUN_028622e0(&local_16b0);
    puVar14 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
    uVar8 = *puVar14 ^ *puVar14 << 0xb;
    uVar9 = puVar14[3];
    *puVar14 = puVar14[1];
    puVar14[1] = puVar14[2];
    uVar4 = uVar8 ^ uVar9;
    uVar8 = uVar8 >> 8 ^ uVar9 >> 0x13 ^ uVar4;
    puVar14[2] = uVar9;
    puVar14[3] = uVar8;
    local_7c0._0_4_ = (uVar8 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
    local_7c0._4_4_ = ((uint)local_7c0 ^ (uint)local_7c0 >> 0x1e) * 0x6c078965 + 2;
    local_7b8._0_4_ = (local_7c0._4_4_ ^ local_7c0._4_4_ >> 0x1e) * 0x6c078965 + 3;
    local_7b8._4_4_ = ((uint)local_7b8 ^ (uint)local_7b8 >> 0x1e) * 0x6c078965 + 4;
    lVar13 = (*(code *)local_16b0[4])(&local_16b0);
    lVar11 = 0;
    iVar16 = 0;
    do {
      puVar14 = (uint *)(lVar13 + lVar11);
      lVar11 = lVar11 + 4;
      uVar8 = *puVar14 - (*puVar14 >> 1 & 0x55555555);
      uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
      uVar8 = uVar8 + (uVar8 >> 4) & 0xf0f0f0f;
      uVar8 = uVar8 + (uVar8 >> 8);
      iVar16 = (uVar8 + (uVar8 >> 0x10) & 0x3f) + iVar16;
    } while (lVar11 != 0x754);
    if (iVar16 == 0) {
      puVar19 = (undefined4 *)&DAT_05586008;
      uVar15 = DAT_0558600a;
      uVar18 = DAT_0558600b;
    }
    else {
      lVar13 = (*(code *)local_16b0[4])(&local_16b0);
      lVar11 = 0;
      uVar8 = 0;
      do {
        puVar14 = (uint *)(lVar13 + lVar11);
        lVar11 = lVar11 + 4;
        uVar4 = *puVar14 - (*puVar14 >> 1 & 0x55555555);
        uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
        uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
        uVar4 = uVar4 + (uVar4 >> 8);
        uVar8 = (uVar4 + (uVar4 >> 0x10) & 0x3f) + uVar8;
      } while (lVar11 != 0x754);
      puVar19 = &local_7c8;
      uVar4 = (uint)local_7c0 ^ (uint)local_7c0 << 0xb;
      local_7c0._0_4_ = local_7c0._4_4_;
      local_7c0._4_4_ = (uint)local_7b8;
      uVar4 = uVar4 >> 8 ^ local_7b8._4_4_ >> 0x13 ^ uVar4 ^ local_7b8._4_4_;
      local_7b8._0_4_ = local_7b8._4_4_;
      local_7b8._4_4_ = uVar4;
      FUN_00889f80(&local_7c8,&local_16b0,(int)((ulong)uVar4 * (ulong)uVar8 >> 0x20) + 1);
      FUN_01a4c66c(&local_7c0,&local_7c8);
      uVar15 = local_7c8._2_1_;
      uVar18 = local_7c8._3_1_;
    }
    uVar2 = puVar19[1];
    *(undefined1 *)(param_1 + 1) = uVar15;
    *(undefined1 *)((long)param_1 + 3) = uVar18;
    uVar3 = *(undefined2 *)puVar19;
    *(undefined4 *)(param_1 + 2) = uVar2;
    *param_1 = uVar3;
    local_16b0 = &PTR_LAB_049ff3a8;
    memset(apuStack_16a8,0,0x754);
    uVar8 = nn::os::GetSystemTick();
    local_f54 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
    local_f50 = (local_f54 ^ local_f54 >> 0x1e) * 0x6c078965 + 2;
    local_f4c = (local_f50 ^ local_f50 >> 0x1e) * 0x6c078965 + 3;
    local_f48 = (local_f4c ^ local_f4c >> 0x1e) * 0x6c078965 + 4;
    pvVar10 = (void *)(*(code *)local_16b0[3])(&local_16b0);
    memset(pvVar10,0,0x754);
    local_7c8 = 6;
    local_7c0 = &PTR_FUN_049ff448;
    local_7b8 = &local_7c8;
    FUN_008a1ba0(&local_16b0,&local_7c0);
    local_7c0 = &PTR_FUN_049ff4e8;
    uVar8 = 0;
    local_16b4 = 0x5e;
    local_7b8 = &local_16b4;
    do {
      (*(code *)local_16b0[2])(&local_7c8,&local_16b0,uVar8);
      lVar11 = (*(code *)local_16b0[4])(&local_16b0);
      uVar4 = 1 << (ulong)(uVar8 & 0x1f);
      if ((*(uint *)(lVar11 + (ulong)(uVar8 >> 5) * 4) & uVar4) != 0) {
        lVar11 = *(long *)puVar7;
        uVar9 = FUN_0277d6c4(&local_7c8);
        if (*(long *)puVar7 != 0) {
          lVar11 = *(long *)(lVar11 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if (((uVar9 < *(uint *)(lVar11 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) &&
             (uVar12 = (*(code *)*local_7c0)(&local_7c0,&local_7c8), (uVar12 & 1) != 0))
          goto LAB_02862a94;
        }
        lVar11 = (*(code *)local_16b0[3])(&local_16b0);
        lVar13 = (ulong)(uVar8 >> 5) * 4;
        *(uint *)(lVar11 + lVar13) = *(uint *)(lVar11 + lVar13) & (uVar4 ^ 0xffffffff);
      }
LAB_02862a94:
      uVar8 = uVar8 + 1;
    } while (uVar8 != 15000);
    pvVar10 = (void *)(*(code *)local_16b0[3])(&local_16b0);
    lVar13 = (*(code *)local_f40[4])(&local_f40);
    for (lVar11 = 0;
        *(uint *)((long)&local_7c0 + lVar11) =
             *(uint *)(lVar13 + lVar11) & *(uint *)((long)pvVar10 + lVar11), lVar11 != 0x750;
        lVar11 = lVar11 + 8) {
      *(uint *)((long)&local_7c0 + lVar11 + 4) =
           *(uint *)(lVar13 + lVar11 + 4) & *(uint *)((long)pvVar10 + lVar11 + 4);
    }
    memcpy(pvVar10,&local_7c0,0x754);
    *(uint *)((long)pvVar10 + 0x750) = *(uint *)((long)pvVar10 + 0x750) & 0xffffff;
    FUN_028622e0(&local_16b0);
    puVar14 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
    uVar8 = *puVar14 ^ *puVar14 << 0xb;
    uVar9 = puVar14[3];
    *puVar14 = puVar14[1];
    puVar14[1] = puVar14[2];
    uVar4 = uVar8 ^ uVar9;
    uVar8 = uVar8 >> 8 ^ uVar9 >> 0x13 ^ uVar4;
    puVar14[2] = uVar9;
    puVar14[3] = uVar8;
    local_7c0._0_4_ = (uVar8 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
    local_7c0._4_4_ = ((uint)local_7c0 ^ (uint)local_7c0 >> 0x1e) * 0x6c078965 + 2;
    local_7b8._0_4_ = (local_7c0._4_4_ ^ local_7c0._4_4_ >> 0x1e) * 0x6c078965 + 3;
    local_7b8._4_4_ = ((uint)local_7b8 ^ (uint)local_7b8 >> 0x1e) * 0x6c078965 + 4;
    lVar13 = (*(code *)local_16b0[4])(&local_16b0);
    lVar11 = 0;
    iVar16 = 0;
    do {
      puVar14 = (uint *)(lVar13 + lVar11);
      lVar11 = lVar11 + 4;
      uVar8 = *puVar14 - (*puVar14 >> 1 & 0x55555555);
      uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
      uVar8 = uVar8 + (uVar8 >> 4) & 0xf0f0f0f;
      uVar8 = uVar8 + (uVar8 >> 8);
      iVar16 = (uVar8 + (uVar8 >> 0x10) & 0x3f) + iVar16;
    } while (lVar11 != 0x754);
    if (iVar16 == 0) {
      puVar19 = (undefined4 *)&DAT_05586008;
      uVar15 = DAT_0558600a;
      uVar18 = DAT_0558600b;
    }
    else {
      lVar13 = (*(code *)local_16b0[4])(&local_16b0);
      lVar11 = 0;
      uVar8 = 0;
      do {
        puVar14 = (uint *)(lVar13 + lVar11);
        lVar11 = lVar11 + 4;
        uVar4 = *puVar14 - (*puVar14 >> 1 & 0x55555555);
        uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
        uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
        uVar4 = uVar4 + (uVar4 >> 8);
        uVar8 = (uVar4 + (uVar4 >> 0x10) & 0x3f) + uVar8;
      } while (lVar11 != 0x754);
      puVar19 = &local_7c8;
      uVar4 = (uint)local_7c0 ^ (uint)local_7c0 << 0xb;
      local_7c0._0_4_ = local_7c0._4_4_;
      local_7c0._4_4_ = (uint)local_7b8;
      uVar4 = uVar4 >> 8 ^ local_7b8._4_4_ >> 0x13 ^ uVar4 ^ local_7b8._4_4_;
      local_7b8._0_4_ = local_7b8._4_4_;
      local_7b8._4_4_ = uVar4;
      FUN_00889f80(&local_7c8,&local_16b0,(int)((ulong)uVar4 * (ulong)uVar8 >> 0x20) + 1);
      FUN_01a4c66c(&local_7c0,&local_7c8);
      uVar15 = local_7c8._2_1_;
      uVar18 = local_7c8._3_1_;
    }
    uVar2 = puVar19[1];
    *(undefined1 *)(param_1 + 5) = uVar15;
    *(undefined1 *)((long)param_1 + 0xb) = uVar18;
    uVar3 = *(undefined2 *)puVar19;
    *(undefined4 *)(param_1 + 6) = uVar2;
    param_1[4] = uVar3;
    local_16b0 = &PTR_LAB_049ff3a8;
    memset(apuStack_16a8,0,0x754);
    uVar8 = nn::os::GetSystemTick();
    local_f54 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
    local_f50 = (local_f54 ^ local_f54 >> 0x1e) * 0x6c078965 + 2;
    local_f4c = (local_f50 ^ local_f50 >> 0x1e) * 0x6c078965 + 3;
    local_f48 = (local_f4c ^ local_f4c >> 0x1e) * 0x6c078965 + 4;
    pvVar10 = (void *)(*(code *)local_16b0[3])(&local_16b0);
    memset(pvVar10,0,0x754);
    local_7c8 = 6;
    local_7c0 = &PTR_FUN_049ff448;
    local_7b8 = &local_7c8;
    FUN_008a1ba0(&local_16b0,&local_7c0);
    local_7c0 = &PTR_FUN_049ff4e8;
    uVar8 = 0;
    local_16b4 = 0x5d;
    local_7b8 = &local_16b4;
    do {
      (*(code *)local_16b0[2])(&local_7c8,&local_16b0,uVar8);
      lVar11 = (*(code *)local_16b0[4])(&local_16b0);
      uVar4 = 1 << (ulong)(uVar8 & 0x1f);
      if ((*(uint *)(lVar11 + (ulong)(uVar8 >> 5) * 4) & uVar4) != 0) {
        lVar11 = *(long *)puVar7;
        uVar9 = FUN_0277d6c4(&local_7c8);
        if (*(long *)puVar7 != 0) {
          lVar11 = *(long *)(lVar11 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if (((uVar9 < *(uint *)(lVar11 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) &&
             (uVar12 = (*(code *)*local_7c0)(&local_7c0,&local_7c8), (uVar12 & 1) != 0))
          goto LAB_02862e94;
        }
        lVar11 = (*(code *)local_16b0[3])(&local_16b0);
        lVar13 = (ulong)(uVar8 >> 5) * 4;
        *(uint *)(lVar11 + lVar13) = *(uint *)(lVar11 + lVar13) & (uVar4 ^ 0xffffffff);
      }
LAB_02862e94:
      uVar8 = uVar8 + 1;
    } while (uVar8 != 15000);
    pvVar10 = (void *)(*(code *)local_16b0[3])(&local_16b0);
    lVar13 = (*(code *)local_f40[4])(&local_f40);
    for (lVar11 = 0;
        *(uint *)((long)&local_7c0 + lVar11) =
             *(uint *)(lVar13 + lVar11) & *(uint *)((long)pvVar10 + lVar11), lVar11 != 0x750;
        lVar11 = lVar11 + 8) {
      *(uint *)((long)&local_7c0 + lVar11 + 4) =
           *(uint *)(lVar13 + lVar11 + 4) & *(uint *)((long)pvVar10 + lVar11 + 4);
    }
    memcpy(pvVar10,&local_7c0,0x754);
    *(uint *)((long)pvVar10 + 0x750) = *(uint *)((long)pvVar10 + 0x750) & 0xffffff;
    FUN_028622e0(&local_16b0);
    puVar14 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
    uVar8 = *puVar14 ^ *puVar14 << 0xb;
    uVar9 = puVar14[3];
    *puVar14 = puVar14[1];
    puVar14[1] = puVar14[2];
    uVar4 = uVar8 ^ uVar9;
    uVar8 = uVar8 >> 8 ^ uVar9 >> 0x13 ^ uVar4;
    puVar14[2] = uVar9;
    puVar14[3] = uVar8;
    local_7c0._0_4_ = (uVar8 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
    local_7c0._4_4_ = ((uint)local_7c0 ^ (uint)local_7c0 >> 0x1e) * 0x6c078965 + 2;
    local_7b8._0_4_ = (local_7c0._4_4_ ^ local_7c0._4_4_ >> 0x1e) * 0x6c078965 + 3;
    local_7b8._4_4_ = ((uint)local_7b8 ^ (uint)local_7b8 >> 0x1e) * 0x6c078965 + 4;
    lVar13 = (*(code *)local_16b0[4])(&local_16b0);
    lVar11 = 0;
    iVar16 = 0;
    do {
      puVar14 = (uint *)(lVar13 + lVar11);
      lVar11 = lVar11 + 4;
      uVar8 = *puVar14 - (*puVar14 >> 1 & 0x55555555);
      uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
      uVar8 = uVar8 + (uVar8 >> 4) & 0xf0f0f0f;
      uVar8 = uVar8 + (uVar8 >> 8);
      iVar16 = (uVar8 + (uVar8 >> 0x10) & 0x3f) + iVar16;
    } while (lVar11 != 0x754);
    if (iVar16 == 0) {
      puVar19 = (undefined4 *)&DAT_05586008;
      uVar15 = DAT_0558600a;
      uVar18 = DAT_0558600b;
    }
    else {
      lVar13 = (*(code *)local_16b0[4])(&local_16b0);
      lVar11 = 0;
      uVar8 = 0;
      do {
        puVar14 = (uint *)(lVar13 + lVar11);
        lVar11 = lVar11 + 4;
        uVar4 = *puVar14 - (*puVar14 >> 1 & 0x55555555);
        uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
        uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
        uVar4 = uVar4 + (uVar4 >> 8);
        uVar8 = (uVar4 + (uVar4 >> 0x10) & 0x3f) + uVar8;
      } while (lVar11 != 0x754);
      puVar19 = &local_7c8;
      uVar4 = (uint)local_7c0 ^ (uint)local_7c0 << 0xb;
      local_7c0._0_4_ = local_7c0._4_4_;
      local_7c0._4_4_ = (uint)local_7b8;
      uVar4 = uVar4 >> 8 ^ local_7b8._4_4_ >> 0x13 ^ uVar4 ^ local_7b8._4_4_;
      local_7b8._0_4_ = local_7b8._4_4_;
      local_7b8._4_4_ = uVar4;
      FUN_00889f80(&local_7c8,&local_16b0,(int)((ulong)uVar4 * (ulong)uVar8 >> 0x20) + 1);
      FUN_01a4c66c(&local_7c0,&local_7c8);
      uVar15 = local_7c8._2_1_;
      uVar18 = local_7c8._3_1_;
    }
    uVar2 = puVar19[1];
    *(undefined1 *)(param_1 + 9) = uVar15;
    *(undefined1 *)((long)param_1 + 0x13) = uVar18;
    uVar3 = *(undefined2 *)puVar19;
    *(undefined4 *)(param_1 + 10) = uVar2;
    param_1[8] = uVar3;
    local_16b0 = &PTR_LAB_049ff3a8;
    memset(apuStack_16a8,0,0x754);
    uVar8 = nn::os::GetSystemTick();
    local_f54 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
    local_f50 = (local_f54 ^ local_f54 >> 0x1e) * 0x6c078965 + 2;
    local_f4c = (local_f50 ^ local_f50 >> 0x1e) * 0x6c078965 + 3;
    local_f48 = (local_f4c ^ local_f4c >> 0x1e) * 0x6c078965 + 4;
    pvVar10 = (void *)(*(code *)local_16b0[3])(&local_16b0);
    memset(pvVar10,0,0x754);
    local_7c8 = 4;
    local_7c0 = &PTR_FUN_049ff448;
    local_7b8 = &local_7c8;
    FUN_008a1ba0(&local_16b0,&local_7c0);
    local_7c0 = &PTR_FUN_049ff4e8;
    uVar8 = 0;
    local_16b4 = 0x60;
    local_7b8 = &local_16b4;
    do {
      (*(code *)local_16b0[2])(&local_7c8,&local_16b0,uVar8);
      lVar11 = (*(code *)local_16b0[4])(&local_16b0);
      uVar4 = 1 << (ulong)(uVar8 & 0x1f);
      if ((*(uint *)(lVar11 + (ulong)(uVar8 >> 5) * 4) & uVar4) != 0) {
        lVar11 = *(long *)puVar7;
        uVar9 = FUN_0277d6c4(&local_7c8);
        if (*(long *)puVar7 != 0) {
          lVar11 = *(long *)(lVar11 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if (((uVar9 < *(uint *)(lVar11 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) &&
             (uVar12 = (*(code *)*local_7c0)(&local_7c0,&local_7c8), (uVar12 & 1) != 0))
          goto LAB_02863294;
        }
        lVar11 = (*(code *)local_16b0[3])(&local_16b0);
        lVar13 = (ulong)(uVar8 >> 5) * 4;
        *(uint *)(lVar11 + lVar13) = *(uint *)(lVar11 + lVar13) & (uVar4 ^ 0xffffffff);
      }
LAB_02863294:
      uVar8 = uVar8 + 1;
    } while (uVar8 != 15000);
    pvVar10 = (void *)(*(code *)local_16b0[3])(&local_16b0);
    lVar13 = (*(code *)local_f40[4])(&local_f40);
    for (lVar11 = 0;
        *(uint *)((long)&local_7c0 + lVar11) =
             *(uint *)(lVar13 + lVar11) & *(uint *)((long)pvVar10 + lVar11), lVar11 != 0x750;
        lVar11 = lVar11 + 8) {
      *(uint *)((long)&local_7c0 + lVar11 + 4) =
           *(uint *)(lVar13 + lVar11 + 4) & *(uint *)((long)pvVar10 + lVar11 + 4);
    }
    memcpy(pvVar10,&local_7c0,0x754);
    *(uint *)((long)pvVar10 + 0x750) = *(uint *)((long)pvVar10 + 0x750) & 0xffffff;
    FUN_028622e0(&local_16b0);
    puVar14 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
    uVar8 = *puVar14 ^ *puVar14 << 0xb;
    uVar9 = puVar14[3];
    *puVar14 = puVar14[1];
    puVar14[1] = puVar14[2];
    uVar4 = uVar8 ^ uVar9;
    uVar8 = uVar8 >> 8 ^ uVar9 >> 0x13 ^ uVar4;
    puVar14[2] = uVar9;
    puVar14[3] = uVar8;
    uVar8 = (uVar8 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
    uVar4 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 2;
    uVar9 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 3;
    uVar5 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 4;
    lVar13 = (*(code *)local_16b0[4])(&local_16b0);
    lVar11 = 0;
    iVar16 = 0;
    do {
      puVar14 = (uint *)(lVar13 + lVar11);
      lVar11 = lVar11 + 4;
      uVar17 = *puVar14 - (*puVar14 >> 1 & 0x55555555);
      uVar17 = (uVar17 >> 2 & 0x33333333) + (uVar17 & 0x33333333);
      uVar17 = uVar17 + (uVar17 >> 4) & 0xf0f0f0f;
      uVar17 = uVar17 + (uVar17 >> 8);
      iVar16 = (uVar17 + (uVar17 >> 0x10) & 0x3f) + iVar16;
    } while (lVar11 != 0x754);
    if (iVar16 == 0) {
      puVar19 = (undefined4 *)&DAT_05586008;
      uVar15 = DAT_0558600a;
      uVar18 = DAT_0558600b;
    }
    else {
      lVar13 = (*(code *)local_16b0[4])(&local_16b0);
      lVar11 = 0;
      uVar17 = 0;
      do {
        puVar14 = (uint *)(lVar13 + lVar11);
        lVar11 = lVar11 + 4;
        uVar6 = *puVar14 - (*puVar14 >> 1 & 0x55555555);
        uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
        uVar6 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f;
        uVar6 = uVar6 + (uVar6 >> 8);
        uVar17 = (uVar6 + (uVar6 >> 0x10) & 0x3f) + uVar17;
      } while (lVar11 != 0x754);
      uVar8 = uVar8 ^ uVar8 * 0x800;
      local_7c0 = (undefined **)CONCAT44(uVar9,uVar4);
      puVar19 = &local_7c8;
      uVar8 = uVar8 >> 8 ^ uVar5 >> 0x13 ^ uVar8 ^ uVar5;
      local_7b8 = (undefined4 *)CONCAT44(uVar8,uVar5);
      FUN_00889f80(&local_7c8,&local_16b0,(int)((ulong)uVar8 * (ulong)uVar17 >> 0x20) + 1);
      FUN_01a4c66c(&local_7c0,&local_7c8);
      uVar15 = local_7c8._2_1_;
      uVar18 = local_7c8._3_1_;
    }
    uVar2 = puVar19[1];
    *(undefined1 *)(param_1 + 0xd) = uVar15;
    *(undefined1 *)((long)param_1 + 0x1b) = uVar18;
    uVar3 = *(undefined2 *)puVar19;
    *(undefined4 *)(param_1 + 0xe) = uVar2;
    param_1[0xc] = uVar3;
    local_16b0 = &PTR_LAB_049ff3a8;
    memset(apuStack_16a8,0,0x754);
    uVar8 = nn::os::GetSystemTick();
    local_f54 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
    local_f50 = (local_f54 ^ local_f54 >> 0x1e) * 0x6c078965 + 2;
    local_f4c = (local_f50 ^ local_f50 >> 0x1e) * 0x6c078965 + 3;
    local_f48 = (local_f4c ^ local_f4c >> 0x1e) * 0x6c078965 + 4;
    pvVar10 = (void *)FUN_01a451fc(&local_16b0);
    memset(pvVar10,0,0x754);
    local_7c8 = 5;
    local_7c0 = &PTR_FUN_049ff448;
    local_7b8 = &local_7c8;
    FUN_008a1ba0(&local_16b0,&local_7c0);
    local_7c0 = &PTR_FUN_049ff4e8;
    uVar8 = 0;
    local_16b4 = 0x60;
    local_7b8 = &local_16b4;
    do {
      (*(code *)local_16b0[2])(&local_7c8,&local_16b0,uVar8);
      lVar11 = (*(code *)local_16b0[4])(&local_16b0);
      uVar4 = 1 << (ulong)(uVar8 & 0x1f);
      if ((*(uint *)(lVar11 + (ulong)(uVar8 >> 5) * 4) & uVar4) != 0) {
        lVar11 = *(long *)puVar7;
        uVar9 = FUN_0277d6c4(&local_7c8);
        if (*(long *)puVar7 != 0) {
          lVar11 = *(long *)(lVar11 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if (((uVar9 < *(uint *)(lVar11 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) &&
             (uVar12 = (*(code *)*local_7c0)(&local_7c0,&local_7c8), (uVar12 & 1) != 0))
          goto LAB_02863670;
        }
        lVar11 = (*(code *)local_16b0[3])(&local_16b0);
        lVar13 = (ulong)(uVar8 >> 5) * 4;
        *(uint *)(lVar11 + lVar13) = *(uint *)(lVar11 + lVar13) & (uVar4 ^ 0xffffffff);
      }
LAB_02863670:
      uVar8 = uVar8 + 1;
    } while (uVar8 != 15000);
    pvVar10 = (void *)(*(code *)local_16b0[3])(&local_16b0);
    lVar13 = (*(code *)local_f40[4])(&local_f40);
    for (lVar11 = 0;
        *(uint *)((long)&local_7c0 + lVar11) =
             *(uint *)(lVar13 + lVar11) & *(uint *)((long)pvVar10 + lVar11), lVar11 != 0x750;
        lVar11 = lVar11 + 8) {
      *(uint *)((long)&local_7c0 + lVar11 + 4) =
           *(uint *)(lVar13 + lVar11 + 4) & *(uint *)((long)pvVar10 + lVar11 + 4);
    }
    memcpy(pvVar10,&local_7c0,0x754);
    *(uint *)((long)pvVar10 + 0x750) = *(uint *)((long)pvVar10 + 0x750) & 0xffffff;
    FUN_028622e0(&local_16b0);
    puVar14 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
    uVar8 = *puVar14 ^ *puVar14 << 0xb;
    uVar9 = puVar14[3];
    *puVar14 = puVar14[1];
    puVar14[1] = puVar14[2];
    uVar4 = uVar8 ^ uVar9;
    uVar8 = uVar8 >> 8 ^ uVar9 >> 0x13 ^ uVar4;
    puVar14[2] = uVar9;
    puVar14[3] = uVar8;
    uVar8 = (uVar8 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
    uVar4 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 2;
    uVar9 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 3;
    uVar5 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 4;
    lVar13 = (*(code *)local_16b0[4])(&local_16b0);
    lVar11 = 0;
    iVar16 = 0;
    do {
      puVar14 = (uint *)(lVar13 + lVar11);
      lVar11 = lVar11 + 4;
      uVar17 = *puVar14 - (*puVar14 >> 1 & 0x55555555);
      uVar17 = (uVar17 >> 2 & 0x33333333) + (uVar17 & 0x33333333);
      uVar17 = uVar17 + (uVar17 >> 4) & 0xf0f0f0f;
      uVar17 = uVar17 + (uVar17 >> 8);
      iVar16 = (uVar17 + (uVar17 >> 0x10) & 0x3f) + iVar16;
    } while (lVar11 != 0x754);
    if (iVar16 == 0) {
      puVar19 = (undefined4 *)&DAT_05586008;
      local_7c8._2_1_ = DAT_0558600a;
      local_7c8._3_1_ = DAT_0558600b;
    }
    else {
      lVar13 = (*(code *)local_16b0[4])(&local_16b0);
      lVar11 = 0;
      uVar17 = 0;
      do {
        puVar14 = (uint *)(lVar13 + lVar11);
        lVar11 = lVar11 + 4;
        uVar6 = *puVar14 - (*puVar14 >> 1 & 0x55555555);
        uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
        uVar6 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f;
        uVar6 = uVar6 + (uVar6 >> 8);
        uVar17 = (uVar6 + (uVar6 >> 0x10) & 0x3f) + uVar17;
      } while (lVar11 != 0x754);
      uVar8 = uVar8 ^ uVar8 * 0x800;
      local_7c0 = (undefined **)CONCAT44(uVar9,uVar4);
      puVar19 = &local_7c8;
      uVar8 = uVar8 >> 8 ^ uVar5 >> 0x13 ^ uVar8 ^ uVar5;
      local_7b8 = (undefined4 *)CONCAT44(uVar8,uVar5);
      FUN_00889f80(&local_7c8,&local_16b0,(int)((ulong)uVar8 * (ulong)uVar17 >> 0x20) + 1);
      FUN_01a4c66c(&local_7c0,&local_7c8);
    }
    uVar2 = puVar19[1];
    param_1[0x10] = *(undefined2 *)puVar19;
    *(undefined1 *)(param_1 + 0x11) = local_7c8._2_1_;
    *(undefined1 *)((long)param_1 + 0x23) = local_7c8._3_1_;
    *(undefined4 *)(param_1 + 0x12) = uVar2;
  }
  return;
}

