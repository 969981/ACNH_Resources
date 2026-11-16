
void FUN_02889630(undefined2 *param_1,long param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined2 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  void *pvVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined4 local_258c;
  undefined8 local_2588;
  uint *apuStack_2580 [234];
  uint local_1e2c;
  uint local_1e28;
  uint local_1e24;
  int local_1e20;
  undefined **local_1e18;
  undefined1 *apuStack_1e10 [234];
  uint local_16bc;
  uint local_16b8;
  uint local_16b4;
  int local_16b0;
  undefined **local_16a8;
  undefined ***local_16a0 [234];
  uint local_f4c;
  uint local_f48;
  uint local_f44;
  int local_f40;
  undefined *local_f38;
  char *local_f30 [234];
  uint local_7dc;
  uint local_7d8;
  uint local_7d4;
  int local_7d0;
  undefined1 local_7c4 [4];
  undefined8 local_7c0;
  undefined4 *local_7b8;
  
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_f30[0] = "GrowUpAfterPatch1_5";
  local_f38 = puVar1;
  uVar9 = FUN_0273f0a0(&local_f38);
  uVar3 = DAT_05586008;
  if ((uVar9 & 1) == 0) {
    param_1[0x80] = DAT_05586008;
    uVar6 = DAT_0558600c;
    uVar5 = DAT_0558600b;
    uVar4 = DAT_0558600a;
    *(undefined1 *)(param_1 + 0x81) = DAT_0558600a;
    *(undefined1 *)((long)param_1 + 0x103) = uVar5;
    *(undefined4 *)(param_1 + 0x82) = uVar6;
    param_1[0x84] = uVar3;
    *(undefined1 *)(param_1 + 0x85) = uVar4;
    *(undefined1 *)((long)param_1 + 0x10b) = uVar5;
    *(undefined4 *)(param_1 + 0x86) = uVar6;
  }
  local_f30[0] = "CommuneSkkDonation";
  local_f38 = puVar1;
  iVar7 = FUN_0273ea30(&local_f38);
  uVar3 = DAT_05586008;
  local_7c4[0] = 0;
  *param_1 = DAT_05586008;
  param_1[4] = uVar3;
  param_1[8] = uVar3;
  param_1[0xc] = uVar3;
  uVar4 = DAT_0558600a;
  param_1[0x10] = uVar3;
  param_1[0x14] = uVar3;
  param_1[0x18] = uVar3;
  param_1[0x1c] = uVar3;
  param_1[0x20] = uVar3;
  param_1[0x24] = uVar3;
  param_1[0x28] = uVar3;
  param_1[0x2c] = uVar3;
  param_1[0x30] = uVar3;
  param_1[0x34] = uVar3;
  param_1[0x38] = uVar3;
  param_1[0x3c] = uVar3;
  param_1[0x40] = uVar3;
  param_1[0x44] = uVar3;
  param_1[0x48] = uVar3;
  *(undefined1 *)(param_1 + 1) = uVar4;
  uVar5 = DAT_0558600b;
  *(undefined1 *)(param_1 + 5) = uVar4;
  *(undefined1 *)(param_1 + 9) = uVar4;
  *(undefined1 *)(param_1 + 0xd) = uVar4;
  *(undefined1 *)(param_1 + 0x11) = uVar4;
  *(undefined1 *)(param_1 + 0x15) = uVar4;
  *(undefined1 *)(param_1 + 0x19) = uVar4;
  *(undefined1 *)(param_1 + 0x1d) = uVar4;
  *(undefined1 *)(param_1 + 0x21) = uVar4;
  *(undefined1 *)(param_1 + 0x25) = uVar4;
  *(undefined1 *)(param_1 + 0x29) = uVar4;
  *(undefined1 *)(param_1 + 0x2d) = uVar4;
  *(undefined1 *)(param_1 + 0x31) = uVar4;
  *(undefined1 *)(param_1 + 0x35) = uVar4;
  *(undefined1 *)((long)param_1 + 3) = uVar5;
  uVar6 = DAT_0558600c;
  *(undefined1 *)((long)param_1 + 0xb) = uVar5;
  *(undefined1 *)((long)param_1 + 0x13) = uVar5;
  *(undefined1 *)((long)param_1 + 0x1b) = uVar5;
  *(undefined1 *)((long)param_1 + 0x23) = uVar5;
  *(undefined1 *)((long)param_1 + 0x2b) = uVar5;
  *(undefined1 *)((long)param_1 + 0x33) = uVar5;
  *(undefined1 *)((long)param_1 + 0x3b) = uVar5;
  *(undefined1 *)((long)param_1 + 0x43) = uVar5;
  *(undefined1 *)((long)param_1 + 0x4b) = uVar5;
  *(undefined1 *)((long)param_1 + 0x53) = uVar5;
  *(undefined1 *)((long)param_1 + 0x5b) = uVar5;
  *(undefined1 *)((long)param_1 + 99) = uVar5;
  *(undefined1 *)((long)param_1 + 0x6b) = uVar5;
  *(undefined4 *)(param_1 + 2) = uVar6;
  *(undefined4 *)(param_1 + 6) = uVar6;
  *(undefined4 *)(param_1 + 10) = uVar6;
  *(undefined4 *)(param_1 + 0xe) = uVar6;
  *(undefined4 *)(param_1 + 0x12) = uVar6;
  *(undefined4 *)(param_1 + 0x16) = uVar6;
  *(undefined4 *)(param_1 + 0x1a) = uVar6;
  *(undefined4 *)(param_1 + 0x1e) = uVar6;
  *(undefined4 *)(param_1 + 0x22) = uVar6;
  *(undefined4 *)(param_1 + 0x26) = uVar6;
  *(undefined4 *)(param_1 + 0x2a) = uVar6;
  *(undefined4 *)(param_1 + 0x2e) = uVar6;
  *(undefined4 *)(param_1 + 0x32) = uVar6;
  *(undefined4 *)(param_1 + 0x36) = uVar6;
  *(undefined1 *)(param_1 + 0x39) = uVar4;
  *(undefined1 *)((long)param_1 + 0x73) = uVar5;
  *(undefined4 *)(param_1 + 0x3a) = uVar6;
  *(undefined1 *)(param_1 + 0x3d) = uVar4;
  *(undefined1 *)((long)param_1 + 0x7b) = uVar5;
  *(undefined4 *)(param_1 + 0x3e) = uVar6;
  *(undefined1 *)(param_1 + 0x41) = uVar4;
  *(undefined1 *)((long)param_1 + 0x83) = uVar5;
  *(undefined4 *)(param_1 + 0x42) = uVar6;
  *(undefined1 *)(param_1 + 0x45) = uVar4;
  *(undefined1 *)((long)param_1 + 0x8b) = uVar5;
  *(undefined4 *)(param_1 + 0x46) = uVar6;
  *(undefined1 *)(param_1 + 0x49) = uVar4;
  *(undefined1 *)((long)param_1 + 0x93) = uVar5;
  *(undefined4 *)(param_1 + 0x4a) = uVar6;
  param_1[0x4c] = uVar3;
  *(undefined1 *)(param_1 + 0x4d) = uVar4;
  *(undefined1 *)((long)param_1 + 0x9b) = uVar5;
  *(undefined4 *)(param_1 + 0x4e) = uVar6;
  param_1[0x50] = uVar3;
  *(undefined1 *)(param_1 + 0x51) = uVar4;
  *(undefined1 *)((long)param_1 + 0xa3) = uVar5;
  *(undefined4 *)(param_1 + 0x52) = uVar6;
  param_1[0x54] = uVar3;
  *(undefined1 *)(param_1 + 0x55) = uVar4;
  *(undefined1 *)((long)param_1 + 0xab) = uVar5;
  *(undefined4 *)(param_1 + 0x56) = uVar6;
  param_1[0x58] = uVar3;
  *(undefined1 *)(param_1 + 0x59) = uVar4;
  *(undefined1 *)((long)param_1 + 0xb3) = uVar5;
  *(undefined4 *)(param_1 + 0x5a) = uVar6;
  param_1[0x5c] = uVar3;
  *(undefined1 *)(param_1 + 0x5d) = uVar4;
  *(undefined1 *)((long)param_1 + 0xbb) = uVar5;
  *(undefined4 *)(param_1 + 0x5e) = uVar6;
  param_1[0x60] = uVar3;
  uVar3 = DAT_05586008;
  *(undefined1 *)(param_1 + 0x61) = uVar4;
  uVar4 = DAT_0558600a;
  *(undefined1 *)((long)param_1 + 0xc3) = uVar5;
  uVar5 = DAT_0558600b;
  *(undefined4 *)(param_1 + 0x62) = uVar6;
  uVar6 = DAT_0558600c;
  param_1[100] = uVar3;
  *(undefined1 *)(param_1 + 0x65) = uVar4;
  *(undefined1 *)((long)param_1 + 0xcb) = uVar5;
  *(undefined4 *)(param_1 + 0x66) = uVar6;
  param_1[0x68] = uVar3;
  *(undefined1 *)(param_1 + 0x69) = uVar4;
  *(undefined1 *)((long)param_1 + 0xd3) = uVar5;
  *(undefined4 *)(param_1 + 0x6a) = uVar6;
  param_1[0x6c] = uVar3;
  *(undefined1 *)(param_1 + 0x6d) = uVar4;
  *(undefined1 *)((long)param_1 + 0xdb) = uVar5;
  *(undefined4 *)(param_1 + 0x6e) = uVar6;
  param_1[0x70] = uVar3;
  *(undefined1 *)(param_1 + 0x71) = uVar4;
  *(undefined1 *)((long)param_1 + 0xe3) = uVar5;
  *(undefined4 *)(param_1 + 0x72) = uVar6;
  param_1[0x74] = uVar3;
  *(undefined1 *)(param_1 + 0x75) = uVar4;
  *(undefined1 *)((long)param_1 + 0xeb) = uVar5;
  *(undefined4 *)(param_1 + 0x76) = uVar6;
  param_1[0x78] = uVar3;
  *(undefined1 *)(param_1 + 0x79) = uVar4;
  *(undefined1 *)((long)param_1 + 0xf3) = uVar5;
  *(undefined4 *)(param_1 + 0x7a) = uVar6;
  param_1[0x7c] = uVar3;
  *(undefined1 *)(param_1 + 0x7d) = uVar4;
  *(undefined1 *)((long)param_1 + 0xfb) = uVar5;
  *(undefined4 *)(param_1 + 0x7e) = uVar6;
  FUN_01b02920(local_7c4,param_2 + 0x10,0);
  local_f38 = PTR_DAT_04bbfe60 + 0x10;
  memset(local_f30,0,0x754);
  uVar8 = nn::os::GetSystemTick();
  local_7dc = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
  local_7d8 = (local_7dc ^ local_7dc >> 0x1e) * 0x6c078965 + 2;
  local_7d4 = (local_7d8 ^ local_7d8 >> 0x1e) * 0x6c078965 + 3;
  local_7d0 = (local_7d4 ^ local_7d4 >> 0x1e) * 0x6c078965 + 4;
  pvVar10 = (void *)FUN_01a451fc(&local_f38);
  memset(pvVar10,0,0x754);
  local_1e18._0_4_ = 0x5a;
  local_16a8 = &PTR_FUN_049ff4e8;
  local_16a0[0] = &local_1e18;
  FUN_008a1ba0(&local_f38,&local_16a8);
  if (1 < iVar7) {
    local_1e18._0_4_ = 0x5c;
    local_16a8 = &PTR_FUN_049ff4e8;
    local_16a0[0] = &local_1e18;
    FUN_008a1ba0(&local_f38,&local_16a8);
  }
  if (*(char *)(param_2 + 0x12) != '\n') {
    local_16a8 = &PTR_FUN_049ff4e8;
    local_1e18._0_4_ = 0x5b;
    local_16a0[0] = &local_1e18;
    FUN_008a1ba0(&local_f38,&local_16a8);
    if ((*(char *)(param_2 + 0x12) == '\f') && (*(char *)(param_2 + 0x13) < '\x1a')) {
      local_16a8 = &PTR_FUN_049ff4e8;
      local_1e18._0_4_ = 0x51;
      local_16a0[0] = &local_1e18;
      FUN_008a1ba0(&local_f38,&local_16a8);
      local_16a8 = &PTR_FUN_049ff4e8;
      local_1e18._0_4_ = 0x52;
      local_16a0[0] = &local_1e18;
      FUN_008a1ba0(&local_f38,&local_16a8);
    }
  }
  ppuVar2 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
  local_16a8 = ppuVar2;
  memset(local_16a0,0,0x754);
  uVar8 = nn::os::GetSystemTick();
  local_f4c = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
  local_f48 = (local_f4c ^ local_f4c >> 0x1e) * 0x6c078965 + 2;
  local_f44 = (local_f48 ^ local_f48 >> 0x1e) * 0x6c078965 + 3;
  local_f40 = (local_f44 ^ local_f44 >> 0x1e) * 0x6c078965 + 4;
  pvVar10 = (void *)FUN_01a451fc(&local_16a8);
  memset(pvVar10,0,0x754);
  apuStack_1e10[0] = local_7c4;
  local_1e18 = &PTR_FUN_049ff6a0;
  FUN_008a1ba0(&local_16a8,&local_1e18);
  local_1e18 = ppuVar2;
  memset(apuStack_1e10,0,0x754);
  uVar8 = nn::os::GetSystemTick();
  local_16bc = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
  local_16b8 = (local_16bc ^ local_16bc >> 0x1e) * 0x6c078965 + 2;
  local_16b4 = (local_16b8 ^ local_16b8 >> 0x1e) * 0x6c078965 + 3;
  local_16b0 = (local_16b4 ^ local_16b4 >> 0x1e) * 0x6c078965 + 4;
  pvVar10 = (void *)FUN_01a451fc(&local_1e18);
  memset(pvVar10,0,0x754);
  local_7c0._0_4_ = 0xf;
  apuStack_2580[0] = (uint *)&local_7c0;
  local_2588 = &PTR_FUN_049ff448;
  FUN_008a1ba0(&local_1e18,&local_2588);
  pvVar10 = (void *)(*(code *)local_1e18[3])(&local_1e18);
  lVar11 = (**(code **)(local_f38 + 0x20))(&local_f38);
  for (lVar13 = 0;
      *(uint *)((long)apuStack_2580 + lVar13 + -8) =
           *(uint *)(lVar11 + lVar13) & *(uint *)((long)pvVar10 + lVar13), lVar13 != 0x750;
      lVar13 = lVar13 + 8) {
    *(uint *)((long)apuStack_2580 + lVar13 + -4) =
         *(uint *)(lVar11 + lVar13 + 4) & *(uint *)((long)pvVar10 + lVar13 + 4);
  }
  memcpy(pvVar10,&local_2588,0x754);
  *(uint *)((long)pvVar10 + 0x750) = *(uint *)((long)pvVar10 + 0x750) & 0xffffff;
  pvVar10 = (void *)(*(code *)local_1e18[3])(&local_1e18);
  lVar11 = (*(code *)local_16a8[4])(&local_16a8);
  for (lVar13 = 0;
      *(uint *)((long)apuStack_2580 + lVar13 + -8) =
           *(uint *)(lVar11 + lVar13) & *(uint *)((long)pvVar10 + lVar13), lVar13 != 0x750;
      lVar13 = lVar13 + 8) {
    *(uint *)((long)apuStack_2580 + lVar13 + -4) =
         *(uint *)(lVar11 + lVar13 + 4) & *(uint *)((long)pvVar10 + lVar13 + 4);
  }
  memcpy(pvVar10,&local_2588,0x754);
  *(uint *)((long)pvVar10 + 0x750) = *(uint *)((long)pvVar10 + 0x750) & 0xffffff;
  FUN_0288a550(param_1,&local_1e18,3);
  local_1e18 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
  memset(apuStack_1e10,0,0x754);
  uVar8 = nn::os::GetSystemTick();
  local_16bc = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
  local_16b8 = (local_16bc ^ local_16bc >> 0x1e) * 0x6c078965 + 2;
  local_16b4 = (local_16b8 ^ local_16b8 >> 0x1e) * 0x6c078965 + 3;
  local_16b0 = (local_16b4 ^ local_16b4 >> 0x1e) * 0x6c078965 + 4;
  pvVar10 = (void *)FUN_01a451fc(&local_1e18);
  memset(pvVar10,0,0x754);
  local_7c0._0_4_ = 0xe;
  apuStack_2580[0] = (uint *)&local_7c0;
  local_2588 = &PTR_FUN_049ff448;
  FUN_008a1ba0(&local_1e18,&local_2588);
  pvVar10 = (void *)(*(code *)local_1e18[3])(&local_1e18);
  lVar11 = (**(code **)(local_f38 + 0x20))(&local_f38);
  for (lVar13 = 0;
      *(uint *)((long)apuStack_2580 + lVar13 + -8) =
           *(uint *)(lVar11 + lVar13) & *(uint *)((long)pvVar10 + lVar13), lVar13 != 0x750;
      lVar13 = lVar13 + 8) {
    *(uint *)((long)apuStack_2580 + lVar13 + -4) =
         *(uint *)(lVar11 + lVar13 + 4) & *(uint *)((long)pvVar10 + lVar13 + 4);
  }
  memcpy(pvVar10,&local_2588,0x754);
  *(uint *)((long)pvVar10 + 0x750) = *(uint *)((long)pvVar10 + 0x750) & 0xffffff;
  pvVar10 = (void *)(*(code *)local_1e18[3])(&local_1e18);
  lVar11 = (*(code *)local_16a8[4])(&local_16a8);
  for (lVar13 = 0;
      *(uint *)((long)apuStack_2580 + lVar13 + -8) =
           *(uint *)(lVar11 + lVar13) & *(uint *)((long)pvVar10 + lVar13), lVar13 != 0x750;
      lVar13 = lVar13 + 8) {
    *(uint *)((long)apuStack_2580 + lVar13 + -4) =
         *(uint *)(lVar11 + lVar13 + 4) & *(uint *)((long)pvVar10 + lVar13 + 4);
  }
  memcpy(pvVar10,&local_2588,0x754);
  *(uint *)((long)pvVar10 + 0x750) = *(uint *)((long)pvVar10 + 0x750) & 0xffffff;
  FUN_0288a550(param_1,&local_1e18,3);
  if (iVar7 < 2) {
    local_1e18 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
    memset(apuStack_1e10,0,0x754);
    uVar8 = nn::os::GetSystemTick();
    local_16bc = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
    local_16b8 = (local_16bc ^ local_16bc >> 0x1e) * 0x6c078965 + 2;
    local_16b4 = (local_16b8 ^ local_16b8 >> 0x1e) * 0x6c078965 + 3;
    local_16b0 = (local_16b4 ^ local_16b4 >> 0x1e) * 0x6c078965 + 4;
    pvVar10 = (void *)FUN_01a451fc(&local_1e18);
    memset(pvVar10,0,0x754);
    local_7c0 = (undefined **)CONCAT44(local_7c0._4_4_,0x13);
    apuStack_2580[0] = (uint *)&local_7c0;
    local_2588 = &PTR_FUN_049ff448;
    FUN_008a1ba0(&local_1e18,&local_2588);
    pvVar10 = (void *)(*(code *)local_1e18[3])(&local_1e18);
    lVar11 = (**(code **)(local_f38 + 0x20))(&local_f38);
    for (lVar13 = 0;
        *(uint *)((long)apuStack_2580 + lVar13 + -8) =
             *(uint *)(lVar11 + lVar13) & *(uint *)((long)pvVar10 + lVar13), lVar13 != 0x750;
        lVar13 = lVar13 + 8) {
      *(uint *)((long)apuStack_2580 + lVar13 + -4) =
           *(uint *)(lVar11 + lVar13 + 4) & *(uint *)((long)pvVar10 + lVar13 + 4);
    }
    memcpy(pvVar10,&local_2588,0x754);
    *(uint *)((long)pvVar10 + 0x750) = *(uint *)((long)pvVar10 + 0x750) & 0xffffff;
    pvVar10 = (void *)(*(code *)local_1e18[3])(&local_1e18);
    lVar11 = (*(code *)local_16a8[4])(&local_16a8);
    for (lVar13 = 0;
        *(uint *)((long)apuStack_2580 + lVar13 + -8) =
             *(uint *)(lVar11 + lVar13) & *(uint *)((long)pvVar10 + lVar13), lVar13 != 0x750;
        lVar13 = lVar13 + 8) {
      *(uint *)((long)apuStack_2580 + lVar13 + -4) =
           *(uint *)(lVar11 + lVar13 + 4) & *(uint *)((long)pvVar10 + lVar13 + 4);
    }
    memcpy(pvVar10,&local_2588,0x754);
    uVar8 = *(uint *)((long)pvVar10 + 0x750);
    uVar12 = 5;
  }
  else {
    ppuVar2 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
    local_1e18 = ppuVar2;
    memset(apuStack_1e10,0,0x754);
    uVar8 = nn::os::GetSystemTick();
    local_16bc = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
    local_16b8 = (local_16bc ^ local_16bc >> 0x1e) * 0x6c078965 + 2;
    local_16b4 = (local_16b8 ^ local_16b8 >> 0x1e) * 0x6c078965 + 3;
    local_16b0 = (local_16b4 ^ local_16b4 >> 0x1e) * 0x6c078965 + 4;
    pvVar10 = (void *)FUN_01a451fc(&local_1e18);
    memset(pvVar10,0,0x754);
    local_7c0._0_4_ = 0x13;
    local_2588 = &PTR_FUN_049ff448;
    apuStack_2580[0] = (uint *)&local_7c0;
    FUN_008a1ba0(&local_1e18,&local_2588);
    local_7c0 = (undefined **)CONCAT44(local_7c0._4_4_,0x25);
    local_2588 = &PTR_FUN_049ff448;
    apuStack_2580[0] = (uint *)&local_7c0;
    FUN_008a1ba0(&local_1e18,&local_2588);
    local_2588 = ppuVar2;
    memset(apuStack_2580,0,0x754);
    uVar8 = nn::os::GetSystemTick();
    local_1e2c = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
    local_1e28 = (local_1e2c ^ local_1e2c >> 0x1e) * 0x6c078965 + 2;
    local_1e24 = (local_1e28 ^ local_1e28 >> 0x1e) * 0x6c078965 + 3;
    local_1e20 = (local_1e24 ^ local_1e24 >> 0x1e) * 0x6c078965 + 4;
    pvVar10 = (void *)FUN_01a451fc(&local_2588);
    memset(pvVar10,0,0x754);
    local_258c = 0x5a;
    local_7c0 = &PTR_FUN_049ff4e8;
    local_7b8 = &local_258c;
    FUN_008a1ba0(&local_2588,&local_7c0);
    pvVar10 = (void *)(*(code *)local_1e18[3])(&local_1e18);
    lVar11 = (*(code *)local_2588[4])(&local_2588);
    for (lVar13 = 0;
        *(uint *)((long)&local_7c0 + lVar13) =
             *(uint *)(lVar11 + lVar13) & *(uint *)((long)pvVar10 + lVar13), lVar13 != 0x750;
        lVar13 = lVar13 + 8) {
      *(uint *)((long)&local_7c0 + lVar13 + 4) =
           *(uint *)(lVar11 + lVar13 + 4) & *(uint *)((long)pvVar10 + lVar13 + 4);
    }
    memcpy(pvVar10,&local_7c0,0x754);
    *(uint *)((long)pvVar10 + 0x750) = *(uint *)((long)pvVar10 + 0x750) & 0xffffff;
    pvVar10 = (void *)(*(code *)local_1e18[3])(&local_1e18);
    lVar11 = (*(code *)local_16a8[4])(&local_16a8);
    for (lVar13 = 0;
        *(uint *)((long)&local_7c0 + lVar13) =
             *(uint *)(lVar11 + lVar13) & *(uint *)((long)pvVar10 + lVar13), lVar13 != 0x750;
        lVar13 = lVar13 + 8) {
      *(uint *)((long)&local_7c0 + lVar13 + 4) =
           *(uint *)(lVar11 + lVar13 + 4) & *(uint *)((long)pvVar10 + lVar13 + 4);
    }
    memcpy(pvVar10,&local_7c0,0x754);
    *(uint *)((long)pvVar10 + 0x750) = *(uint *)((long)pvVar10 + 0x750) & 0xffffff;
    FUN_0288a550(param_1,&local_1e18,2);
    ppuVar2 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
    local_1e18 = ppuVar2;
    memset(apuStack_1e10,0,0x754);
    uVar8 = nn::os::GetSystemTick();
    local_16bc = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
    local_16b8 = (local_16bc ^ local_16bc >> 0x1e) * 0x6c078965 + 2;
    local_16b4 = (local_16b8 ^ local_16b8 >> 0x1e) * 0x6c078965 + 3;
    local_16b0 = (local_16b4 ^ local_16b4 >> 0x1e) * 0x6c078965 + 4;
    pvVar10 = (void *)FUN_01a451fc(&local_1e18);
    memset(pvVar10,0,0x754);
    local_7c0._0_4_ = 0x13;
    local_2588 = &PTR_FUN_049ff448;
    apuStack_2580[0] = (uint *)&local_7c0;
    FUN_008a1ba0(&local_1e18,&local_2588);
    local_7c0 = (undefined **)CONCAT44(local_7c0._4_4_,0x25);
    local_2588 = &PTR_FUN_049ff448;
    apuStack_2580[0] = (uint *)&local_7c0;
    FUN_008a1ba0(&local_1e18,&local_2588);
    local_2588 = ppuVar2;
    memset(apuStack_2580,0,0x754);
    uVar8 = nn::os::GetSystemTick();
    local_1e2c = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
    local_1e28 = (local_1e2c ^ local_1e2c >> 0x1e) * 0x6c078965 + 2;
    local_1e24 = (local_1e28 ^ local_1e28 >> 0x1e) * 0x6c078965 + 3;
    local_1e20 = (local_1e24 ^ local_1e24 >> 0x1e) * 0x6c078965 + 4;
    pvVar10 = (void *)FUN_01a451fc(&local_2588);
    memset(pvVar10,0,0x754);
    local_258c = 0x5c;
    local_7c0 = &PTR_FUN_049ff4e8;
    local_7b8 = &local_258c;
    FUN_008a1ba0(&local_2588,&local_7c0);
    pvVar10 = (void *)(*(code *)local_1e18[3])(&local_1e18);
    lVar11 = (*(code *)local_2588[4])(&local_2588);
    for (lVar13 = 0;
        *(uint *)((long)&local_7c0 + lVar13) =
             *(uint *)(lVar11 + lVar13) & *(uint *)((long)pvVar10 + lVar13), lVar13 != 0x750;
        lVar13 = lVar13 + 8) {
      *(uint *)((long)&local_7c0 + lVar13 + 4) =
           *(uint *)(lVar11 + lVar13 + 4) & *(uint *)((long)pvVar10 + lVar13 + 4);
    }
    memcpy(pvVar10,&local_7c0,0x754);
    *(uint *)((long)pvVar10 + 0x750) = *(uint *)((long)pvVar10 + 0x750) & 0xffffff;
    pvVar10 = (void *)(*(code *)local_1e18[3])(&local_1e18);
    lVar11 = (*(code *)local_16a8[4])(&local_16a8);
    for (lVar13 = 0;
        *(uint *)((long)&local_7c0 + lVar13) =
             *(uint *)(lVar11 + lVar13) & *(uint *)((long)pvVar10 + lVar13), lVar13 != 0x750;
        lVar13 = lVar13 + 8) {
      *(uint *)((long)&local_7c0 + lVar13 + 4) =
           *(uint *)(lVar11 + lVar13 + 4) & *(uint *)((long)pvVar10 + lVar13 + 4);
    }
    memcpy(pvVar10,&local_7c0,0x754);
    uVar8 = *(uint *)((long)pvVar10 + 0x750);
    uVar12 = 3;
  }
  *(uint *)((long)pvVar10 + 0x750) = uVar8 & 0xffffff;
  FUN_0288a550(param_1,&local_1e18,uVar12);
  return;
}

