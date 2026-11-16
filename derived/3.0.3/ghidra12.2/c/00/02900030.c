
void FUN_02900030(undefined8 param_1,int *param_2)

{
  undefined **ppuVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined4 local_1e54;
  undefined8 local_1e50;
  undefined ***apppuStack_1e48 [234];
  uint local_16f4;
  uint local_16f0;
  uint local_16ec;
  int local_16e8;
  undefined **local_16e0;
  undefined8 *apuStack_16d8 [234];
  uint local_f84;
  uint local_f80;
  uint local_f7c;
  int local_f78;
  undefined **local_f70;
  undefined1 *local_f68 [234];
  uint local_814;
  uint local_810;
  uint local_80c;
  int local_808;
  undefined **local_800;
  undefined1 auStack_7f8 [1876];
  uint local_a4;
  uint local_a0;
  uint local_9c;
  int local_98;
  undefined1 local_8c [4];
  undefined **local_88;
  undefined4 *local_80;
  
  local_8c[0] = 1;
  local_800 = &PTR_LAB_049ff3a8;
  memset(auStack_7f8,0,0x754);
  uVar3 = nn::os::GetSystemTick();
  local_a4 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 1;
  local_a0 = (local_a4 ^ local_a4 >> 0x1e) * 0x6c078965 + 2;
  local_9c = (local_a0 ^ local_a0 >> 0x1e) * 0x6c078965 + 3;
  local_98 = (local_9c ^ local_9c >> 0x1e) * 0x6c078965 + 4;
  pvVar5 = (void *)FUN_01a451fc(&local_800);
  memset(pvVar5,0,0x754);
  local_f70 = &PTR_FUN_049ff6c8;
  local_f68[0] = local_8c;
  FUN_008a1ba0(&local_800,&local_f70);
  local_f70 = &PTR_LAB_049ff3a8;
  memset(local_f68,0,0x754);
  uVar3 = nn::os::GetSystemTick();
  local_814 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 1;
  local_810 = (local_814 ^ local_814 >> 0x1e) * 0x6c078965 + 2;
  local_80c = (local_810 ^ local_810 >> 0x1e) * 0x6c078965 + 3;
  local_808 = (local_80c ^ local_80c >> 0x1e) * 0x6c078965 + 4;
  pvVar5 = (void *)FUN_01a451fc(&local_f70);
  memset(pvVar5,0,0x754);
  local_1e50 = (undefined **)CONCAT44(local_1e50._4_4_,0x4f);
  apuStack_16d8[0] = &local_1e50;
  local_16e0 = &PTR_FUN_049ff4e8;
  FUN_008a1ba0(&local_f70,&local_16e0);
  if (DAT_05574040 != 0) {
    puVar8 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar6 = (**(code **)(*(long *)*puVar8 + 0x38))();
      if (lVar6 == 0) goto LAB_02900284;
      lVar6 = lVar6 + 0x70;
    }
    else if (((puVar8 == (undefined8 *)0x0) || ((long *)puVar8[0x26] == (long *)0x0)) ||
            (lVar6 = (**(code **)(*(long *)puVar8[0x26] + 0x38))(), lVar6 == 0)) goto LAB_02900284;
    if ((*(long **)(lVar6 + 0x1a0da0) == (long *)0x0) ||
       (puVar8 = (undefined8 *)**(long **)(lVar6 + 0x1a0da0), puVar8 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar8)();
      uVar3 = uVar3 ^ 1;
    }
    uVar2 = *(uint *)(*(long *)(lVar6 + 0x1a0d88) + *(long *)(lVar6 + 0x1a0d80));
    if (2 < uVar2) {
      uVar2 = 0;
    }
    local_16e0 = (undefined **)CONCAT44(local_16e0._4_4_,uVar2);
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar6 + 0x1a0da0) != 0)) &&
       (puVar8 = *(undefined8 **)(*(long *)(lVar6 + 0x1a0da0) + 8), puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)();
    }
    if (1 < (int)uVar2) {
      local_1e50 = (undefined **)CONCAT44(local_1e50._4_4_,0x50);
      apuStack_16d8[0] = &local_1e50;
      local_16e0 = &PTR_FUN_049ff4e8;
      FUN_008a1ba0(&local_f70,&local_16e0);
    }
  }
