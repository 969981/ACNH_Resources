
void FUN_02869630(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  void *pvVar12;
  uint *puVar13;
  uint uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined4 *puVar17;
  uint local_81c;
  undefined4 uStack_818;
  uint local_814;
  uint uStack_810;
  uint local_80c;
  uint uStack_808;
  undefined4 local_804;
  undefined1 local_800 [4];
  undefined4 local_7fc;
  undefined *local_7f8;
  char *apcStack_7f0 [234];
  uint local_9c;
  uint local_98;
  uint local_94;
  int local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  
  FUN_02867430(param_1,param_2,0,2);
  FUN_02867430(param_1,param_2,9,2);
  FUN_02867430(param_1,param_2,0xd,1);
  FUN_02867430(param_1,param_2,0x10,1);
  FUN_02867430(param_1,param_2,0x12,1);
  FUN_02867430(param_1,param_2,0xf,1);
  lVar15 = *(long *)PTR_DAT_04bb46b0;
  if (lVar15 != 0) {
    puVar16 = *(undefined8 **)(lVar15 + 0x10);
    if ((*(byte *)(lVar15 + 0x453) & 1) == 0) {
      lVar10 = (**(code **)(*(long *)*puVar16 + 0x38))();
      lVar15 = 0;
      if (lVar10 != 0) {
        lVar15 = lVar10 + 0x70;
      }
      goto LAB_02869724;
    }
    if (puVar16 != (undefined8 *)0x0) {
      lVar15 = 0;
      if ((long *)puVar16[0x26] != (long *)0x0) {
        lVar15 = (**(code **)(*(long *)puVar16[0x26] + 0x38))();
      }
      goto LAB_02869724;
    }
  }
  lVar15 = 0;
LAB_02869724:
  if (*(long **)(lVar15 + 0x1a0b70) == (long *)0x0) {
    uVar11 = 0;
  }
  else {
    puVar16 = (undefined8 *)**(long **)(lVar15 + 0x1a0b70);
    uVar11 = 0;
    if (puVar16 != (undefined8 *)0x0) {
      uVar11 = (**(code **)*puVar16)();
    }
  }
  local_81c = *(uint *)(*(long *)(lVar15 + 0x1a0b58) + *(long *)(lVar15 + 0x1a0b50));
  if (3 < local_81c) {
    local_81c = 0;
  }
  if ((((uVar11 & 1) != 0) && (*(long *)(lVar15 + 0x1a0b70) != 0)) &&
     (puVar16 = *(undefined8 **)(*(long *)(lVar15 + 0x1a0b70) + 8), puVar16 != (undefined8 *)0x0)) {
    (**(code **)*puVar16)();
  }
  puVar17 = (undefined4 *)PTR_DAT_04bb39d8;
  if (1 < (int)local_81c) {
    local_7f8 = PTR_DAT_04bbfe60 + 0x10;
    memset(apcStack_7f0,0,0x754);
    uVar6 = nn::os::GetSystemTick();
    local_9c = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 1;
    local_98 = (local_9c ^ local_9c >> 0x1e) * 0x6c078965 + 2;
    local_94 = (local_98 ^ local_98 >> 0x1e) * 0x6c078965 + 3;
    local_90 = (local_94 ^ local_94 >> 0x1e) * 0x6c078965 + 4;
    pvVar12 = (void *)FUN_01a451fc(&local_7f8);
    memset(pvVar12,0,0x754);
    local_80 = (char *)&local_814;
    local_814 = 0x4e;
    local_88 = &PTR_FUN_049ff4e8;
    FUN_008a1ba0(&local_7f8,&local_88);
    puVar1 = PTR_DAT_04bb43c0;
    local_7fc = 0xb;
    local_80 = (char *)&local_7fc;
    local_88 = &PTR_FUN_049ff448;
    uVar6 = 0;
    do {
      (**(code **)(local_7f8 + 0x10))(&local_814,&local_7f8,uVar6);
      lVar15 = (**(code **)(local_7f8 + 0x20))(&local_7f8);
      uVar2 = 1 << (ulong)(uVar6 & 0x1f);
      if ((*(uint *)(lVar15 + (ulong)(uVar6 >> 5) * 4) & uVar2) != 0) {
        lVar15 = *(long *)puVar1;
        uVar7 = FUN_0277d6c4(&local_814);
        if (*(long *)puVar1 != 0) {
          lVar15 = *(long *)(lVar15 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          if (((uVar7 < *(uint *)(lVar15 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) &&
             (uVar11 = (*(code *)*local_88)(&local_88,&local_814), (uVar11 & 1) != 0))
          goto LAB_028698b4;
        }
        lVar15 = (**(code **)(local_7f8 + 0x18))(&local_7f8);
        lVar10 = (ulong)(uVar6 >> 5) * 4;
        *(uint *)(lVar15 + lVar10) = *(uint *)(lVar15 + lVar10) & (uVar2 ^ 0xffffffff);
      }
LAB_028698b4:
      uVar6 = uVar6 + 1;
    } while (uVar6 != 15000);
    uVar6 = 0;
    local_7fc = 1;
    local_80 = (char *)&local_7fc;
    local_88 = &PTR_FUN_049ff6f0;
    do {
      (**(code **)(local_7f8 + 0x10))(&local_814,&local_7f8,uVar6);
      lVar15 = (**(code **)(local_7f8 + 0x20))(&local_7f8);
      uVar2 = 1 << (ulong)(uVar6 & 0x1f);
      if ((*(uint *)(lVar15 + (ulong)(uVar6 >> 5) * 4) & uVar2) != 0) {
        lVar15 = *(long *)puVar1;
        uVar7 = FUN_0277d6c4(&local_814);
        if (*(long *)puVar1 != 0) {
          lVar15 = *(long *)(lVar15 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          if (((uVar7 < *(uint *)(lVar15 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) &&
             (uVar11 = (*(code *)*local_88)(&local_88,&local_814), (uVar11 & 1) != 0))
          goto LAB_028699a0;
        }
        lVar15 = (**(code **)(local_7f8 + 0x18))(&local_7f8);
        lVar10 = (ulong)(uVar6 >> 5) * 4;
        *(uint *)(lVar15 + lVar10) = *(uint *)(lVar15 + lVar10) & (uVar2 ^ 0xffffffff);
      }
LAB_028699a0:
      uVar6 = uVar6 + 1;
    } while (uVar6 != 15000);
    uVar6 = 0;
    local_80 = (char *)&local_7fc;
    local_7fc = 0;
    local_88 = &PTR_FUN_049ff588;
    do {
      (**(code **)(local_7f8 + 0x10))(&local_814,&local_7f8,uVar6);
      lVar15 = (**(code **)(local_7f8 + 0x20))(&local_7f8);
      uVar2 = 1 << (ulong)(uVar6 & 0x1f);
      if ((*(uint *)(lVar15 + (ulong)(uVar6 >> 5) * 4) & uVar2) != 0) {
        lVar15 = *(long *)puVar1;
        uVar7 = FUN_0277d6c4(&local_814);
        if (*(long *)puVar1 != 0) {
          lVar15 = *(long *)(lVar15 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          if (((uVar7 < *(uint *)(lVar15 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) &&
             (uVar11 = (*(code *)*local_88)(&local_88,&local_814), (uVar11 & 1) != 0))
          goto LAB_02869a90;
        }
        lVar15 = (**(code **)(local_7f8 + 0x18))(&local_7f8);
        lVar10 = (ulong)(uVar6 >> 5) * 4;
        *(uint *)(lVar15 + lVar10) = *(uint *)(lVar15 + lVar10) & (uVar2 ^ 0xffffffff);
      }
LAB_02869a90:
      puVar17 = (undefined4 *)PTR_DAT_04bb39d8;
      uVar6 = uVar6 + 1;
    } while (uVar6 != 15000);
    puVar13 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar6 = *puVar13 ^ *puVar13 << 0xb;
    uVar7 = puVar13[3];
    *puVar13 = puVar13[1];
    puVar13[1] = puVar13[2];
    uVar2 = uVar6 ^ uVar7;
    uVar6 = uVar6 >> 8 ^ uVar7 >> 0x13 ^ uVar2;
    puVar13[2] = uVar7;
    puVar13[3] = uVar6;
    uVar6 = (uVar6 ^ uVar2 >> 0x1e) * 0x6c078965 + 1;
    uVar2 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 2;
    local_88 = (undefined **)CONCAT44(uVar2,uVar6);
    uVar6 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 3;
    local_80 = (char *)CONCAT44((uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 4,uVar6);
    lVar10 = (**(code **)(local_7f8 + 0x20))(&local_7f8);
    lVar15 = 0;
    iVar8 = 0;
    do {
      puVar13 = (uint *)(lVar10 + lVar15);
      lVar15 = lVar15 + 4;
      uVar6 = *puVar13 - (*puVar13 >> 1 & 0x55555555);
      uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
      uVar6 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f;
      uVar6 = uVar6 + (uVar6 >> 8);
      iVar8 = (uVar6 + (uVar6 >> 0x10) & 0x3f) + iVar8;
    } while (lVar15 != 0x754);
    if (iVar8 == 0) {
      return;
    }
    lVar10 = (**(code **)(local_7f8 + 0x20))(&local_7f8);
    lVar15 = 0;
    iVar8 = 0;
    do {
      puVar13 = (uint *)(lVar10 + lVar15);
      lVar15 = lVar15 + 4;
      uVar6 = *puVar13 - (*puVar13 >> 1 & 0x55555555);
      uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
      uVar6 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f;
      uVar6 = uVar6 + (uVar6 >> 8);
      iVar8 = (uVar6 + (uVar6 >> 0x10) & 0x3f) + iVar8;
    } while (lVar15 != 0x754);
    if (iVar8 == 0) {
      local_814 = *(uint *)PTR_DAT_04bb37e0;
      uStack_810 = *(uint *)(PTR_DAT_04bb37e0 + 4);
    }
    else {
      lVar10 = (**(code **)(local_7f8 + 0x20))(&local_7f8);
      lVar15 = 0;
      uVar6 = 0;
      do {
        puVar13 = (uint *)(lVar10 + lVar15);
        lVar15 = lVar15 + 4;
        uVar2 = *puVar13 - (*puVar13 >> 1 & 0x55555555);
        uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
        uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
        uVar2 = uVar2 + (uVar2 >> 8);
        uVar6 = (uVar2 + (uVar2 >> 0x10) & 0x3f) + uVar6;
      } while (lVar15 != 0x754);
      uVar2 = (uint)local_88 ^ (uint)local_88 << 0xb;
      local_88 = (undefined **)CONCAT44((undefined4)local_80,local_88._4_4_);
      uVar2 = uVar2 >> 8 ^ local_80._4_4_ >> 0x13 ^ uVar2 ^ local_80._4_4_;
      local_80 = (char *)CONCAT44(uVar2,local_80._4_4_);
      FUN_00889f80(&local_814,&local_7f8,(int)((ulong)uVar2 * (ulong)uVar6 >> 0x20) + 1);
      FUN_01a4c66c(&local_88,&local_814);
    }
    lVar15 = *(long *)puVar1;
    uVar6 = FUN_0277d6c4(&local_814);
    if (*(long *)puVar1 != 0) {
      lVar15 = *(long *)(lVar15 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar15 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        FUN_028684d0(param_1,&local_814,1);
      }
    }
  }
  FUN_02867430(param_1,param_2,0x72,1);
  puVar5 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  apcStack_7f0[0] = "CatalogShopBigCount";
  local_7f8 = puVar1;
  iVar8 = FUN_0273ea30(&local_7f8);
  local_80 = "CatalogShopBigCount";
  local_88 = (undefined **)puVar1;
  iVar9 = FUN_0273ede0(&local_88);
  puVar13 = (uint *)nn::os::GetTlsValue(*puVar17);
  uVar6 = *puVar13 ^ *puVar13 << 0xb;
  uVar2 = puVar13[3];
  *puVar13 = puVar13[1];
  puVar13[1] = puVar13[2];
  uVar6 = uVar6 >> 8 ^ uVar2 >> 0x13 ^ uVar6 ^ uVar2;
  puVar13[2] = uVar2;
  puVar13[3] = uVar6;
  apcStack_7f0[0] = "Market2Built";
  local_7f8 = puVar1;
  uVar11 = FUN_0273f0a0(&local_7f8);
  if ((uVar11 & 1) != 0) {
    if ((iVar8 < iVar9) && (0x1d < (uint)((ulong)uVar6 * 100 >> 0x20))) {
      local_7f8 = puVar5 + 0x10;
      apcStack_7f0[0] = "CatalogShopBigCount";
      FUN_0273fd90(&local_7f8,1);
    }
    else {
      local_7f8 = puVar5 + 0x10;
      apcStack_7f0[0] = "CatalogShopBigCount";
      FUN_0273f3c4(&local_7f8,0);
      local_800[0] = 0;
      FUN_01b02920(local_800,param_2 + 0x10,0);
      local_7f8 = PTR_DAT_04bbfe60 + 0x10;
      memset(apcStack_7f0,0,0x754);
      uVar6 = nn::os::GetSystemTick();
      local_9c = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 1;
      local_98 = (local_9c ^ local_9c >> 0x1e) * 0x6c078965 + 2;
      local_94 = (local_98 ^ local_98 >> 0x1e) * 0x6c078965 + 3;
      local_90 = (local_94 ^ local_94 >> 0x1e) * 0x6c078965 + 4;
      pvVar12 = (void *)(**(code **)(local_7f8 + 0x18))(&local_7f8);
      memset(pvVar12,0,0x754);
      local_7fc = 0;
      local_80 = (char *)&local_7fc;
      local_88 = &PTR_FUN_049ff448;
      FUN_008a1ba0(&local_7f8,&local_88);
      puVar1 = PTR_DAT_04bb43c0;
      local_804 = 0x2c;
      local_80 = (char *)&local_804;
      local_88 = &PTR_FUN_049ff4e8;
      uVar6 = 0;
      do {
        (**(code **)(local_7f8 + 0x10))(&local_814,&local_7f8,uVar6);
        lVar15 = (**(code **)(local_7f8 + 0x20))(&local_7f8);
        uVar2 = 1 << (ulong)(uVar6 & 0x1f);
        if ((*(uint *)(lVar15 + (ulong)(uVar6 >> 5) * 4) & uVar2) != 0) {
          lVar15 = *(long *)puVar1;
          uVar7 = FUN_0277d6c4(&local_814);
          if (*(long *)puVar1 != 0) {
            lVar15 = *(long *)(lVar15 + 0x57e58);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
            if (((uVar7 < *(uint *)(lVar15 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) &&
               (uVar11 = (*(code *)*local_88)(&local_88,&local_814), (uVar11 & 1) != 0))
            goto LAB_02869f74;
          }
          lVar15 = (**(code **)(local_7f8 + 0x18))(&local_7f8);
          lVar10 = (ulong)(uVar6 >> 5) * 4;
          *(uint *)(lVar15 + lVar10) = *(uint *)(lVar15 + lVar10) & (uVar2 ^ 0xffffffff);
        }
LAB_02869f74:
        uVar6 = uVar6 + 1;
      } while (uVar6 != 15000);
      uVar6 = 0;
      local_80 = (char *)&local_81c;
      local_81c = 0;
      local_88 = &PTR_FUN_049ff588;
      do {
        (**(code **)(local_7f8 + 0x10))(&local_814,&local_7f8,uVar6);
        lVar15 = (**(code **)(local_7f8 + 0x20))(&local_7f8);
        uVar2 = 1 << (ulong)(uVar6 & 0x1f);
        if ((*(uint *)(lVar15 + (ulong)(uVar6 >> 5) * 4) & uVar2) != 0) {
          lVar15 = *(long *)puVar1;
          uVar7 = FUN_0277d6c4(&local_814);
          if (*(long *)puVar1 != 0) {
            lVar15 = *(long *)(lVar15 + 0x57e58);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
            if (((uVar7 < *(uint *)(lVar15 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) &&
               (uVar11 = (*(code *)*local_88)(&local_88,&local_814), (uVar11 & 1) != 0))
            goto LAB_0286a060;
          }
          lVar15 = (**(code **)(local_7f8 + 0x18))(&local_7f8);
          lVar10 = (ulong)(uVar6 >> 5) * 4;
          *(uint *)(lVar15 + lVar10) = *(uint *)(lVar15 + lVar10) & (uVar2 ^ 0xffffffff);
        }
LAB_0286a060:
        uVar6 = uVar6 + 1;
      } while (uVar6 != 15000);
      uVar6 = 0;
      local_80 = local_800;
      local_88 = &PTR_FUN_049ff6a0;
      do {
        (**(code **)(local_7f8 + 0x10))(&local_814,&local_7f8,uVar6);
        lVar15 = (**(code **)(local_7f8 + 0x20))(&local_7f8);
        uVar2 = 1 << (ulong)(uVar6 & 0x1f);
        if ((*(uint *)(lVar15 + (ulong)(uVar6 >> 5) * 4) & uVar2) != 0) {
          lVar15 = *(long *)puVar1;
          uVar7 = FUN_0277d6c4(&local_814);
          if (*(long *)puVar1 != 0) {
            lVar15 = *(long *)(lVar15 + 0x57e58);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
            if (((uVar7 < *(uint *)(lVar15 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) &&
               (uVar11 = (*(code *)*local_88)(&local_88,&local_814), (uVar11 & 1) != 0))
            goto LAB_0286a144;
          }
          lVar15 = (**(code **)(local_7f8 + 0x18))(&local_7f8);
          lVar10 = (ulong)(uVar6 >> 5) * 4;
          *(uint *)(lVar15 + lVar10) = *(uint *)(lVar15 + lVar10) & (uVar2 ^ 0xffffffff);
        }
LAB_0286a144:
        uVar6 = uVar6 + 1;
      } while (uVar6 != 15000);
      FUN_028687c0(&local_7f8);
      puVar13 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar6 = *puVar13 ^ *puVar13 << 0xb;
      uVar7 = puVar13[3];
      *puVar13 = puVar13[1];
      puVar13[1] = puVar13[2];
      uVar2 = uVar6 ^ uVar7;
      uVar6 = uVar6 >> 8 ^ uVar7 >> 0x13 ^ uVar2;
      puVar13[2] = uVar7;
      puVar13[3] = uVar6;
      uVar6 = (uVar6 ^ uVar2 >> 0x1e) * 0x6c078965 + 1;
      uVar2 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 2;
      uVar7 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 3;
      uVar3 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 4;
      local_814 = uVar6;
      uStack_810 = uVar2;
      local_80c = uVar7;
      uStack_808 = uVar3;
      lVar10 = (**(code **)(local_7f8 + 0x20))(&local_7f8);
      lVar15 = 0;
      iVar8 = 0;
      do {
        puVar13 = (uint *)(lVar10 + lVar15);
        lVar15 = lVar15 + 4;
        uVar14 = *puVar13 - (*puVar13 >> 1 & 0x55555555);
        uVar14 = (uVar14 >> 2 & 0x33333333) + (uVar14 & 0x33333333);
        uVar14 = uVar14 + (uVar14 >> 4) & 0xf0f0f0f;
        uVar14 = uVar14 + (uVar14 >> 8);
        iVar8 = (uVar14 + (uVar14 >> 0x10) & 0x3f) + iVar8;
      } while (lVar15 != 0x754);
      if (iVar8 != 0) {
        lVar10 = (**(code **)(local_7f8 + 0x20))(&local_7f8);
        lVar15 = 0;
        iVar8 = 0;
        do {
          puVar13 = (uint *)(lVar10 + lVar15);
          lVar15 = lVar15 + 4;
          uVar14 = *puVar13 - (*puVar13 >> 1 & 0x55555555);
          uVar14 = (uVar14 >> 2 & 0x33333333) + (uVar14 & 0x33333333);
          uVar14 = uVar14 + (uVar14 >> 4) & 0xf0f0f0f;
          uVar14 = uVar14 + (uVar14 >> 8);
          iVar8 = (uVar14 + (uVar14 >> 0x10) & 0x3f) + iVar8;
        } while (lVar15 != 0x754);
        if (iVar8 == 0) {
          local_81c = *(uint *)PTR_DAT_04bb37e0;
          uStack_818 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
        }
        else {
          lVar10 = (**(code **)(local_7f8 + 0x20))(&local_7f8);
          lVar15 = 0;
          uVar14 = 0;
          do {
            puVar13 = (uint *)(lVar10 + lVar15);
            lVar15 = lVar15 + 4;
            uVar4 = *puVar13 - (*puVar13 >> 1 & 0x55555555);
            uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
            uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
            uVar4 = uVar4 + (uVar4 >> 8);
            uVar14 = (uVar4 + (uVar4 >> 0x10) & 0x3f) + uVar14;
          } while (lVar15 != 0x754);
          uVar6 = uVar6 ^ uVar6 * 0x800;
          uStack_808 = uVar6 >> 8 ^ uVar3 >> 0x13 ^ uVar6 ^ uVar3;
          local_814 = uVar2;
          uStack_810 = uVar7;
          local_80c = uVar3;
          FUN_00889f80(&local_81c,&local_7f8,(int)((ulong)uStack_808 * (ulong)uVar14 >> 0x20) + 1);
          FUN_01a4c66c(&local_814,&local_81c);
        }
        lVar15 = *(long *)puVar1;
        uVar6 = FUN_0277d6c4(&local_81c);
        if (*(long *)puVar1 != 0) {
          lVar15 = *(long *)(lVar15 + 0x57e58);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar15 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
            FUN_028684d0(param_1,&local_81c,0);
            lVar15 = (**(code **)(local_7f8 + 0x18))(&local_7f8);
            uVar6 = FUN_0277d6c4(&local_81c);
            if ((uVar6 >> 3 & 0x1fff) < 0x753) {
              lVar10 = (ulong)((uVar6 & 0xffff) >> 5) * 4;
              *(uint *)(lVar15 + lVar10) =
                   *(uint *)(lVar15 + lVar10) & (1 << (ulong)(uVar6 & 0x1f) ^ 0xffffffffU);
            }
            lVar15 = *(long *)puVar1;
            local_78 = 0;
            local_88 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
            local_80 = (char *)CONCAT44(uStack_818,local_81c);
            uVar6 = FUN_0277d6c4(&local_80);
            if (*(long *)puVar1 != 0) {
              lVar15 = *(long *)(lVar15 + 0x57e58);
              uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
              if ((uVar6 < *(uint *)(lVar15 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
                FUN_0277d6c4(&local_81c);
              }
            }
          }
        }
      }
    }
  }
  return;
}

