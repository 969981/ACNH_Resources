
void FUN_02875c40(long *param_1,uint param_2,int param_3)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  void *__s;
  long lVar11;
  uint *puVar12;
  long lVar13;
  uint uVar14;
  long *plVar15;
  undefined4 local_828;
  undefined4 uStack_824;
  undefined *local_820;
  char *pcStack_818;
  undefined4 local_810;
  undefined4 local_80c;
  uint local_808;
  uint uStack_804;
  uint local_800;
  uint uStack_7fc;
  undefined *local_7f8;
  undefined1 auStack_7f0 [1876];
  uint local_9c;
  uint local_98;
  uint local_94;
  int local_90;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  
  local_7f8 = PTR_DAT_04bbfe60 + 0x10;
  memset(auStack_7f0,0,0x754);
  uVar8 = nn::os::GetSystemTick();
  local_9c = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
  local_98 = (local_9c ^ local_9c >> 0x1e) * 0x6c078965 + 2;
  local_94 = (local_98 ^ local_98 >> 0x1e) * 0x6c078965 + 3;
  local_90 = (local_94 ^ local_94 >> 0x1e) * 0x6c078965 + 4;
  __s = (void *)FUN_01a451fc(&local_7f8);
  memset(__s,0,0x754);
  local_80 = (char *)&local_808;
  local_808 = 0x68;
  local_88 = &PTR_FUN_049ff4e8;
  FUN_008a1ba0(&local_7f8,&local_88);
  puVar1 = PTR_DAT_04bb43c0;
  if ((short)*param_1 != -2) {
    lVar11 = (**(code **)(local_7f8 + 0x18))(&local_7f8);
    uVar8 = FUN_0277d6c4(param_1);
    if ((uVar8 >> 3 & 0x1fff) < 0x753) {
      lVar13 = (ulong)((uVar8 & 0xffff) >> 5) * 4;
      *(uint *)(lVar11 + lVar13) =
           *(uint *)(lVar11 + lVar13) & (1 << (ulong)(uVar8 & 0x1f) ^ 0xffffffffU);
    }
    local_80 = (char *)*param_1;
    lVar11 = *(long *)puVar1;
    local_78 = 0;
    local_88 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
    uVar8 = FUN_0277d6c4(&local_80);
    if (*(long *)puVar1 != 0) {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar8 < *(uint *)(lVar11 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
        lVar11 = *(long *)PTR_DAT_04bc0428;
        uVar8 = FUN_0277d6c4(param_1);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((uVar8 < *(uint *)(lVar11 + 0x1d8)) &&
           (lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8), lVar11 != 0)) {
          local_78 = lVar11;
        }
      }
    }
    FUN_01af15c0(&local_808,&local_88);
    if ((short)local_808 != -2) {
      FUN_01af15c0(&local_820,&local_88);
      lVar11 = (**(code **)(local_7f8 + 0x18))(&local_7f8);
      uVar8 = FUN_0277d6c4(&local_820);
      if ((uVar8 >> 3 & 0x1fff) < 0x753) {
        lVar13 = (ulong)((uVar8 & 0xffff) >> 5) * 4;
        *(uint *)(lVar11 + lVar13) =
             *(uint *)(lVar11 + lVar13) & (1 << (ulong)(uVar8 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  plVar15 = param_1 + 1;
  if ((short)*plVar15 != -2) {
    lVar11 = (**(code **)(local_7f8 + 0x18))(&local_7f8);
    uVar8 = FUN_0277d6c4(plVar15);
    if ((uVar8 >> 3 & 0x1fff) < 0x753) {
      lVar13 = (ulong)((uVar8 & 0xffff) >> 5) * 4;
      *(uint *)(lVar11 + lVar13) =
           *(uint *)(lVar11 + lVar13) & (1 << (ulong)(uVar8 & 0x1f) ^ 0xffffffffU);
    }
    local_80 = (char *)param_1[1];
    lVar11 = *(long *)puVar1;
    local_78 = 0;
    local_88 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
    uVar8 = FUN_0277d6c4(&local_80);
    if (*(long *)puVar1 != 0) {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar8 < *(uint *)(lVar11 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
        lVar11 = *(long *)PTR_DAT_04bc0428;
        uVar8 = FUN_0277d6c4(plVar15);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((uVar8 < *(uint *)(lVar11 + 0x1d8)) &&
           (lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8), lVar11 != 0)) {
          local_78 = lVar11;
        }
      }
    }
    FUN_01af15c0(&local_808,&local_88);
    if ((short)local_808 != -2) {
      FUN_01af15c0(&local_820,&local_88);
      lVar11 = (**(code **)(local_7f8 + 0x18))(&local_7f8);
      uVar8 = FUN_0277d6c4(&local_820);
      if ((uVar8 >> 3 & 0x1fff) < 0x753) {
        lVar13 = (ulong)((uVar8 & 0xffff) >> 5) * 4;
        *(uint *)(lVar11 + lVar13) =
             *(uint *)(lVar11 + lVar13) & (1 << (ulong)(uVar8 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  puVar12 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar8 = *puVar12 ^ *puVar12 << 0xb;
  uVar3 = puVar12[3];
  *puVar12 = puVar12[1];
  puVar12[1] = puVar12[2];
  uVar2 = uVar8 ^ uVar3;
  uVar8 = uVar8 >> 8 ^ uVar3 >> 0x13 ^ uVar2;
  puVar12[2] = uVar3;
  puVar12[3] = uVar8;
  uVar8 = (uVar8 ^ uVar2 >> 0x1e) * 0x6c078965 + 1;
  uVar2 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 2;
  uVar3 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 3;
  uVar5 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 4;
  local_808 = uVar8;
  uStack_804 = uVar2;
  local_800 = uVar3;
  uStack_7fc = uVar5;
  lVar13 = (**(code **)(local_7f8 + 0x20))(&local_7f8);
  lVar11 = 0;
  iVar9 = 0;
  do {
    puVar12 = (uint *)(lVar13 + lVar11);
    lVar11 = lVar11 + 4;
    uVar14 = *puVar12 - (*puVar12 >> 1 & 0x55555555);
    uVar14 = (uVar14 >> 2 & 0x33333333) + (uVar14 & 0x33333333);
    uVar14 = uVar14 + (uVar14 >> 4) & 0xf0f0f0f;
    uVar14 = uVar14 + (uVar14 >> 8);
    iVar9 = (uVar14 + (uVar14 >> 0x10) & 0x3f) + iVar9;
  } while (lVar11 != 0x754);
  if (iVar9 == 0) {
    sVar4 = *(short *)PTR_DAT_04bb37e0;
    local_810 = *(undefined4 *)PTR_DAT_04bb37e0;
    local_80c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  }
  else {
    lVar13 = (**(code **)(local_7f8 + 0x20))(&local_7f8);
    lVar11 = 0;
    uVar14 = 0;
    do {
      puVar12 = (uint *)(lVar13 + lVar11);
      lVar11 = lVar11 + 4;
      uVar6 = *puVar12 - (*puVar12 >> 1 & 0x55555555);
      uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
      uVar6 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f;
      uVar6 = uVar6 + (uVar6 >> 8);
      uVar14 = (uVar6 + (uVar6 >> 0x10) & 0x3f) + uVar14;
    } while (lVar11 != 0x754);
    uVar8 = uVar8 ^ uVar8 * 0x800;
    uStack_7fc = uVar8 >> 8 ^ uVar5 >> 0x13 ^ uVar8 ^ uVar5;
    local_808 = uVar2;
    uStack_804 = uVar3;
    local_800 = uVar5;
    FUN_00889f80(&local_810,&local_7f8,(int)((ulong)uStack_7fc * (ulong)uVar14 >> 0x20) + 1);
    FUN_01a4c66c(&local_808,&local_810);
    sVar4 = (short)local_810;
  }
  if (sVar4 == -2) {
    local_88 = (undefined **)0xa;
    FUN_0277d4ac(&local_88);
    if ((short)*param_1 == -2) {
      lVar11 = 0;
    }
    else {
      if ((short)*plVar15 != -2) {
        return;
      }
      lVar11 = 1;
    }
    *(undefined4 *)(param_1 + lVar11) = (undefined4)local_88;
    *(undefined4 *)((long)(param_1 + lVar11) + 4) = local_88._4_4_;
  }
  else {
    puVar12 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar2 = puVar12[3];
    uVar8 = *puVar12 ^ *puVar12 << 0xb;
    *puVar12 = puVar12[1];
    puVar12[1] = puVar12[2];
    puVar7 = PTR_DAT_04bb2020;
    uVar8 = uVar8 >> 8 ^ uVar2 >> 0x13 ^ uVar8 ^ uVar2;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    puVar12[2] = uVar2;
    puVar12[3] = uVar8;
    local_80 = "FoxCommuneRealNum";
    local_88 = (undefined **)puVar1;
    iVar9 = FUN_0273ea30(&local_88);
    pcStack_818 = "FoxCommuneRealNum";
    local_820 = puVar1;
    iVar10 = FUN_0273ef40(&local_820);
    puVar1 = PTR_DAT_04bb43c0;
    if ((iVar9 < iVar10) && ((int)((ulong)uVar8 * 100 >> 0x20) < param_3)) {
      local_78 = 0;
      local_80 = (char *)CONCAT44(local_80c,local_810);
      local_88 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
      lVar11 = *(long *)PTR_DAT_04bb43c0;
      uVar8 = FUN_0277d6c4(&local_80);
      if (*(long *)puVar1 != 0) {
        lVar11 = *(long *)(lVar11 + 0x57e58);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((uVar8 < *(uint *)(lVar11 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
          lVar11 = *(long *)PTR_DAT_04bc0428;
          uVar8 = FUN_0277d6c4(&local_810);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if ((uVar8 < *(uint *)(lVar11 + 0x1d8)) &&
             (lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8), lVar11 != 0)) {
            local_78 = lVar11;
          }
        }
      }
      FUN_01af15c0(&local_828,&local_88);
      local_810 = local_828;
      local_80c = uStack_824;
      local_820 = puVar7 + 0x10;
      pcStack_818 = "FoxCommuneRealNum";
      FUN_0273fd90(&local_820,1);
    }
    if ((short)param_1[param_2] == -2) {
      *(short *)(param_1 + param_2) = (short)local_810;
      *(undefined2 *)((long)param_1 + (ulong)param_2 * 8 + 2) = local_810._2_2_;
      *(undefined4 *)((long)param_1 + (ulong)param_2 * 8 + 4) = local_80c;
    }
  }
  return;
}

