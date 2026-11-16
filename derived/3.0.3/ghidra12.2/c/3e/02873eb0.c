
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02873eb0(long *param_1,uint param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  void *pvVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  long *plVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auStack_808 [8];
  undefined4 local_800;
  undefined4 uStack_7fc;
  undefined **local_7f8;
  char *apcStack_7f0 [234];
  uint local_9c;
  uint local_98;
  uint local_94;
  int local_90;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  
  puVar7 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar6 = *puVar7 ^ *puVar7 << 0xb;
  uVar12 = puVar7[3];
  *puVar7 = puVar7[1];
  puVar7[1] = puVar7[2];
  uVar6 = uVar6 >> 8 ^ uVar12 >> 0x13 ^ uVar6 ^ uVar12;
  puVar7[2] = uVar12;
  puVar7[3] = uVar6;
  local_7f8 = &PTR_LAB_048f9770;
  apcStack_7f0[0] = "FoxCommuneRealRate";
  iVar3 = FUN_0273ea30(&local_7f8);
  local_7f8 = &PTR_LAB_048f9770;
  apcStack_7f0[0] = "FoxCommuneRealNum";
  iVar4 = FUN_0273ea30(&local_7f8);
  local_88 = &PTR_LAB_048f9770;
  local_80 = "FoxCommuneRealNum";
  iVar5 = FUN_0273ef40(&local_88);
  puVar2 = PTR_DAT_04bbfe60;
  if ((int)((ulong)uVar6 * 100 >> 0x20) < iVar3 && iVar4 < iVar5) {
    local_7f8 = &PTR_LAB_048f9770;
    apcStack_7f0[0] = "FoxCommuneRealNum";
    FUN_0273fd90(&local_7f8,1);
    local_7f8 = (undefined **)(puVar2 + 0x10);
    memset(apcStack_7f0,0,0x754);
    uVar6 = nn::os::GetSystemTick();
    local_9c = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 1;
    local_98 = (local_9c ^ local_9c >> 0x1e) * 0x6c078965 + 2;
    local_94 = (local_98 ^ local_98 >> 0x1e) * 0x6c078965 + 3;
    local_90 = (local_94 ^ local_94 >> 0x1e) * 0x6c078965 + 4;
    pvVar8 = (void *)(*(code *)local_7f8[3])(&local_7f8);
    memset(pvVar8,0,0x754);
    local_800 = 0x67;
    local_80 = (char *)&local_800;
    local_88 = &PTR_FUN_049ff4e8;
    FUN_008a1ba0(&local_7f8,&local_88);
    if ((short)*param_1 != -2) {
      lVar9 = (*(code *)local_7f8[3])(&local_7f8);
      uVar6 = FUN_0277d6c4(param_1);
      if ((uVar6 >> 3 & 0x1fff) < 0x753) {
        lVar10 = (ulong)((uVar6 & 0xffff) >> 5) * 4;
        *(uint *)(lVar9 + lVar10) =
             *(uint *)(lVar9 + lVar10) & (1 << (ulong)(uVar6 & 0x1f) ^ 0xffffffffU);
      }
      puVar2 = PTR_DAT_04bb43c0;
      local_80 = (char *)*param_1;
      local_78 = 0;
      local_88 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
      lVar9 = *(long *)PTR_DAT_04bb43c0;
      uVar6 = FUN_0277d6c4(&local_80);
      if (*(long *)puVar2 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar9 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
          lVar9 = *(long *)PTR_DAT_04bc0428;
          uVar6 = FUN_0277d6c4(param_1);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar9 + 0x1d8)) &&
             (lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8), lVar9 != 0)) {
            local_78 = lVar9;
          }
        }
      }
      FUN_01af15c0(&local_800,&local_88);
      if ((short)local_800 != -2) {
        FUN_01af15c0(auStack_808,&local_88);
        lVar9 = (*(code *)local_7f8[3])(&local_7f8);
        uVar6 = FUN_0277d6c4(auStack_808);
        if ((uVar6 >> 3 & 0x1fff) < 0x753) {
          lVar10 = (ulong)((uVar6 & 0xffff) >> 5) * 4;
          *(uint *)(lVar9 + lVar10) =
               *(uint *)(lVar9 + lVar10) & (1 << (ulong)(uVar6 & 0x1f) ^ 0xffffffffU);
        }
      }
    }
    plVar13 = param_1 + 1;
    if ((short)*plVar13 != -2) {
      lVar9 = (*(code *)local_7f8[3])(&local_7f8);
      uVar6 = FUN_0277d6c4(plVar13);
      if ((uVar6 >> 3 & 0x1fff) < 0x753) {
        lVar10 = (ulong)((uVar6 & 0xffff) >> 5) * 4;
        *(uint *)(lVar9 + lVar10) =
             *(uint *)(lVar9 + lVar10) & (1 << (ulong)(uVar6 & 0x1f) ^ 0xffffffffU);
      }
      puVar2 = PTR_DAT_04bb43c0;
      local_80 = (char *)param_1[1];
      local_78 = 0;
      local_88 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
      lVar9 = *(long *)PTR_DAT_04bb43c0;
      uVar6 = FUN_0277d6c4(&local_80);
      if (*(long *)puVar2 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar9 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
          lVar9 = *(long *)PTR_DAT_04bc0428;
          uVar6 = FUN_0277d6c4(plVar13);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar9 + 0x1d8)) &&
             (lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8), lVar9 != 0)) {
            local_78 = lVar9;
          }
        }
      }
      FUN_01af15c0(&local_800,&local_88);
      if ((short)local_800 != -2) {
        FUN_01af15c0(auStack_808,&local_88);
        lVar9 = (*(code *)local_7f8[3])(&local_7f8);
        uVar6 = FUN_0277d6c4(auStack_808);
        if ((uVar6 >> 3 & 0x1fff) < 0x753) {
          lVar10 = (ulong)((uVar6 & 0xffff) >> 5) * 4;
          *(uint *)(lVar9 + lVar10) =
               *(uint *)(lVar9 + lVar10) & (1 << (ulong)(uVar6 & 0x1f) ^ 0xffffffffU);
        }
      }
    }
    puVar7 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
    uVar6 = *puVar7 ^ *puVar7 << 0xb;
    uVar14 = puVar7[3];
    *puVar7 = puVar7[1];
    puVar7[1] = puVar7[2];
    uVar12 = uVar6 ^ uVar14;
    uVar6 = uVar6 >> 8 ^ uVar14 >> 0x13 ^ uVar12;
    puVar7[2] = uVar14;
    puVar7[3] = uVar6;
    uVar6 = (uVar6 ^ uVar12 >> 0x1e) * 0x6c078965 + 1;
    uVar14 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 2;
    uVar15 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 3;
    uVar12 = uVar15 ^ uVar15 >> 0x1e;
    lVar10 = (*(code *)local_7f8[4])(&local_7f8);
    lVar9 = 0;
    iVar3 = 0;
    do {
      puVar7 = (uint *)(lVar10 + lVar9);
      lVar9 = lVar9 + 4;
      uVar11 = *puVar7 - (*puVar7 >> 1 & 0x55555555);
      uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
      uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
      uVar11 = uVar11 + (uVar11 >> 8);
      iVar3 = (uVar11 + (uVar11 >> 0x10) & 0x3f) + iVar3;
    } while (lVar9 != 0x754);
    if (iVar3 == 0) goto LAB_02874940;
    lVar10 = (*(code *)local_7f8[4])(&local_7f8);
    lVar9 = 0;
    uVar11 = 0;
    do {
      puVar7 = (uint *)(lVar10 + lVar9);
      lVar9 = lVar9 + 4;
      uVar1 = *puVar7 - (*puVar7 >> 1 & 0x55555555);
      uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
      uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
      uVar1 = uVar1 + (uVar1 >> 8);
      uVar11 = (uVar1 + (uVar1 >> 0x10) & 0x3f) + uVar11;
    } while (lVar9 != 0x754);
  }
  else {
    local_7f8 = &PTR_LAB_048f9770;
    apcStack_7f0[0] = "FoxCommuneRealNum";
    FUN_0273ea30(&local_7f8);
    local_88 = &PTR_LAB_048f9770;
    local_80 = "FoxCommuneRealNum";
    FUN_0273ef40(&local_88);
    local_7f8 = (undefined **)(puVar2 + 0x10);
    memset(apcStack_7f0,0,0x754);
    uVar6 = nn::os::GetSystemTick();
    local_9c = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 1;
    local_98 = (local_9c ^ local_9c >> 0x1e) * 0x6c078965 + 2;
    local_94 = (local_98 ^ local_98 >> 0x1e) * 0x6c078965 + 3;
    local_90 = (local_94 ^ local_94 >> 0x1e) * 0x6c078965 + 4;
    pvVar8 = (void *)(*(code *)local_7f8[3])(&local_7f8);
    memset(pvVar8,0,0x754);
    local_800 = 0x68;
    local_80 = (char *)&local_800;
    local_88 = &PTR_FUN_049ff4e8;
    FUN_008a1ba0(&local_7f8,&local_88);
    if ((short)*param_1 != -2) {
      lVar9 = (*(code *)local_7f8[3])(&local_7f8);
      uVar6 = FUN_0277d6c4(param_1);
      if ((uVar6 >> 3 & 0x1fff) < 0x753) {
        lVar10 = (ulong)((uVar6 & 0xffff) >> 5) * 4;
        *(uint *)(lVar9 + lVar10) =
             *(uint *)(lVar9 + lVar10) & (1 << (ulong)(uVar6 & 0x1f) ^ 0xffffffffU);
      }
      puVar2 = PTR_DAT_04bb43c0;
      local_78 = 0;
      local_88 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
      local_80 = (char *)*param_1;
      lVar9 = *(long *)PTR_DAT_04bb43c0;
      uVar6 = FUN_0277d6c4(&local_80);
      if (*(long *)puVar2 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar9 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
          lVar9 = *(long *)PTR_DAT_04bc0428;
          uVar6 = FUN_0277d6c4(param_1);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar9 + 0x1d8)) &&
             (lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8), lVar9 != 0)) {
            local_78 = lVar9;
          }
        }
      }
      FUN_01af15c0(&local_800,&local_88);
      if ((short)local_800 != -2) {
        FUN_01af15c0(auStack_808,&local_88);
        lVar9 = (*(code *)local_7f8[3])(&local_7f8);
        uVar6 = FUN_0277d6c4(auStack_808);
        if ((uVar6 >> 3 & 0x1fff) < 0x753) {
          lVar10 = (ulong)((uVar6 & 0xffff) >> 5) * 4;
          *(uint *)(lVar9 + lVar10) =
               *(uint *)(lVar9 + lVar10) & (1 << (ulong)(uVar6 & 0x1f) ^ 0xffffffffU);
        }
      }
    }
    plVar13 = param_1 + 1;
    if ((short)*plVar13 != -2) {
      lVar9 = (*(code *)local_7f8[3])(&local_7f8);
      uVar6 = FUN_0277d6c4(plVar13);
      if ((uVar6 >> 3 & 0x1fff) < 0x753) {
        lVar10 = (ulong)((uVar6 & 0xffff) >> 5) * 4;
        *(uint *)(lVar9 + lVar10) =
             *(uint *)(lVar9 + lVar10) & (1 << (ulong)(uVar6 & 0x1f) ^ 0xffffffffU);
      }
      puVar2 = PTR_DAT_04bb43c0;
      local_78 = 0;
      local_88 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
      local_80 = (char *)param_1[1];
      lVar9 = *(long *)PTR_DAT_04bb43c0;
      uVar6 = FUN_0277d6c4(&local_80);
      if (*(long *)puVar2 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar9 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
          lVar9 = *(long *)PTR_DAT_04bc0428;
          uVar6 = FUN_0277d6c4(plVar13);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar9 + 0x1d8)) &&
             (lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8), lVar9 != 0)) {
            local_78 = lVar9;
          }
        }
      }
      FUN_01af15c0(&local_800,&local_88);
      if ((short)local_800 != -2) {
        FUN_01af15c0(auStack_808,&local_88);
        lVar9 = (*(code *)local_7f8[3])(&local_7f8);
        uVar6 = FUN_0277d6c4(auStack_808);
        if ((uVar6 >> 3 & 0x1fff) < 0x753) {
          lVar10 = (ulong)((uVar6 & 0xffff) >> 5) * 4;
          *(uint *)(lVar9 + lVar10) =
               *(uint *)(lVar9 + lVar10) & (1 << (ulong)(uVar6 & 0x1f) ^ 0xffffffffU);
        }
      }
    }
    puVar7 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
    uVar6 = *puVar7 ^ *puVar7 << 0xb;
    uVar14 = puVar7[3];
    *puVar7 = puVar7[1];
    puVar7[1] = puVar7[2];
    uVar12 = uVar6 ^ uVar14;
    uVar6 = uVar6 >> 8 ^ uVar14 >> 0x13 ^ uVar12;
    puVar7[2] = uVar14;
    puVar7[3] = uVar6;
    uVar6 = (uVar6 ^ uVar12 >> 0x1e) * 0x6c078965 + 1;
    uVar14 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 2;
    uVar15 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 3;
    uVar12 = uVar15 ^ uVar15 >> 0x1e;
    lVar10 = (*(code *)local_7f8[4])(&local_7f8);
    lVar9 = 0;
    iVar3 = 0;
    do {
      puVar7 = (uint *)(lVar10 + lVar9);
      lVar9 = lVar9 + 4;
      uVar11 = *puVar7 - (*puVar7 >> 1 & 0x55555555);
      uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
      uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
      uVar11 = uVar11 + (uVar11 >> 8);
      iVar3 = (uVar11 + (uVar11 >> 0x10) & 0x3f) + iVar3;
    } while (lVar9 != 0x754);
    if (iVar3 == 0) {
LAB_02874940:
      local_800 = _DAT_05586008;
      uStack_7fc = DAT_0558600c;
      goto LAB_02874950;
    }
    lVar10 = (*(code *)local_7f8[4])(&local_7f8);
    lVar9 = 0;
    uVar11 = 0;
    do {
      puVar7 = (uint *)(lVar10 + lVar9);
      lVar9 = lVar9 + 4;
      uVar1 = *puVar7 - (*puVar7 >> 1 & 0x55555555);
      uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
      uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
      uVar1 = uVar1 + (uVar1 >> 8);
      uVar11 = (uVar1 + (uVar1 >> 0x10) & 0x3f) + uVar11;
    } while (lVar9 != 0x754);
  }
  uVar12 = uVar12 * 0x6c078965 + 4;
  uVar6 = uVar6 ^ uVar6 << 0xb;
  local_88 = (undefined **)CONCAT44(uVar15,uVar14);
  uVar6 = uVar6 >> 8 ^ uVar12 >> 0x13 ^ uVar6 ^ uVar12;
  local_80 = (char *)CONCAT44(uVar6,uVar12);
  FUN_00889f80(&local_800,&local_7f8,(int)((ulong)uVar6 * (ulong)uVar11 >> 0x20) + 1);
  FUN_01a4c66c(&local_88,&local_800);
LAB_02874950:
  plVar13 = param_1 + param_2;
  if (1 < param_2) {
    plVar13 = param_1;
  }
  if ((short)*plVar13 == -2) {
    *(undefined4 *)plVar13 = local_800;
    *(undefined4 *)((long)plVar13 + 4) = uStack_7fc;
  }
  return;
}

