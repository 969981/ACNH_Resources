
bool FUN_02d710d0(undefined8 param_1,undefined2 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  void *pvVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  long lVar14;
  undefined2 *puVar15;
  undefined2 uStack_800;
  undefined1 local_7fe;
  undefined1 local_7fd;
  undefined **local_7f8;
  undefined1 auStack_7f0 [1876];
  uint local_9c;
  uint local_98;
  uint local_94;
  int local_90;
  undefined8 local_88;
  undefined8 local_80;
  
  iVar5 = FUN_0277d6c4();
  bVar4 = iVar5 == 0x3738;
  if (bVar4) {
    local_7f8 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
    memset(auStack_7f0,0,0x754);
    uVar6 = nn::os::GetSystemTick();
    local_9c = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 1;
    local_98 = (local_9c ^ local_9c >> 0x1e) * 0x6c078965 + 2;
    local_94 = (local_98 ^ local_98 >> 0x1e) * 0x6c078965 + 3;
    local_90 = (local_94 ^ local_94 >> 0x1e) * 0x6c078965 + 4;
    pvVar8 = (void *)FUN_01a451fc(&local_7f8);
    memset(pvVar8,0,0x754);
    pvVar8 = (void *)(*(code *)local_7f8[3])(&local_7f8);
    memset(pvVar8,0,0x754);
    local_88 = &PTR_LAB_049ff9e8;
    local_80 = param_1;
    FUN_008a1ba0(&local_7f8,&local_88);
    puVar9 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
    uVar6 = *puVar9 ^ *puVar9 << 0xb;
    uVar1 = puVar9[3];
    *puVar9 = puVar9[1];
    puVar9[1] = puVar9[2];
    uVar7 = uVar6 ^ uVar1;
    uVar6 = uVar6 >> 8 ^ uVar1 >> 0x13 ^ uVar7;
    puVar9[2] = uVar1;
    puVar9[3] = uVar6;
    uVar6 = (uVar6 ^ uVar7 >> 0x1e) * 0x6c078965 + 1;
    uVar7 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 2;
    local_88 = (undefined **)CONCAT44(uVar7,uVar6);
    uVar6 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 3;
    local_80 = CONCAT44((uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 4,uVar6);
    lVar10 = (*(code *)local_7f8[4])(&local_7f8);
    lVar14 = 0;
    iVar5 = 0;
    do {
      puVar9 = (uint *)(lVar10 + lVar14);
      lVar14 = lVar14 + 4;
      uVar6 = *puVar9 - (*puVar9 >> 1 & 0x55555555);
      uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
      uVar6 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f;
      uVar6 = uVar6 + (uVar6 >> 8);
      iVar5 = (uVar6 + (uVar6 >> 0x10) & 0x3f) + iVar5;
    } while (lVar14 != 0x754);
    if (iVar5 == 0) {
      puVar15 = &DAT_05586008;
      uVar13 = DAT_0558600b;
      uVar12 = DAT_0558600a;
    }
    else {
      lVar10 = (*(code *)local_7f8[4])(&local_7f8);
      lVar14 = 0;
      uVar6 = 0;
      do {
        puVar9 = (uint *)(lVar10 + lVar14);
        lVar14 = lVar14 + 4;
        uVar7 = *puVar9 - (*puVar9 >> 1 & 0x55555555);
        uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
        uVar7 = uVar7 + (uVar7 >> 4) & 0xf0f0f0f;
        uVar7 = uVar7 + (uVar7 >> 8);
        uVar6 = (uVar7 + (uVar7 >> 0x10) & 0x3f) + uVar6;
      } while (lVar14 != 0x754);
      puVar15 = &uStack_800;
      uVar7 = (uint)local_88 ^ (uint)local_88 << 0xb;
      local_88 = (undefined **)CONCAT44((undefined4)local_80,local_88._4_4_);
      uVar7 = uVar7 >> 8 ^ local_80._4_4_ >> 0x13 ^ uVar7 ^ local_80._4_4_;
      local_80 = CONCAT44(uVar7,local_80._4_4_);
      FUN_00889f80(&uStack_800,&local_7f8,(int)((ulong)uVar7 * (ulong)uVar6 >> 0x20) + 1);
      FUN_01a4c66c(&local_88,&uStack_800);
      uVar13 = local_7fd;
      uVar12 = local_7fe;
    }
    uVar2 = *(undefined4 *)(puVar15 + 2);
    *param_2 = *puVar15;
    *(undefined1 *)(param_2 + 1) = uVar12;
    *(undefined1 *)((long)param_2 + 3) = uVar13;
    *(undefined4 *)(param_2 + 2) = uVar2;
  }
  iVar5 = FUN_0277d6c4(param_1);
  if (iVar5 == 0xa40) {
    local_7f8 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
    memset(auStack_7f0,0,0x754);
    uVar6 = nn::os::GetSystemTick();
    local_9c = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 1;
    local_98 = (local_9c ^ local_9c >> 0x1e) * 0x6c078965 + 2;
    local_94 = (local_98 ^ local_98 >> 0x1e) * 0x6c078965 + 3;
    local_90 = (local_94 ^ local_94 >> 0x1e) * 0x6c078965 + 4;
    pvVar8 = (void *)(*(code *)local_7f8[3])(&local_7f8);
    memset(pvVar8,0,0x754);
    pvVar8 = (void *)(*(code *)local_7f8[3])(&local_7f8);
    memset(pvVar8,0,0x754);
    local_88 = &PTR_LAB_049ff9e8;
    local_80 = param_1;
    FUN_008a1ba0(&local_7f8,&local_88);
    puVar9 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
    uVar6 = *puVar9 ^ *puVar9 << 0xb;
    uVar1 = puVar9[3];
    *puVar9 = puVar9[1];
    puVar9[1] = puVar9[2];
    uVar7 = uVar6 ^ uVar1;
    uVar6 = uVar6 >> 8 ^ uVar1 >> 0x13 ^ uVar7;
    puVar9[2] = uVar1;
    puVar9[3] = uVar6;
    uVar6 = (uVar6 ^ uVar7 >> 0x1e) * 0x6c078965 + 1;
    uVar7 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 2;
    local_88 = (undefined **)CONCAT44(uVar7,uVar6);
    uVar6 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 3;
    local_80 = CONCAT44((uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 4,uVar6);
    lVar10 = (*(code *)local_7f8[4])(&local_7f8);
    lVar14 = 0;
    iVar5 = 0;
    do {
      puVar9 = (uint *)(lVar10 + lVar14);
      lVar14 = lVar14 + 4;
      uVar6 = *puVar9 - (*puVar9 >> 1 & 0x55555555);
      uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
      uVar6 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f;
      uVar6 = uVar6 + (uVar6 >> 8);
      iVar5 = (uVar6 + (uVar6 >> 0x10) & 0x3f) + iVar5;
    } while (lVar14 != 0x754);
    if (iVar5 == 0) {
      puVar15 = &DAT_05586008;
      uVar12 = DAT_0558600a;
      uVar13 = DAT_0558600b;
    }
    else {
      lVar10 = (*(code *)local_7f8[4])(&local_7f8);
      lVar14 = 0;
      uVar6 = 0;
      do {
        puVar9 = (uint *)(lVar10 + lVar14);
        lVar14 = lVar14 + 4;
        uVar7 = *puVar9 - (*puVar9 >> 1 & 0x55555555);
        uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
        uVar7 = uVar7 + (uVar7 >> 4) & 0xf0f0f0f;
        uVar7 = uVar7 + (uVar7 >> 8);
        uVar6 = (uVar7 + (uVar7 >> 0x10) & 0x3f) + uVar6;
      } while (lVar14 != 0x754);
      puVar15 = &uStack_800;
      uVar7 = (uint)local_88 ^ (uint)local_88 << 0xb;
      local_88 = (undefined **)CONCAT44((undefined4)local_80,local_88._4_4_);
      uVar7 = uVar7 >> 8 ^ local_80._4_4_ >> 0x13 ^ uVar7 ^ local_80._4_4_;
      local_80 = CONCAT44(uVar7,local_80._4_4_);
      FUN_00889f80(&uStack_800,&local_7f8,(int)((ulong)uVar7 * (ulong)uVar6 >> 0x20) + 1);
      FUN_01a4c66c(&local_88,&uStack_800);
      uVar12 = local_7fe;
      uVar13 = local_7fd;
    }
    uVar2 = *(undefined4 *)(puVar15 + 2);
    *(undefined1 *)(param_2 + 1) = uVar12;
    uVar3 = *puVar15;
    bVar4 = true;
    *(undefined1 *)((long)param_2 + 3) = uVar13;
    *(undefined4 *)(param_2 + 2) = uVar2;
    *param_2 = uVar3;
  }
  iVar5 = FUN_0277d6c4(param_1);
  if (iVar5 == 0x3106) {
    local_7f8 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
    memset(auStack_7f0,0,0x754);
    uVar6 = nn::os::GetSystemTick();
    local_9c = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 1;
    local_98 = (local_9c ^ local_9c >> 0x1e) * 0x6c078965 + 2;
    local_94 = (local_98 ^ local_98 >> 0x1e) * 0x6c078965 + 3;
    local_90 = (local_94 ^ local_94 >> 0x1e) * 0x6c078965 + 4;
    pvVar8 = (void *)(*(code *)local_7f8[3])(&local_7f8);
    memset(pvVar8,0,0x754);
    pvVar8 = (void *)(*(code *)local_7f8[3])(&local_7f8);
    memset(pvVar8,0,0x754);
    local_88 = &PTR_LAB_049ff9e8;
    local_80 = param_1;
    FUN_008a1ba0(&local_7f8,&local_88);
    puVar9 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
    uVar6 = *puVar9 ^ *puVar9 << 0xb;
    uVar1 = puVar9[3];
    *puVar9 = puVar9[1];
    puVar9[1] = puVar9[2];
    uVar7 = uVar6 ^ uVar1;
    uVar6 = uVar6 >> 8 ^ uVar1 >> 0x13 ^ uVar7;
    puVar9[2] = uVar1;
    puVar9[3] = uVar6;
    uVar6 = (uVar6 ^ uVar7 >> 0x1e) * 0x6c078965 + 1;
    uVar7 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 2;
    local_88 = (undefined **)CONCAT44(uVar7,uVar6);
    uVar6 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 3;
    local_80 = CONCAT44((uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 4,uVar6);
    lVar10 = (*(code *)local_7f8[4])(&local_7f8);
    lVar14 = 0;
    iVar5 = 0;
    do {
      puVar9 = (uint *)(lVar10 + lVar14);
      lVar14 = lVar14 + 4;
      uVar6 = *puVar9 - (*puVar9 >> 1 & 0x55555555);
      uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
      uVar6 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f;
      uVar6 = uVar6 + (uVar6 >> 8);
      iVar5 = (uVar6 + (uVar6 >> 0x10) & 0x3f) + iVar5;
    } while (lVar14 != 0x754);
    if (iVar5 == 0) {
      puVar15 = &DAT_05586008;
      uVar12 = DAT_0558600a;
      uVar13 = DAT_0558600b;
    }
    else {
      lVar10 = (*(code *)local_7f8[4])(&local_7f8);
      lVar14 = 0;
      uVar6 = 0;
      do {
        puVar9 = (uint *)(lVar10 + lVar14);
        lVar14 = lVar14 + 4;
        uVar7 = *puVar9 - (*puVar9 >> 1 & 0x55555555);
        uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
        uVar7 = uVar7 + (uVar7 >> 4) & 0xf0f0f0f;
        uVar7 = uVar7 + (uVar7 >> 8);
        uVar6 = (uVar7 + (uVar7 >> 0x10) & 0x3f) + uVar6;
      } while (lVar14 != 0x754);
      puVar15 = &uStack_800;
      uVar7 = (uint)local_88 ^ (uint)local_88 << 0xb;
      local_88 = (undefined **)CONCAT44((undefined4)local_80,local_88._4_4_);
      uVar7 = uVar7 >> 8 ^ local_80._4_4_ >> 0x13 ^ uVar7 ^ local_80._4_4_;
      local_80 = CONCAT44(uVar7,local_80._4_4_);
      FUN_00889f80(&uStack_800,&local_7f8,(int)((ulong)uVar7 * (ulong)uVar6 >> 0x20) + 1);
      FUN_01a4c66c(&local_88,&uStack_800);
      uVar12 = local_7fe;
      uVar13 = local_7fd;
    }
    uVar2 = *(undefined4 *)(puVar15 + 2);
    *(undefined1 *)(param_2 + 1) = uVar12;
    uVar3 = *puVar15;
    bVar4 = true;
    *(undefined1 *)((long)param_2 + 3) = uVar13;
    *(undefined4 *)(param_2 + 2) = uVar2;
    *param_2 = uVar3;
  }
  iVar5 = FUN_0277d6c4(param_1);
  if (iVar5 == 0x3107) {
    local_7f8 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
    memset(auStack_7f0,0,0x754);
    uVar6 = nn::os::GetSystemTick();
    local_9c = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 1;
    local_98 = (local_9c ^ local_9c >> 0x1e) * 0x6c078965 + 2;
    local_94 = (local_98 ^ local_98 >> 0x1e) * 0x6c078965 + 3;
    local_90 = (local_94 ^ local_94 >> 0x1e) * 0x6c078965 + 4;
    pvVar8 = (void *)(*(code *)local_7f8[3])(&local_7f8);
    memset(pvVar8,0,0x754);
    pvVar8 = (void *)(*(code *)local_7f8[3])(&local_7f8);
    memset(pvVar8,0,0x754);
    local_88 = &PTR_LAB_049ff9e8;
    local_80 = param_1;
    FUN_008a1ba0(&local_7f8,&local_88);
    puVar9 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
    uVar6 = *puVar9 ^ *puVar9 << 0xb;
    uVar1 = puVar9[3];
    *puVar9 = puVar9[1];
    puVar9[1] = puVar9[2];
    uVar7 = uVar6 ^ uVar1;
    uVar6 = uVar6 >> 8 ^ uVar1 >> 0x13 ^ uVar7;
    puVar9[2] = uVar1;
    puVar9[3] = uVar6;
    uVar6 = (uVar6 ^ uVar7 >> 0x1e) * 0x6c078965 + 1;
    uVar7 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 2;
    local_88 = (undefined **)CONCAT44(uVar7,uVar6);
    uVar6 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 3;
    local_80 = CONCAT44((uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 4,uVar6);
    lVar10 = (*(code *)local_7f8[4])(&local_7f8);
    lVar14 = 0;
    iVar5 = 0;
    do {
      puVar9 = (uint *)(lVar10 + lVar14);
      lVar14 = lVar14 + 4;
      uVar6 = *puVar9 - (*puVar9 >> 1 & 0x55555555);
      uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
      uVar6 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f;
      uVar6 = uVar6 + (uVar6 >> 8);
      iVar5 = (uVar6 + (uVar6 >> 0x10) & 0x3f) + iVar5;
    } while (lVar14 != 0x754);
    if (iVar5 == 0) {
      puVar15 = &DAT_05586008;
      local_7fe = DAT_0558600a;
      local_7fd = DAT_0558600b;
    }
    else {
      lVar10 = (*(code *)local_7f8[4])(&local_7f8);
      lVar14 = 0;
      uVar6 = 0;
      do {
        puVar9 = (uint *)(lVar10 + lVar14);
        lVar14 = lVar14 + 4;
        uVar7 = *puVar9 - (*puVar9 >> 1 & 0x55555555);
        uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
        uVar7 = uVar7 + (uVar7 >> 4) & 0xf0f0f0f;
        uVar7 = uVar7 + (uVar7 >> 8);
        uVar6 = (uVar7 + (uVar7 >> 0x10) & 0x3f) + uVar6;
      } while (lVar14 != 0x754);
      uVar7 = (uint)local_88 ^ (uint)local_88 << 0xb;
      local_88 = (undefined **)CONCAT44((undefined4)local_80,local_88._4_4_);
      uVar7 = uVar7 >> 8 ^ local_80._4_4_ >> 0x13 ^ uVar7 ^ local_80._4_4_;
      local_80 = CONCAT44(uVar7,local_80._4_4_);
      FUN_00889f80(&uStack_800,&local_7f8,(int)((ulong)uVar7 * (ulong)uVar6 >> 0x20) + 1);
      FUN_01a4c66c(&local_88,&uStack_800);
      puVar15 = &uStack_800;
    }
    bVar4 = true;
    uVar2 = *(undefined4 *)(puVar15 + 2);
    *(undefined1 *)(param_2 + 1) = local_7fe;
    uVar3 = *puVar15;
    *(undefined1 *)((long)param_2 + 3) = local_7fd;
    *(undefined4 *)(param_2 + 2) = uVar2;
    *param_2 = uVar3;
  }
  lVar14 = 0;
  puVar9 = &DAT_041806d0;
  do {
    uVar6 = FUN_0277d6c4(param_1);
    if (uVar6 == *puVar9) {
      local_7f8 = &PTR_LAB_049ff3a8;
      memset(auStack_7f0,0,0x754);
      uVar7 = nn::os::GetSystemTick();
      local_9c = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 1;
      local_98 = (local_9c ^ local_9c >> 0x1e) * 0x6c078965 + 2;
      local_94 = (local_98 ^ local_98 >> 0x1e) * 0x6c078965 + 3;
      local_90 = (local_94 ^ local_94 >> 0x1e) * 0x6c078965 + 4;
      pvVar8 = (void *)(*(code *)local_7f8[3])(&local_7f8);
      memset(pvVar8,0,0x754);
      pvVar8 = (void *)(*(code *)local_7f8[3])(&local_7f8);
      memset(pvVar8,0,0x754);
      local_88._0_4_ = uVar6 & 0xffff;
      local_88 = (undefined **)(ulong)(uint)local_88;
      FUN_0277d4ac(&local_88);
      FUN_0277dedc(&local_88);
      lVar10 = (*(code *)local_7f8[3])(&local_7f8);
      uVar6 = FUN_0277d6c4(&local_88);
      if ((uVar6 >> 3 & 0x1fff) < 0x753) {
        lVar11 = (ulong)((uVar6 & 0xffff) >> 5) * 4;
        *(uint *)(lVar10 + lVar11) = *(uint *)(lVar10 + lVar11) | 1 << (ulong)(uVar6 & 0x1f);
      }
      local_88 = (undefined **)(ulong)(ushort)(&DAT_041806d4)[lVar14 * 3];
      FUN_0277d4ac(&local_88);
      FUN_0277dedc(&local_88);
      lVar10 = (*(code *)local_7f8[3])(&local_7f8);
      uVar6 = FUN_0277d6c4(&local_88);
      if ((uVar6 >> 3 & 0x1fff) < 0x753) {
        lVar11 = (ulong)((uVar6 & 0xffff) >> 5) * 4;
        *(uint *)(lVar10 + lVar11) = *(uint *)(lVar10 + lVar11) | 1 << (ulong)(uVar6 & 0x1f);
      }
      local_88 = (undefined **)(ulong)(ushort)(&DAT_041806d8)[lVar14 * 3];
      FUN_0277d4ac(&local_88);
      FUN_0277dedc(&local_88);
      lVar10 = (*(code *)local_7f8[3])(&local_7f8);
      uVar6 = FUN_0277d6c4(&local_88);
      if ((uVar6 >> 3 & 0x1fff) < 0x753) {
        lVar11 = (ulong)((uVar6 & 0xffff) >> 5) * 4;
        *(uint *)(lVar10 + lVar11) = *(uint *)(lVar10 + lVar11) | 1 << (ulong)(uVar6 & 0x1f);
      }
      puVar9 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
      uVar6 = *puVar9 ^ *puVar9 << 0xb;
      uVar1 = puVar9[3];
      *puVar9 = puVar9[1];
      puVar9[1] = puVar9[2];
      uVar7 = uVar6 ^ uVar1;
      uVar6 = uVar6 >> 8 ^ uVar1 >> 0x13 ^ uVar7;
      puVar9[2] = uVar1;
      puVar9[3] = uVar6;
      uVar6 = (uVar6 ^ uVar7 >> 0x1e) * 0x6c078965 + 1;
      uVar7 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 2;
      local_88 = (undefined **)CONCAT44(uVar7,uVar6);
      uVar6 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 3;
      local_80 = CONCAT44((uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 4,uVar6);
      lVar11 = (*(code *)local_7f8[4])(&local_7f8);
      lVar10 = 0;
      iVar5 = 0;
      do {
        puVar9 = (uint *)(lVar11 + lVar10);
        lVar10 = lVar10 + 4;
        uVar6 = *puVar9 - (*puVar9 >> 1 & 0x55555555);
        uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
        uVar6 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f;
        uVar6 = uVar6 + (uVar6 >> 8);
        iVar5 = (uVar6 + (uVar6 >> 0x10) & 0x3f) + iVar5;
      } while (lVar10 != 0x754);
      if (iVar5 == 0) {
        puVar15 = &DAT_05586008;
      }
      else {
        lVar11 = (*(code *)local_7f8[4])(&local_7f8);
        lVar10 = 0;
        uVar6 = 0;
        do {
          puVar9 = (uint *)(lVar11 + lVar10);
          lVar10 = lVar10 + 4;
          uVar7 = *puVar9 - (*puVar9 >> 1 & 0x55555555);
          uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
          uVar7 = uVar7 + (uVar7 >> 4) & 0xf0f0f0f;
          uVar7 = uVar7 + (uVar7 >> 8);
          uVar6 = (uVar7 + (uVar7 >> 0x10) & 0x3f) + uVar6;
        } while (lVar10 != 0x754);
        puVar15 = &uStack_800;
        uVar7 = (uint)local_88 ^ (uint)local_88 << 0xb;
        local_88 = (undefined **)CONCAT44((undefined4)local_80,local_88._4_4_);
        uVar7 = uVar7 >> 8 ^ local_80._4_4_ >> 0x13 ^ uVar7 ^ local_80._4_4_;
        local_80 = CONCAT44(uVar7,local_80._4_4_);
        FUN_00889f80(&uStack_800,&local_7f8,(int)((ulong)uVar7 * (ulong)uVar6 >> 0x20) + 1);
        FUN_01a4c66c(&local_88,&uStack_800);
      }
      uVar3 = puVar15[1];
      uVar2 = *(undefined4 *)(puVar15 + 2);
      bVar4 = true;
      *param_2 = *puVar15;
      param_2[1] = uVar3;
      *(undefined4 *)(param_2 + 2) = uVar2;
    }
    lVar14 = lVar14 + 1;
    puVar9 = &DAT_041806d0 + lVar14 * 3;
  } while (lVar14 != 9);
  return bVar4;
}

