
void FUN_016b93c0(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  int iVar12;
  undefined *local_ab8;
  char *pcStack_ab0;
  undefined *local_aa8;
  char *pcStack_aa0;
  undefined *local_a98;
  undefined8 *puStack_a90;
  undefined4 local_a88;
  undefined *local_a80;
  char *pcStack_a78;
  undefined *local_a70;
  char *pcStack_a68;
  undefined *local_a60;
  undefined8 *puStack_a58;
  undefined4 local_a50;
  undefined *local_a48;
  char *pcStack_a40;
  undefined *local_a38;
  char *pcStack_a30;
  undefined *local_a28;
  undefined8 *puStack_a20;
  undefined4 local_a18;
  undefined4 local_a10;
  undefined4 uStack_a0c;
  undefined8 local_a08;
  undefined4 local_8f4;
  undefined *local_8f0;
  undefined1 auStack_8e8 [1876];
  uint local_194;
  uint local_190;
  uint local_18c;
  int local_188;
  undefined **local_180;
  undefined4 *local_178;
  undefined4 local_170;
  undefined4 local_16c [63];
  undefined1 local_6d;
  
  local_8f0 = PTR_DAT_04bbfe60 + 0x10;
  memset(auStack_8e8,0,0x754);
  uVar5 = nn::os::GetSystemTick();
  local_194 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
  local_190 = (local_194 ^ local_194 >> 0x1e) * 0x6c078965 + 2;
  local_18c = (local_190 ^ local_190 >> 0x1e) * 0x6c078965 + 3;
  local_188 = (local_18c ^ local_18c >> 0x1e) * 0x6c078965 + 4;
  pvVar7 = (void *)FUN_01a451fc(&local_8f0);
  memset(pvVar7,0,0x754);
  local_180 = &PTR_LAB_049ff470;
  FUN_008a1ba0(&local_8f0,&local_180);
  local_a10 = 4;
  local_180 = &PTR_FUN_049ff448;
  local_178 = &local_a10;
  FUN_008a1ba0(&local_8f0,&local_180);
  local_180 = &PTR_FUN_049ff448;
  local_a10 = 5;
  local_178 = &local_a10;
  FUN_008a1ba0(&local_8f0,&local_180);
  local_180 = &PTR_FUN_049ff448;
  local_a10 = 0x5e;
  local_178 = &local_a10;
  FUN_008a1ba0(&local_8f0,&local_180);
  local_180 = &PTR_FUN_049ff448;
  local_a10 = 0x6c;
  local_178 = &local_a10;
  FUN_008a1ba0(&local_8f0,&local_180);
  local_180 = &PTR_FUN_049ff448;
  local_a10 = 0xb7;
  local_178 = &local_a10;
  FUN_008a1ba0(&local_8f0,&local_180);
  local_180 = &PTR_FUN_049ff448;
  local_a10 = 0x68;
  local_178 = &local_a10;
  FUN_008a1ba0(&local_8f0,&local_180);
  puVar1 = PTR_DAT_04bb43c0;
  local_180 = &PTR_FUN_049ff448;
  local_8f4 = 0xa6;
  local_178 = &local_8f4;
  uVar5 = 0;
  do {
    (**(code **)(local_8f0 + 0x10))(&local_a10,&local_8f0,uVar5);
    lVar8 = (**(code **)(local_8f0 + 0x20))(&local_8f0);
    uVar3 = 1 << (ulong)(uVar5 & 0x1f);
    if ((*(uint *)(lVar8 + (ulong)(uVar5 >> 5) * 4) & uVar3) != 0) {
      lVar8 = *(long *)puVar1;
      uVar6 = FUN_0277d6c4(&local_a10);
      if (*(long *)puVar1 != 0) {
        lVar8 = *(long *)(lVar8 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if (((uVar6 < *(uint *)(lVar8 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) &&
           (uVar9 = (*(code *)*local_180)(&local_180,&local_a10), (uVar9 & 1) == 0))
        goto LAB_016b9590;
      }
      lVar8 = (**(code **)(local_8f0 + 0x18))(&local_8f0);
      lVar10 = (ulong)(uVar5 >> 5) * 4;
      *(uint *)(lVar8 + lVar10) = *(uint *)(lVar8 + lVar10) & (uVar3 ^ 0xffffffff);
    }
LAB_016b9590:
    uVar5 = uVar5 + 1;
  } while (uVar5 != 15000);
  uVar5 = 0;
  local_8f4 = 0xa7;
  local_178 = &local_8f4;
  local_180 = &PTR_FUN_049ff448;
  do {
    (**(code **)(local_8f0 + 0x10))(&local_a10,&local_8f0,uVar5);
    lVar8 = (**(code **)(local_8f0 + 0x20))(&local_8f0);
    uVar3 = 1 << (ulong)(uVar5 & 0x1f);
    if ((*(uint *)(lVar8 + (ulong)(uVar5 >> 5) * 4) & uVar3) != 0) {
      lVar8 = *(long *)puVar1;
      uVar6 = FUN_0277d6c4(&local_a10);
      if (*(long *)puVar1 != 0) {
        lVar8 = *(long *)(lVar8 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if (((uVar6 < *(uint *)(lVar8 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) &&
           (uVar9 = (*(code *)*local_180)(&local_180,&local_a10), (uVar9 & 1) == 0))
        goto LAB_016b9680;
      }
      lVar8 = (**(code **)(local_8f0 + 0x18))(&local_8f0);
      lVar10 = (ulong)(uVar5 >> 5) * 4;
      *(uint *)(lVar8 + lVar10) = *(uint *)(lVar8 + lVar10) & (uVar3 ^ 0xffffffff);
    }
LAB_016b9680:
    puVar4 = PTR_DAT_04bb2698;
    uVar5 = uVar5 + 1;
  } while (uVar5 != 15000);
  iVar12 = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  ppuVar2 = (undefined **)(PTR_DAT_04bb21f8 + 0x10);
  do {
    FUN_006e9528(&local_a10,"HotelThemeParam%d",iVar12);
    lVar8 = *(long *)puVar4;
    if (lVar8 == 0) {
      pvVar7 = malloc(0xaa8);
    }
    else {
      plVar11 = param_2;
      if (param_2 == (long *)0x0) {
        lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar11 = (long *)(lVar8 + 8);
        if (lVar10 != 0) {
          plVar11 = (long *)(lVar10 + 0xa8);
        }
        plVar11 = (long *)*plVar11;
        if (plVar11 == (long *)0x0) {
          pvVar7 = (void *)0x0;
          goto LAB_016b97e0;
        }
      }
      pvVar7 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,0xaa8,8);
    }
LAB_016b97e0:
    local_a18 = 0;
    puStack_a20 = &DAT_0407ebb1;
    pcStack_a30 = "HotelTheme";
    pcStack_a40 = "HotelTheme";
    local_a48 = puVar1;
    local_a38 = puVar1;
    local_a28 = puVar1;
    (**(code **)(CONCAT44(uStack_a0c,local_a10) + 0x18))(&local_a10);
    FUN_016b9b00(pvVar7,&local_a48,local_a08,&local_8f0);
    if (*(int *)(param_1 + 8) < *(int *)(param_1 + 0xc)) {
      *(void **)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 8) * 8) = pvVar7;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    }
    local_6d = 0;
    plVar11 = (long *)((long)pvVar7 + 0x20);
    local_170 = 0x100;
    local_16c[0]._0_1_ = 0;
    local_180 = ppuVar2;
    local_178 = local_16c;
    uVar9 = (**(code **)(*plVar11 + 0xf0))(plVar11,&local_180,1);
    if ((uVar9 & 1) != 0) {
      FUN_03c27e60(plVar11,&local_180,param_2);
    }
    iVar12 = iVar12 + 1;
  } while (iVar12 != 0xf);
  iVar12 = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  ppuVar2 = (undefined **)(PTR_DAT_04bb21f8 + 0x10);
  do {
    FUN_006e9528(&local_a10,"HotelVipThemeParam%02d",iVar12);
    lVar8 = *(long *)puVar4;
    if (lVar8 == 0) {
      pvVar7 = malloc(0xaa8);
    }
    else {
      plVar11 = param_2;
      if (param_2 == (long *)0x0) {
        lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar11 = (long *)(lVar8 + 8);
        if (lVar10 != 0) {
          plVar11 = (long *)(lVar10 + 0xa8);
        }
        plVar11 = (long *)*plVar11;
        if (plVar11 == (long *)0x0) {
          pvVar7 = (void *)0x0;
          goto LAB_016b993c;
        }
      }
      pvVar7 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,0xaa8,8);
    }
LAB_016b993c:
    local_a50 = 0;
    puStack_a58 = &DAT_0407ebb1;
    pcStack_a68 = "HotelTheme";
    pcStack_a78 = "HotelTheme";
    local_a80 = puVar1;
    local_a70 = puVar1;
    local_a60 = puVar1;
    (**(code **)(CONCAT44(uStack_a0c,local_a10) + 0x18))(&local_a10);
    FUN_016b9b00(pvVar7,&local_a80,local_a08,&local_8f0);
    if (*(int *)(param_1 + 0x90) < *(int *)(param_1 + 0x94)) {
      *(void **)(*(long *)(param_1 + 0x98) + (long)*(int *)(param_1 + 0x90) * 8) = pvVar7;
      *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
    }
    local_6d = 0;
    plVar11 = (long *)((long)pvVar7 + 0x20);
    local_170 = 0x100;
    local_16c[0]._0_1_ = 0;
    local_180 = ppuVar2;
    local_178 = local_16c;
    uVar9 = (**(code **)(*plVar11 + 0xf0))(plVar11,&local_180,1);
    if ((uVar9 & 1) != 0) {
      FUN_03c27e60(plVar11,&local_180,param_2);
    }
    iVar12 = iVar12 + 1;
    if (iVar12 == 0x1e) {
      lVar8 = *(long *)puVar4;
      if (lVar8 == 0) {
        pvVar7 = malloc(0xaa8);
      }
      else {
        plVar11 = param_2;
        if (param_2 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar11 = (long *)(lVar8 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
        }
        pvVar7 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,0xaa8,8);
      }
      local_a88 = 0;
      local_ab8 = PTR_DAT_04bb2020 + 0x10;
      pcStack_ab0 = "HotelTheme";
      pcStack_aa0 = "HotelTheme";
      puStack_a90 = &DAT_0407ebb1;
      local_aa8 = local_ab8;
      local_a98 = local_ab8;
      FUN_016b9b00(pvVar7,&local_ab8,"HotelThemeParamFree",&local_8f0);
      *(void **)(param_1 + 400) = pvVar7;
      local_6d = 0;
      plVar11 = (long *)((long)pvVar7 + 0x20);
      local_170 = 0x100;
      local_178 = local_16c;
      local_16c[0]._0_1_ = 0;
      local_180 = (undefined **)(PTR_DAT_04bb21f8 + 0x10);
      uVar9 = (**(code **)(*plVar11 + 0xf0))(plVar11,&local_180,1);
      if ((uVar9 & 1) != 0) {
        FUN_03c27e60(plVar11,&local_180,param_2);
      }
      return;
    }
  } while( true );
}

