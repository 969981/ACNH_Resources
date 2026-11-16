
void FUN_02867430(undefined8 param_1,long param_2,int param_3,int param_4)

{
  ulong *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined2 uVar5;
  ushort uVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  void *pvVar13;
  long lVar14;
  ulong uVar15;
  uint *puVar16;
  long lVar17;
  int iVar18;
  int iVar19;
  undefined1 *puVar20;
  undefined4 *puVar21;
  uint *puVar22;
  undefined1 *puVar23;
  int iVar24;
  int iVar25;
  long *plVar26;
  undefined8 uVar27;
  int iVar28;
  undefined4 local_fac;
  undefined4 local_fa8;
  uint local_fa4;
  undefined *local_fa0;
  undefined4 local_f98;
  undefined4 uStack_f94;
  undefined8 local_f90;
  undefined4 local_f88;
  undefined4 uStack_f84;
  uint local_f80;
  uint uStack_f7c;
  uint local_f78;
  uint uStack_f74;
  undefined **local_f70;
  undefined **appuStack_f68 [234];
  uint local_814;
  uint local_810;
  uint local_80c;
  int local_808;
  undefined *local_800;
  undefined1 auStack_7f8 [1876];
  uint local_a4;
  uint local_a0;
  uint local_9c;
  int local_98;
  undefined1 local_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  
  puVar1 = (ulong *)(param_2 + 0x10);
  local_90[0] = 0;
  local_90._4_4_ = param_3;
  FUN_01b02920(local_90,puVar1,0);
  local_800 = PTR_DAT_04bbfe60 + 0x10;
  memset(auStack_7f8,0,0x754);
  uVar10 = nn::os::GetSystemTick();
  local_a4 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 1;
  local_a0 = (local_a4 ^ local_a4 >> 0x1e) * 0x6c078965 + 2;
  local_9c = (local_a0 ^ local_a0 >> 0x1e) * 0x6c078965 + 3;
  local_98 = (local_9c ^ local_9c >> 0x1e) * 0x6c078965 + 4;
  pvVar13 = (void *)FUN_01a451fc(&local_800);
  memset(pvVar13,0,0x754);
  appuStack_f68[0] = (undefined **)(local_90 + 4);
  local_f70 = &PTR_FUN_049ff448;
  FUN_008a1ba0(&local_800,&local_f70);
  puVar7 = PTR_DAT_04bb39d8;
  if (local_90._4_4_ == 0) {
    uVar15 = *puVar1;
    uVar27 = *(undefined8 *)PTR_DAT_04bb32f0;
    ppuVar3 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    appuStack_f68[0] = (undefined **)0x40e90fb;
    local_f70 = ppuVar3;
    uVar15 = FUN_00879dd0(uVar27,&local_f70,uVar15,uVar15 >> 0x10,uVar15 >> 0x18,0);
    if ((uVar15 & 1) == 0) {
      uVar15 = *puVar1;
      local_80 = (undefined **)0x40e90fb;
      local_88 = ppuVar3;
      uVar15 = FUN_0087a8f0(uVar27,&local_88,uVar15,uVar15 >> 0x10,uVar15 >> 0x18,0);
      if ((uVar15 & 1) == 0) {
        bVar9 = true;
        goto LAB_02867850;
      }
    }
    puVar16 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar7);
    uVar10 = *puVar16 ^ *puVar16 << 0xb;
    uVar12 = puVar16[3];
    *puVar16 = puVar16[1];
    puVar16[1] = puVar16[2];
    uVar10 = uVar10 >> 8 ^ uVar12 >> 0x13 ^ uVar10 ^ uVar12;
    puVar16[2] = uVar12;
    puVar16[3] = uVar10;
    if ((uint)((ulong)uVar10 * 100 >> 0x20) < 0x28) {
      local_f70 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
      memset(appuStack_f68,0,0x754);
      uVar10 = nn::os::GetSystemTick();
      local_814 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 1;
      local_810 = (local_814 ^ local_814 >> 0x1e) * 0x6c078965 + 2;
      local_80c = (local_810 ^ local_810 >> 0x1e) * 0x6c078965 + 3;
      local_808 = (local_80c ^ local_80c >> 0x1e) * 0x6c078965 + 4;
      pvVar13 = (void *)(*(code *)local_f70[3])(&local_f70);
      memset(pvVar13,0,0x754);
      local_fa0 = (undefined *)CONCAT44(local_fa0._4_4_,0x2a);
      local_88 = &PTR_FUN_049ff448;
      local_80 = &local_fa0;
      FUN_008a1ba0(&local_f70,&local_88);
      puVar16 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar10 = *puVar16 ^ *puVar16 << 0xb;
      uVar11 = puVar16[3];
      *puVar16 = puVar16[1];
      puVar16[1] = puVar16[2];
      uVar12 = uVar10 ^ uVar11;
      uVar10 = uVar10 >> 8 ^ uVar11 >> 0x13 ^ uVar12;
      puVar16[2] = uVar11;
      puVar16[3] = uVar10;
      uVar10 = (uVar10 ^ uVar12 >> 0x1e) * 0x6c078965 + 1;
      uVar12 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 2;
      local_88 = (undefined **)CONCAT44(uVar12,uVar10);
      uVar10 = (uVar12 ^ uVar12 >> 0x1e) * 0x6c078965 + 3;
      local_80 = (undefined **)CONCAT44((uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 4,uVar10);
      lVar17 = (*(code *)local_f70[4])(&local_f70);
      lVar14 = 0;
      iVar18 = 0;
      do {
        puVar16 = (uint *)(lVar17 + lVar14);
        lVar14 = lVar14 + 4;
        uVar10 = *puVar16 - (*puVar16 >> 1 & 0x55555555);
        uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
        uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f;
        uVar10 = uVar10 + (uVar10 >> 8);
        iVar18 = (uVar10 + (uVar10 >> 0x10) & 0x3f) + iVar18;
      } while (lVar14 != 0x754);
      if (iVar18 == 0) {
        local_fa0 = *(undefined **)PTR_DAT_04bb37e0;
      }
      else {
        lVar17 = (*(code *)local_f70[4])(&local_f70);
        lVar14 = 0;
        uVar10 = 0;
        do {
          puVar16 = (uint *)(lVar17 + lVar14);
          lVar14 = lVar14 + 4;
          uVar12 = *puVar16 - (*puVar16 >> 1 & 0x55555555);
          uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
          uVar12 = uVar12 + (uVar12 >> 4) & 0xf0f0f0f;
          uVar12 = uVar12 + (uVar12 >> 8);
          uVar10 = (uVar12 + (uVar12 >> 0x10) & 0x3f) + uVar10;
        } while (lVar14 != 0x754);
        uVar12 = (uint)local_88 ^ (uint)local_88 << 0xb;
        local_88 = (undefined **)CONCAT44((undefined4)local_80,local_88._4_4_);
        uVar12 = uVar12 >> 8 ^ local_80._4_4_ >> 0x13 ^ uVar12 ^ local_80._4_4_;
        local_80 = (undefined **)CONCAT44(uVar12,local_80._4_4_);
        FUN_00889f80(&local_fa0,&local_f70,(int)((ulong)uVar12 * (ulong)uVar10 >> 0x20) + 1);
        FUN_01a4c66c(&local_88,&local_fa0);
      }
      param_4 = 1;
      FUN_028684d0(param_1,&local_fa0,1);
    }
    bVar9 = false;
  }
  else {
    bVar9 = false;
  }
LAB_02867850:
  if (local_90._4_4_ == 0x10) {
    local_88 = (undefined **)CONCAT44(local_88._4_4_,0x11);
    appuStack_f68[0] = (undefined **)&local_88;
    local_f70 = &PTR_FUN_049ff448;
    FUN_008a1ba0(&local_800,&local_f70);
  }
  puVar7 = PTR_DAT_04bb43c0;
  appuStack_f68[0] = &local_fa0;
  local_fa0 = (undefined *)CONCAT44(local_fa0._4_4_,1);
  local_f70 = &PTR_FUN_049ff6f0;
  uVar10 = 0;
  do {
    (**(code **)(local_800 + 0x10))(&local_88,&local_800,uVar10);
    lVar14 = (**(code **)(local_800 + 0x20))(&local_800);
    uVar12 = 1 << (ulong)(uVar10 & 0x1f);
    if ((*(uint *)(lVar14 + (ulong)(uVar10 >> 5) * 4) & uVar12) != 0) {
      lVar14 = *(long *)puVar7;
      uVar11 = FUN_0277d6c4(&local_88);
      if (*(long *)puVar7 != 0) {
        lVar14 = *(long *)(lVar14 + 0x57e58);
        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if (((uVar11 < *(uint *)(lVar14 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) &&
           (uVar15 = (*(code *)*local_f70)(&local_f70,&local_88), (uVar15 & 1) != 0))
        goto LAB_028678d0;
      }
      lVar14 = (**(code **)(local_800 + 0x18))(&local_800);
      lVar17 = (ulong)(uVar10 >> 5) * 4;
      *(uint *)(lVar14 + lVar17) = *(uint *)(lVar14 + lVar17) & (uVar12 ^ 0xffffffff);
    }
LAB_028678d0:
    puVar2 = PTR_DAT_04bb43c0;
    uVar10 = uVar10 + 1;
  } while (uVar10 != 15000);
  local_fa0 = (undefined *)((ulong)local_fa0 & 0xffffffff00000000);
  appuStack_f68[0] = &local_fa0;
  local_f70 = &PTR_FUN_049ff588;
  uVar10 = 0;
  do {
    (**(code **)(local_800 + 0x10))(&local_88,&local_800,uVar10);
    lVar14 = (**(code **)(local_800 + 0x20))(&local_800);
    uVar12 = 1 << (ulong)(uVar10 & 0x1f);
    if ((*(uint *)(lVar14 + (ulong)(uVar10 >> 5) * 4) & uVar12) != 0) {
      lVar14 = *(long *)puVar2;
      uVar11 = FUN_0277d6c4(&local_88);
      if (*(long *)puVar2 != 0) {
        lVar14 = *(long *)(lVar14 + 0x57e58);
        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if (((uVar11 < *(uint *)(lVar14 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) &&
           (uVar15 = (*(code *)*local_f70)(&local_f70,&local_88), (uVar15 & 1) != 0))
        goto LAB_028679d0;
      }
      lVar14 = (**(code **)(local_800 + 0x18))(&local_800);
      lVar17 = (ulong)(uVar10 >> 5) * 4;
      *(uint *)(lVar14 + lVar17) = *(uint *)(lVar14 + lVar17) & (uVar12 ^ 0xffffffff);
    }
LAB_028679d0:
    puVar7 = PTR_DAT_04bb43c0;
    uVar10 = uVar10 + 1;
  } while (uVar10 != 15000);
  if ((local_90._4_4_ == 0x72) || (local_90._4_4_ == 0)) {
    appuStack_f68[0] = (undefined **)local_90;
    local_f70 = &PTR_FUN_049ff6a0;
    uVar10 = 0;
    do {
      (**(code **)(local_800 + 0x10))(&local_88,&local_800,uVar10);
      lVar14 = (**(code **)(local_800 + 0x20))(&local_800);
      uVar12 = 1 << (ulong)(uVar10 & 0x1f);
      if ((*(uint *)(lVar14 + (ulong)(uVar10 >> 5) * 4) & uVar12) != 0) {
        lVar14 = *(long *)puVar7;
        uVar11 = FUN_0277d6c4(&local_88);
        if (*(long *)puVar7 != 0) {
          lVar14 = *(long *)(lVar14 + 0x57e58);
          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
          if (((uVar11 < *(uint *)(lVar14 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) &&
             (uVar15 = (*(code *)*local_f70)(&local_f70,&local_88), (uVar15 & 1) != 0))
          goto LAB_02867ae4;
        }
        lVar14 = (**(code **)(local_800 + 0x18))(&local_800);
        lVar17 = (ulong)(uVar10 >> 5) * 4;
        *(uint *)(lVar14 + lVar17) = *(uint *)(lVar14 + lVar17) & (uVar12 ^ 0xffffffff);
      }
LAB_02867ae4:
      uVar10 = uVar10 + 1;
    } while (uVar10 != 15000);
  }
  else {
    appuStack_f68[0] = (undefined **)local_90;
    local_f70 = &PTR_FUN_049ff6c8;
    uVar10 = 0;
    do {
      (**(code **)(local_800 + 0x10))(&local_88,&local_800,uVar10);
      lVar14 = (**(code **)(local_800 + 0x20))(&local_800);
      uVar12 = 1 << (ulong)(uVar10 & 0x1f);
      if ((*(uint *)(lVar14 + (ulong)(uVar10 >> 5) * 4) & uVar12) != 0) {
        lVar14 = *(long *)puVar7;
        uVar11 = FUN_0277d6c4(&local_88);
        if (*(long *)puVar7 != 0) {
          lVar14 = *(long *)(lVar14 + 0x57e58);
          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
          if (((uVar11 < *(uint *)(lVar14 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) &&
             (uVar15 = (*(code *)*local_f70)(&local_f70,&local_88), (uVar15 & 1) != 0))
          goto LAB_02867be4;
        }
        lVar14 = (**(code **)(local_800 + 0x18))(&local_800);
        lVar17 = (ulong)(uVar10 >> 5) * 4;
        *(uint *)(lVar14 + lVar17) = *(uint *)(lVar14 + lVar17) & (uVar12 ^ 0xffffffff);
      }
LAB_02867be4:
      uVar10 = uVar10 + 1;
    } while (uVar10 != 15000);
  }
  puVar7 = PTR_DAT_04bb39d8;
  if (*(char *)(param_2 + 0x12) != '\f') {
    local_f70 = (undefined **)0x33bd;
    FUN_0277d4ac(&local_f70);
    lVar14 = (**(code **)(local_800 + 0x18))(&local_800);
    uVar10 = FUN_0277d6c4(&local_f70);
    if ((uVar10 >> 3 & 0x1fff) < 0x753) {
      lVar17 = (ulong)((uVar10 & 0xffff) >> 5) * 4;
      *(uint *)(lVar14 + lVar17) =
           *(uint *)(lVar14 + lVar17) & (1 << (ulong)(uVar10 & 0x1f) ^ 0xffffffffU);
    }
  }
  if (bVar9) {
    local_88 = (undefined **)CONCAT44(local_88._4_4_,0x2a);
    appuStack_f68[0] = (undefined **)&local_88;
    local_f70 = &PTR_FUN_049ff448;
    FUN_008a1ba0(&local_800,&local_f70);
  }
  FUN_028687c0(&local_800);
  puVar16 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar7);
  uVar10 = *puVar16 ^ *puVar16 << 0xb;
  uVar11 = puVar16[3];
  *puVar16 = puVar16[1];
  puVar16[1] = puVar16[2];
  uVar12 = uVar10 ^ uVar11;
  uVar10 = uVar10 >> 8 ^ uVar11 >> 0x13 ^ uVar12;
  puVar16[2] = uVar11;
  puVar16[3] = uVar10;
  local_f80 = (uVar10 ^ uVar12 >> 0x1e) * 0x6c078965 + 1;
  uStack_f7c = (local_f80 ^ local_f80 >> 0x1e) * 0x6c078965 + 2;
  local_f78 = (uStack_f7c ^ uStack_f7c >> 0x1e) * 0x6c078965 + 3;
  uStack_f74 = (local_f78 ^ local_f78 >> 0x1e) * 0x6c078965 + 4;
  lVar17 = (**(code **)(local_800 + 0x20))(&local_800);
  puVar7 = PTR_DAT_04bb37e0;
  lVar14 = 0;
  iVar18 = 0;
  do {
    puVar16 = (uint *)(lVar17 + lVar14);
    lVar14 = lVar14 + 4;
    uVar10 = *puVar16 - (*puVar16 >> 1 & 0x55555555);
    uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
    uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f;
    uVar10 = uVar10 + (uVar10 >> 8);
    iVar18 = (uVar10 + (uVar10 >> 0x10) & 0x3f) + iVar18;
  } while (lVar14 != 0x754);
  if (iVar18 != 0) {
    puVar2 = PTR_DAT_04bc0510 + 0x10;
    ppuVar3 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
    do {
      lVar17 = (**(code **)(local_800 + 0x20))(&local_800);
      lVar14 = 0;
      iVar18 = 0;
      do {
        puVar16 = (uint *)(lVar17 + lVar14);
        lVar14 = lVar14 + 4;
        uVar10 = *puVar16 - (*puVar16 >> 1 & 0x55555555);
        uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
        uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f;
        uVar10 = uVar10 + (uVar10 >> 8);
        iVar18 = (uVar10 + (uVar10 >> 0x10) & 0x3f) + iVar18;
      } while (lVar14 != 0x754);
      if (iVar18 == 0) {
        local_f88 = *(undefined4 *)puVar7;
        uStack_f84 = *(undefined4 *)(puVar7 + 4);
      }
      else {
        lVar17 = (**(code **)(local_800 + 0x20))(&local_800);
        lVar14 = 0;
        uVar10 = 0;
        do {
          puVar16 = (uint *)(lVar17 + lVar14);
          lVar14 = lVar14 + 4;
          uVar12 = *puVar16 - (*puVar16 >> 1 & 0x55555555);
          uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
          uVar12 = uVar12 + (uVar12 >> 4) & 0xf0f0f0f;
          uVar12 = uVar12 + (uVar12 >> 8);
          uVar10 = (uVar12 + (uVar12 >> 0x10) & 0x3f) + uVar10;
        } while (lVar14 != 0x754);
        uVar12 = local_f80 ^ local_f80 << 0xb;
        local_f80 = uStack_f7c;
        uStack_f7c = local_f78;
        uVar12 = uVar12 >> 8 ^ uStack_f74 >> 0x13 ^ uVar12 ^ uStack_f74;
        local_f78 = uStack_f74;
        uStack_f74 = uVar12;
        FUN_00889f80(&local_f88,&local_800,(int)((ulong)uVar12 * (ulong)uVar10 >> 0x20) + 1);
        FUN_01a4c66c(&local_f80,&local_f88);
      }
      puVar8 = PTR_DAT_04bb43c0;
      lVar14 = *(long *)PTR_DAT_04bb43c0;
      uVar10 = FUN_0277d6c4(&local_f88);
      if (*(long *)puVar8 != 0) {
        lVar14 = *(long *)(lVar14 + 0x57e58);
        uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if ((uVar10 < *(uint *)(lVar14 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
          FUN_028684d0(param_1,&local_f88,1);
          lVar14 = (**(code **)(local_800 + 0x18))(&local_800);
          uVar10 = FUN_0277d6c4(&local_f88);
          if ((uVar10 >> 3 & 0x1fff) < 0x753) {
            lVar17 = (ulong)((uVar10 & 0xffff) >> 5) * 4;
            *(uint *)(lVar14 + lVar17) =
                 *(uint *)(lVar14 + lVar17) & (1 << (ulong)(uVar10 & 0x1f) ^ 0xffffffffU);
          }
          local_f90 = 0;
          lVar14 = *(long *)puVar8;
          local_f98 = local_f88;
          uStack_f94 = uStack_f84;
          local_fa0 = puVar2;
          uVar12 = FUN_0277d6c4(&local_f98);
          uVar10 = 0;
          if (*(long *)puVar8 == 0) goto LAB_0286814c;
          lVar14 = *(long *)(lVar14 + 0x57e58);
          uVar10 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
          if ((uVar10 < *(uint *)(lVar14 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
            lVar14 = *(long *)PTR_DAT_04bc0428;
            uVar10 = FUN_0277d6c4(&local_f88);
            uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
            if ((*(uint *)(lVar14 + 0x1d8) <= uVar10) ||
               (puVar16 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar10 * 8),
               puVar16 == (uint *)0x0)) goto LAB_02868148;
            uVar12 = *puVar16;
            uVar10 = 0;
            if ((uVar12 != 0) && (puVar16 != (uint *)(ulong)uVar12)) {
              puVar22 = (uint *)((long)puVar16 - (long)(ulong)uVar12);
              uVar10 = 0;
              if (*puVar22 != 0) {
                uVar10 = puVar22[1];
                if ((uVar10 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
                  lVar14 = 0xc;
                  if (*(char *)((long)puVar22 + 10) != '\0') {
                    lVar14 = 0x1c;
                  }
                  lVar14 = (long)puVar22 + lVar14 + (ulong)(ushort)puVar22[2] * 8;
                  if (lVar14 != 0) {
                    uVar12 = 0;
                    if ((ulong)uVar10 != 0) {
                      uVar12 = (uint)((ulong)((long)puVar16 - lVar14) / (ulong)uVar10);
                    }
                    if (*puVar22 <= uVar12) {
                      uVar12 = 0xffffffff;
                    }
                    if ((uVar12 < *(uint *)PTR_DAT_04bc0020) &&
                       (uVar6 = *(ushort *)(*(long *)(PTR_DAT_04bc0020 + 8) + (long)(int)uVar12 * 2)
                       , uVar10 = (uint)uVar6, uVar6 < 0x5b6)) goto LAB_0286814c;
                  }
                }
                goto LAB_02868148;
              }
            }
          }
          else {
LAB_02868148:
            uVar10 = 0;
          }
LAB_0286814c:
          local_fa4 = uVar10;
          if (local_fa4 != 0) {
            local_f70 = ppuVar3;
            memset(appuStack_f68,0,0x754);
            uVar10 = nn::os::GetSystemTick();
            local_814 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 1;
            local_810 = (local_814 ^ local_814 >> 0x1e) * 0x6c078965 + 2;
            local_80c = (local_810 ^ local_810 >> 0x1e) * 0x6c078965 + 3;
            local_808 = (local_80c ^ local_80c >> 0x1e) * 0x6c078965 + 4;
            pvVar13 = (void *)(*(code *)local_f70[3])(&local_f70);
            memset(pvVar13,0,0x754);
            local_88 = &PTR_FUN_049ff858;
            local_80 = (undefined **)&local_fa4;
            FUN_008a1ba0(&local_f70,&local_88);
            lVar17 = (*(code *)local_f70[4])(&local_f70);
            lVar14 = 0;
            iVar18 = 0;
            do {
              puVar16 = (uint *)(lVar17 + lVar14);
              lVar14 = lVar14 + 4;
              uVar10 = *puVar16 - (*puVar16 >> 1 & 0x55555555);
              uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
              uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f;
              uVar10 = uVar10 + (uVar10 >> 8);
              iVar18 = (uVar10 + (uVar10 >> 0x10) & 0x3f) + iVar18;
            } while (lVar14 != 0x754);
            if (iVar18 != 0) {
              iVar28 = 1;
              iVar25 = 2;
              plVar26 = (long *)PTR_DAT_04bb43c0;
LAB_02868284:
              lVar17 = (*(code *)local_f70[4])(&local_f70);
              lVar14 = 0;
              iVar19 = 0;
              iVar24 = 0;
              do {
                uVar12 = *(uint *)(lVar17 + lVar14);
                uVar10 = uVar12 - (uVar12 >> 1 & 0x55555555);
                uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
                uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f;
                uVar10 = uVar10 + (uVar10 >> 8);
                iVar4 = (uVar10 + (uVar10 >> 0x10) & 0x3f) + iVar24;
                if (iVar28 <= iVar4) {
                  if (uVar12 == 0) goto LAB_02868318;
                  iVar24 = iVar25 - iVar24;
                  goto LAB_02868300;
                }
                lVar14 = lVar14 + 4;
                iVar19 = iVar19 + 0x20;
                iVar24 = iVar4;
              } while (lVar14 != 0x754);
              goto LAB_028683d0;
            }
          }
        }
      }
LAB_02867e64:
      iVar18 = param_4 + -1;
      bVar9 = 0 < param_4;
      param_4 = iVar18;
    } while (iVar18 != 0 && bVar9);
  }
  return;
  while (uVar12 = uVar12 - 1 & uVar12, uVar12 != 0) {
LAB_02868300:
    iVar24 = iVar24 + -1;
    if (iVar24 < 2) {
      uVar10 = uVar12 - 1 & (uVar12 ^ 0xffffffff);
      uVar10 = uVar10 - (uVar10 >> 1 & 0x55555555);
      uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
      uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f;
      uVar10 = uVar10 + (uVar10 >> 8);
      uVar10 = uVar10 + (uVar10 >> 0x10) & 0x3f;
      goto LAB_02868350;
    }
  }
LAB_02868318:
  uVar10 = 0xffffffff;
LAB_02868350:
  if (uVar10 + iVar19 == -1) {
LAB_028683d0:
    local_fac = *(undefined4 *)puVar7;
    local_fa8 = *(undefined4 *)(puVar7 + 4);
    lVar17 = *plVar26;
    goto LAB_0286841c;
  }
  (*(code *)local_f70[2])(&local_88,&local_f70);
  lVar14 = *plVar26;
  uVar10 = FUN_0277d6c4(&local_88);
  lVar17 = *plVar26;
  if (lVar17 == 0) {
LAB_028683e4:
    puVar23 = puVar7 + 3;
    puVar20 = puVar7 + 2;
    uVar5 = *(undefined2 *)puVar7;
    puVar21 = (undefined4 *)(puVar7 + 4);
  }
  else {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((*(uint *)(lVar14 + 0x1d8) <= uVar10) ||
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar10 * 8) == 0)) goto LAB_028683e4;
    puVar20 = (undefined1 *)((ulong)&local_88 | 2);
    puVar21 = (undefined4 *)((long)&local_88 + 4);
    puVar23 = (undefined1 *)((ulong)&local_88 | 3);
    uVar5 = (undefined2)local_88;
  }
  local_fa8 = *puVar21;
  local_fac = CONCAT13(*puVar23,CONCAT12(*puVar20,uVar5));
  plVar26 = (long *)PTR_DAT_04bb43c0;
LAB_0286841c:
  uVar10 = FUN_0277d6c4(&local_fac);
  if (*plVar26 != 0) {
    lVar14 = *(long *)(lVar17 + 0x57e58);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((uVar10 < *(uint *)(lVar14 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
      lVar14 = (**(code **)(local_800 + 0x18))(&local_800);
      uVar10 = FUN_0277d6c4(&local_fac);
      if ((uVar10 >> 3 & 0x1fff) < 0x753) {
        lVar17 = (ulong)((uVar10 & 0xffff) >> 5) * 4;
        *(uint *)(lVar14 + lVar17) =
             *(uint *)(lVar14 + lVar17) & (1 << (ulong)(uVar10 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  bVar9 = iVar28 == iVar18;
  iVar28 = iVar28 + 1;
  iVar25 = iVar25 + 1;
  if (bVar9) goto LAB_02867e64;
  goto LAB_02868284;
}