LAB_02900284:
  local_16e0 = &PTR_LAB_049ff3a8;
  memset(apuStack_16d8,0,0x754);
  uVar3 = nn::os::GetSystemTick();
  local_f84 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 1;
  local_f80 = (local_f84 ^ local_f84 >> 0x1e) * 0x6c078965 + 2;
  local_f7c = (local_f80 ^ local_f80 >> 0x1e) * 0x6c078965 + 3;
  local_f78 = (local_f7c ^ local_f7c >> 0x1e) * 0x6c078965 + 4;
  pvVar5 = (void *)FUN_01a451fc(&local_16e0);
  memset(pvVar5,0,0x754);
  if (*param_2 - 1U < 2) {
    local_1e50 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
    memset(apppuStack_1e48,0,0x754);
    uVar3 = nn::os::GetSystemTick();
    local_16f4 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 1;
    local_16f0 = (local_16f4 ^ local_16f4 >> 0x1e) * 0x6c078965 + 2;
    local_16ec = (local_16f0 ^ local_16f0 >> 0x1e) * 0x6c078965 + 3;
    local_16e8 = (local_16ec ^ local_16ec >> 0x1e) * 0x6c078965 + 4;
    pvVar5 = (void *)FUN_01a451fc(&local_1e50);
    memset(pvVar5,0,0x754);
    local_88 = &PTR_FUN_049ff858;
    local_1e54 = 0x535;
    local_80 = &local_1e54;
    FUN_008a1ba0(&local_16e0,&local_88);
    local_88 = &PTR_FUN_049ff858;
    local_1e54 = 0x536;
    local_80 = &local_1e54;
    FUN_008a1ba0(&local_16e0,&local_88);
    if (*param_2 == 1) {
      local_88 = &PTR_FUN_049ff858;
      local_1e54 = 0x534;
      local_80 = &local_1e54;
      FUN_008a1ba0(&local_16e0,&local_88);
    }
    iVar4 = FUN_02900bd0(param_1,&local_16e0,6);
    local_88 = &PTR_FUN_049ff858;
    local_1e54 = 0x272;
    local_80 = &local_1e54;
    FUN_008a1ba0(&local_1e50,&local_88);
    local_88 = &PTR_FUN_049ff858;
    local_1e54 = 0x1d6;
    local_80 = &local_1e54;
    FUN_008a1ba0(&local_1e50,&local_88);
    local_88 = &PTR_FUN_049ff858;
    local_1e54 = 0x19f;
    local_80 = &local_1e54;
    FUN_008a1ba0(&local_1e50,&local_88);
    local_88 = &PTR_FUN_049ff858;
    local_1e54 = 0x1ec;
    local_80 = &local_1e54;
    FUN_008a1ba0(&local_1e50,&local_88);
    FUN_02900bd0(param_1,&local_1e50,6 - iVar4);
  }
  else {
    local_88._0_4_ = 9;
    local_1e50 = &PTR_FUN_049ff448;
    apppuStack_1e48[0] = &local_88;
    FUN_008a1ba0(&local_16e0,&local_1e50);
    local_88 = (undefined **)CONCAT44(local_88._4_4_,10);
    local_1e50 = &PTR_FUN_049ff448;
    apppuStack_1e48[0] = &local_88;
    FUN_008a1ba0(&local_16e0,&local_1e50);
    pvVar5 = (void *)(*(code *)local_16e0[3])(&local_16e0);
    lVar7 = (*(code *)local_f70[4])(&local_f70);
    for (lVar6 = 0;
        *(uint *)((long)apppuStack_1e48 + lVar6 + -8) =
             *(uint *)(lVar7 + lVar6) & *(uint *)((long)pvVar5 + lVar6), lVar6 != 0x750;
        lVar6 = lVar6 + 8) {
      *(uint *)((long)apppuStack_1e48 + lVar6 + -4) =
           *(uint *)(lVar7 + lVar6 + 4) & *(uint *)((long)pvVar5 + lVar6 + 4);
    }
    memcpy(pvVar5,&local_1e50,0x754);
    *(uint *)((long)pvVar5 + 0x750) = *(uint *)((long)pvVar5 + 0x750) & 0xffffff;
    pvVar5 = (void *)(*(code *)local_16e0[3])(&local_16e0);
    lVar7 = (*(code *)local_800[4])(&local_800);
    for (lVar6 = 0;
        *(uint *)((long)apppuStack_1e48 + lVar6 + -8) =
             *(uint *)(lVar7 + lVar6) & *(uint *)((long)pvVar5 + lVar6), lVar6 != 0x750;
        lVar6 = lVar6 + 8) {
      *(uint *)((long)apppuStack_1e48 + lVar6 + -4) =
           *(uint *)(lVar7 + lVar6 + 4) & *(uint *)((long)pvVar5 + lVar6 + 4);
    }
    memcpy(pvVar5,&local_1e50,0x754);
    *(uint *)((long)pvVar5 + 0x750) = *(uint *)((long)pvVar5 + 0x750) & 0xffffff;
    FUN_029010e0(param_1,&local_16e0);
  }
  local_16e0 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
  memset(apuStack_16d8,0,0x754);
  uVar3 = nn::os::GetSystemTick();
  local_f84 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 1;
  local_f80 = (local_f84 ^ local_f84 >> 0x1e) * 0x6c078965 + 2;
  local_f7c = (local_f80 ^ local_f80 >> 0x1e) * 0x6c078965 + 3;
  local_f78 = (local_f7c ^ local_f7c >> 0x1e) * 0x6c078965 + 4;
  pvVar5 = (void *)FUN_01a451fc(&local_16e0);
  memset(pvVar5,0,0x754);
  if (*param_2 - 1U < 2) {
    local_88._0_4_ = 0x18b;
    local_1e50 = &PTR_FUN_049ff858;
    apppuStack_1e48[0] = &local_88;
    FUN_008a1ba0(&local_16e0,&local_1e50);
    local_88._0_4_ = 0x32c;
    local_1e50 = &PTR_FUN_049ff858;
    apppuStack_1e48[0] = &local_88;
    FUN_008a1ba0(&local_16e0,&local_1e50);
    local_88._0_4_ = 0x102;
    local_1e50 = &PTR_FUN_049ff858;
    apppuStack_1e48[0] = &local_88;
    FUN_008a1ba0(&local_16e0,&local_1e50);
    local_88._0_4_ = 0x7b;
    local_1e50 = &PTR_FUN_049ff858;
    apppuStack_1e48[0] = &local_88;
    FUN_008a1ba0(&local_16e0,&local_1e50);
    local_88._0_4_ = 0x2c3;
    local_1e50 = &PTR_FUN_049ff858;
    apppuStack_1e48[0] = &local_88;
    FUN_008a1ba0(&local_16e0,&local_1e50);
    local_88 = (undefined **)CONCAT44(local_88._4_4_,0x356);
    local_1e50 = &PTR_FUN_049ff858;
    apppuStack_1e48[0] = &local_88;
    FUN_008a1ba0(&local_16e0,&local_1e50);
    FUN_02900bd0(param_1,&local_16e0,6);
  }
  else {
    local_88 = (undefined **)CONCAT44(local_88._4_4_,0xd);
    apppuStack_1e48[0] = &local_88;
    local_1e50 = &PTR_FUN_049ff448;
    FUN_008a1ba0(&local_16e0,&local_1e50);
    pvVar5 = (void *)(*(code *)local_16e0[3])(&local_16e0);
    lVar7 = (*(code *)local_f70[4])(&local_f70);
    for (lVar6 = 0;
        *(uint *)((long)apppuStack_1e48 + lVar6 + -8) =
             *(uint *)(lVar7 + lVar6) & *(uint *)((long)pvVar5 + lVar6), lVar6 != 0x750;
        lVar6 = lVar6 + 8) {
      *(uint *)((long)apppuStack_1e48 + lVar6 + -4) =
           *(uint *)(lVar7 + lVar6 + 4) & *(uint *)((long)pvVar5 + lVar6 + 4);
    }
    memcpy(pvVar5,&local_1e50,0x754);
    *(uint *)((long)pvVar5 + 0x750) = *(uint *)((long)pvVar5 + 0x750) & 0xffffff;
    pvVar5 = (void *)(*(code *)local_16e0[3])(&local_16e0);
    lVar7 = (*(code *)local_800[4])(&local_800);
    for (lVar6 = 0;
        *(uint *)((long)apppuStack_1e48 + lVar6 + -8) =
             *(uint *)(lVar7 + lVar6) & *(uint *)((long)pvVar5 + lVar6), lVar6 != 0x750;
        lVar6 = lVar6 + 8) {
      *(uint *)((long)apppuStack_1e48 + lVar6 + -4) =
           *(uint *)(lVar7 + lVar6 + 4) & *(uint *)((long)pvVar5 + lVar6 + 4);
    }
    memcpy(pvVar5,&local_1e50,0x754);
    *(uint *)((long)pvVar5 + 0x750) = *(uint *)((long)pvVar5 + 0x750) & 0xffffff;
    FUN_029010e0(param_1,&local_16e0);
  }
  ppuVar1 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
  local_16e0 = ppuVar1;
  memset(apuStack_16d8,0,0x754);
  uVar3 = nn::os::GetSystemTick();
  local_f84 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 1;
  local_f80 = (local_f84 ^ local_f84 >> 0x1e) * 0x6c078965 + 2;
  local_f7c = (local_f80 ^ local_f80 >> 0x1e) * 0x6c078965 + 3;
  local_f78 = (local_f7c ^ local_f7c >> 0x1e) * 0x6c078965 + 4;
  pvVar5 = (void *)FUN_01a451fc(&local_16e0);
  memset(pvVar5,0,0x754);
  if (*param_2 - 1U < 2) {
    local_1e50 = ppuVar1;
    memset(apppuStack_1e48,0,0x754);
    uVar3 = nn::os::GetSystemTick();
    local_16f4 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 1;
    local_16f0 = (local_16f4 ^ local_16f4 >> 0x1e) * 0x6c078965 + 2;
    local_16ec = (local_16f0 ^ local_16f0 >> 0x1e) * 0x6c078965 + 3;
    local_16e8 = (local_16ec ^ local_16ec >> 0x1e) * 0x6c078965 + 4;
    pvVar5 = (void *)FUN_01a451fc(&local_1e50);
    memset(pvVar5,0,0x754);
    local_1e54 = 0x537;
    local_88 = &PTR_FUN_049ff858;
    local_80 = &local_1e54;
    FUN_008a1ba0(&local_16e0,&local_88);
    local_88 = &PTR_FUN_049ff858;
    local_1e54 = 0x538;
    local_80 = &local_1e54;
    FUN_008a1ba0(&local_16e0,&local_88);
    local_88 = &PTR_FUN_049ff858;
    local_1e54 = 0x539;
    local_80 = &local_1e54;
    FUN_008a1ba0(&local_16e0,&local_88);
    iVar4 = FUN_02900bd0(param_1,&local_16e0,6);
    local_88 = &PTR_FUN_049ff858;
    local_1e54 = 0x260;
    local_80 = &local_1e54;
    FUN_008a1ba0(&local_1e50,&local_88);
    local_88 = &PTR_FUN_049ff858;
    local_1e54 = 0x229;
    local_80 = &local_1e54;
    FUN_008a1ba0(&local_1e50,&local_88);
    local_88 = &PTR_FUN_049ff858;
    local_1e54 = 0xea;
    local_80 = &local_1e54;
    FUN_008a1ba0(&local_1e50,&local_88);
    FUN_02900bd0(param_1,&local_1e50,6 - iVar4);
  }
  else {
    local_88._0_4_ = 0x10;
    local_1e50 = &PTR_FUN_049ff448;
    apppuStack_1e48[0] = &local_88;
    FUN_008a1ba0(&local_16e0,&local_1e50);
    local_88._0_4_ = 0x11;
    local_1e50 = &PTR_FUN_049ff448;
    apppuStack_1e48[0] = &local_88;
    FUN_008a1ba0(&local_16e0,&local_1e50);
    local_88 = (undefined **)CONCAT44(local_88._4_4_,0x12);
    local_1e50 = &PTR_FUN_049ff448;
    apppuStack_1e48[0] = &local_88;
    FUN_008a1ba0(&local_16e0,&local_1e50);
    pvVar5 = (void *)(*(code *)local_16e0[3])(&local_16e0);
    lVar7 = (*(code *)local_f70[4])(&local_f70);
    for (lVar6 = 0;
        *(uint *)((long)apppuStack_1e48 + lVar6 + -8) =
             *(uint *)(lVar7 + lVar6) & *(uint *)((long)pvVar5 + lVar6), lVar6 != 0x750;
        lVar6 = lVar6 + 8) {
      *(uint *)((long)apppuStack_1e48 + lVar6 + -4) =
           *(uint *)(lVar7 + lVar6 + 4) & *(uint *)((long)pvVar5 + lVar6 + 4);
    }
    memcpy(pvVar5,&local_1e50,0x754);
    *(uint *)((long)pvVar5 + 0x750) = *(uint *)((long)pvVar5 + 0x750) & 0xffffff;
    pvVar5 = (void *)(*(code *)local_16e0[3])(&local_16e0);
    lVar7 = (*(code *)local_800[4])(&local_800);
    for (lVar6 = 0;
        *(uint *)((long)apppuStack_1e48 + lVar6 + -8) =
             *(uint *)(lVar7 + lVar6) & *(uint *)((long)pvVar5 + lVar6), lVar6 != 0x750;
        lVar6 = lVar6 + 8) {
      *(uint *)((long)apppuStack_1e48 + lVar6 + -4) =
           *(uint *)(lVar7 + lVar6 + 4) & *(uint *)((long)pvVar5 + lVar6 + 4);
    }
    memcpy(pvVar5,&local_1e50,0x754);
    *(uint *)((long)pvVar5 + 0x750) = *(uint *)((long)pvVar5 + 0x750) & 0xffffff;
    FUN_029010e0(param_1,&local_16e0);
  }
  return;
}

