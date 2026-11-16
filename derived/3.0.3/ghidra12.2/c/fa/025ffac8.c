
void FUN_025ffac8(undefined8 *param_1,undefined8 param_2,byte *param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  uint *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined4 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  Uid UVar15;
  uint uVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  byte *pbVar20;
  byte bVar21;
  byte bVar22;
  long *plVar23;
  undefined *puVar24;
  byte bVar25;
  undefined8 *puVar26;
  undefined4 uVar27;
  long lVar28;
  undefined *puVar29;
  uint uVar30;
  uint local_34c;
  undefined *local_330;
  long local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined1 local_308;
  undefined4 local_304;
  undefined1 local_2dd;
  undefined8 local_2d8;
  char *local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined *local_2a8;
  undefined1 *puStack_2a0;
  undefined4 local_298;
  undefined1 local_294 [63];
  undefined1 local_255;
  undefined *local_250;
  undefined1 *puStack_248;
  undefined4 local_240;
  undefined1 local_23c [63];
  undefined1 local_1fd;
  undefined8 local_1f8;
  undefined6 uStack_1f0;
  undefined2 local_1ea;
  undefined6 uStack_1e8;
  undefined1 auStack_1e2 [2];
  undefined8 local_1e0;
  undefined1 *local_1d8;
  undefined4 local_1d0;
  undefined1 local_1cc [63];
  undefined1 local_18d;
  undefined8 local_188;
  char *local_180;
  undefined4 local_178;
  undefined1 local_174;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined4 local_160;
  undefined *local_158;
  undefined1 *puStack_150;
  undefined4 local_148;
  undefined1 local_144 [63];
  undefined1 local_105;
  undefined *local_100;
  undefined1 *puStack_f8;
  undefined4 local_f0;
  undefined1 local_ec [63];
  undefined1 local_ad;
  undefined8 local_a8;
  undefined6 uStack_a0;
  undefined2 local_9a;
  undefined6 uStack_98;
  undefined1 auStack_92 [2];
  uint local_90;
  uint local_88;
  uint local_84;
  undefined *local_80;
  Any64BitId *local_78;
  long local_70;
  
  param_1[2] = 0;
  *param_1 = &PTR_LAB_04a86ce8;
  param_1[1] = 0;
  bVar21 = *param_3;
  *(undefined4 *)((long)param_1 + 0x1c) = 0xffffffff;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  if (7 < bVar21) {
    bVar21 = 0xff;
  }
  *(byte *)(param_1 + 3) = bVar21;
  puVar24 = PTR_DAT_04bc3578;
  puVar29 = PTR_DAT_04bb2268;
  lVar28 = *(long *)PTR_DAT_04bb2268;
  if (lVar28 == 0) {
    return;
  }
  uVar9 = (**(code **)(*(long *)**(undefined8 **)PTR_DAT_04bc3578 + 0x80))
                    ((long *)**(undefined8 **)PTR_DAT_04bc3578,8);
  if (uVar9 >> 0xc < 5) {
    *(undefined1 *)(lVar28 + 0xb1) = 1;
  }
  if (*(char *)(*(long *)puVar29 + 0xb1) != '\0') {
    return;
  }
  lVar28 = FUN_0260d454(*(long *)puVar29,param_2,0xffffffff,8,0x10);
  param_1[1] = lVar28;
  if (lVar28 == 0) {
    return;
  }
  if ((*(long *)puVar29 != 0) && (*(char *)(*(long *)puVar29 + 0xb1) == '\0')) {
    lVar28 = *(long *)(lVar28 + 8);
    if (lVar28 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = FUN_03f2a10c(0x400,**(undefined8 **)puVar24,1);
      if ((lVar10 != 0) &&
         (uVar9 = (ulong)*(uint *)(lVar28 + 0x20), 0 < (int)*(uint *)(lVar28 + 0x20))) {
        plVar23 = *(long **)(lVar28 + 0x28);
        do {
          if (*plVar23 == 0) {
            *plVar23 = lVar10;
            goto LAB_025ffc14;
          }
          plVar23 = plVar23 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      lVar10 = 0;
      *(undefined1 *)(*(long *)puVar29 + 0xb1) = 1;
    }
LAB_025ffc14:
    param_1[2] = lVar10;
  }
  puVar29 = PTR_DAT_04bb46b0;
  local_188 = (undefined *)((ulong)local_188._4_4_ << 0x20);
  lVar28 = *(long *)PTR_DAT_04bb46b0;
  if (lVar28 == 0) {
    lVar28 = 0;
LAB_025ffca4:
    lVar10 = 0;
    lVar18 = param_1[2];
    puVar29 = PTR_DAT_04bb2020;
  }
  else {
    puVar17 = *(undefined8 **)(lVar28 + 0x10);
    if ((*(byte *)(lVar28 + 0x453) & 1) == 0) {
      lVar10 = (**(code **)(*(long *)*puVar17 + 0x38))();
      lVar28 = 0;
      if (lVar10 != 0) {
        lVar28 = lVar10 + 0x70;
      }
      lVar10 = *(long *)puVar29;
    }
    else if ((puVar17 == (undefined8 *)0x0) || ((long *)puVar17[0x26] == (long *)0x0)) {
      lVar28 = 0;
      lVar10 = *(long *)PTR_DAT_04bb46b0;
    }
    else {
      lVar28 = (**(code **)(*(long *)puVar17[0x26] + 0x38))();
      lVar10 = *(long *)puVar29;
    }
    if (lVar10 == 0) goto LAB_025ffca4;
    lVar18 = (**(code **)(*(long *)**(undefined8 **)(lVar10 + 0x10) + 0x38))();
    lVar10 = 0;
    if (lVar18 != 0) {
      lVar10 = lVar18 + 0x276cb0;
    }
    lVar18 = param_1[2];
    puVar29 = PTR_DAT_04bb2020;
  }
  if (lVar18 == 0) {
    PTR_DAT_04bb2020 = puVar29;
    return;
  }
  PTR_DAT_04bb2020 = puVar29;
  if (lVar10 != 0) {
    local_188 = puVar29 + 0x10;
    local_180 = "VillageDaysCount";
    FUN_0273ea30(&local_188);
    lVar18 = param_1[2];
  }
  local_188 = puVar29 + 0x10;
  local_180 = "VillageDaysCount";
  lVar11 = nn::prepo::Struct::GetBuffer();
  if (lVar11 != 0) {
    (**(code **)(local_188 + 0x18))(&local_188);
    nn::prepo::Struct::Add((char *)(lVar18 + 8),(long)local_180);
  }
  if (*(long **)(lVar28 + 0x1c2868) == (long *)0x0) {
    uVar9 = 0;
  }
  else {
    puVar17 = (undefined8 *)**(long **)(lVar28 + 0x1c2868);
    uVar9 = 0;
    if (puVar17 != (undefined8 *)0x0) {
      uVar9 = (**(code **)*puVar17)();
    }
  }
  local_84 = *(uint *)(*(long *)(lVar28 + 0x1c2850) + *(long *)(lVar28 + 0x1c2848));
  if (3 < local_84) {
    local_84 = 0;
  }
  if ((((uVar9 & 1) != 0) && (*(long *)(lVar28 + 0x1c2868) != 0)) &&
     (puVar17 = *(undefined8 **)(*(long *)(lVar28 + 0x1c2868) + 8), puVar17 != (undefined8 *)0x0)) {
    (**(code **)*puVar17)();
  }
  lVar11 = param_1[2];
  local_180 = "GameRegion";
  local_188 = puVar29 + 0x10;
  lVar18 = nn::prepo::Struct::GetBuffer();
  if (lVar18 != 0) {
    (**(code **)(local_188 + 0x18))(&local_188);
    nn::prepo::Struct::Add((char *)(lVar11 + 8),(long)local_180);
  }
  lVar11 = param_1[2];
  local_180 = "Language";
  local_188 = puVar29 + 0x10;
  lVar18 = nn::prepo::Struct::GetBuffer();
  if (lVar18 != 0) {
    (**(code **)(local_188 + 0x18))(&local_188);
    nn::prepo::Struct::Add((char *)(lVar11 + 8),local_180);
  }
  if (*(long **)(lVar28 + 0xe7178) == (long *)0x0) {
    uVar9 = 0;
  }
  else {
    puVar17 = (undefined8 *)**(long **)(lVar28 + 0xe7178);
    uVar9 = 0;
    if (puVar17 != (undefined8 *)0x0) {
      uVar9 = (**(code **)*puVar17)();
    }
  }
  local_88 = *(uint *)(*(long *)(lVar28 + 0xe7160) + *(long *)(lVar28 + 0xe7158) + 0x14);
  if (1 < local_88) {
    local_88 = 0;
  }
  if ((((uVar9 & 1) != 0) && (*(long *)(lVar28 + 0xe7178) != 0)) &&
     (puVar17 = *(undefined8 **)(*(long *)(lVar28 + 0xe7178) + 8), puVar17 != (undefined8 *)0x0)) {
    (**(code **)*puVar17)();
  }
  lVar18 = param_1[2];
  local_188 = puVar29 + 0x10;
  local_180 = "WeatherArea";
  lVar28 = nn::prepo::Struct::GetBuffer();
  if (lVar28 != 0) {
    (**(code **)(local_188 + 0x18))(&local_188);
    nn::prepo::Struct::Add((char *)(lVar18 + 8),(long)local_180);
  }
  if (*(byte *)(param_1 + 3) < 8) {
    local_1e0 = (undefined *)CONCAT71(local_1e0._1_7_,*(byte *)(param_1 + 3));
    lVar28 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_1e0,1);
    if (lVar28 == 0) goto LAB_02600c3c;
LAB_026000e4:
    if ((*(long **)(lVar28 + 0x17bb0) == (long *)0x0) ||
       (puVar17 = (undefined8 *)**(long **)(lVar28 + 0x17bb0), puVar17 == (undefined8 *)0x0)) {
      local_34c = 0;
    }
    else {
      local_34c = (**(code **)*puVar17)();
    }
    lVar18 = *(long *)(lVar28 + 0x17b98) + *(long *)(lVar28 + 0x17b90);
    lVar19 = param_1[2];
    local_180 = "LocalVid";
    local_188 = puVar29 + 0x10;
    lVar11 = nn::prepo::Struct::GetBuffer();
    if (lVar11 != 0) {
      (**(code **)(local_188 + 0x18))(&local_188);
      nn::prepo::Struct::Add((char *)(lVar19 + 8),(long)local_180);
    }
    local_174 = 0;
    local_178 = 0xb;
    local_170 = 0xffffffff;
    uStack_168 = 0xffffffff00000000;
    puStack_150 = local_144;
    local_180 = (char *)&local_a8;
    local_160 = 0xffffffff;
    local_148 = 0x40;
    local_105 = 0;
    local_144[0] = 0;
    puVar24 = PTR_DAT_04bb2bc0 + 0x10;
    local_f0 = 0x40;
    local_ad = 0;
    local_ec[0] = 0;
    puStack_f8 = local_ec;
    uStack_98 = 0;
    local_188 = PTR_DAT_04bb5128 + 0x10;
    local_a8 = 0;
    uStack_a0 = 0;
    local_9a = 0;
    puVar2 = auStack_92;
    if (auStack_92 <= (undefined1 *)((long)&local_a8 + 2U)) {
      puVar2 = (undefined1 *)((long)&local_a8 + 2U);
    }
    local_158 = puVar24;
    local_100 = puVar24;
    memset(local_180,0,(ulong)(puVar2 + (-0xe1 - (long)&local_188)) & 0xfffffffffffffffc | 2);
    local_1d8 = (undefined1 *)(lVar18 + 4);
    local_90 = 2;
    local_1e0 = (undefined *)CONCAT44(local_1e0._4_4_,10);
    FUN_0082b014(&local_188);
    local_2c0 = 0;
    uStack_2b8 = 0;
    local_2c8 = 0;
    local_2b0 = CONCAT31(local_2b0._1_3_,1);
    local_2ac = 0;
    local_2d8 = PTR_DAT_04bc0cd8 + 0x10;
    local_2d0 = (char *)0x0;
    FUN_02906b00(&local_2d8,&local_188,&local_1e0);
    local_1d8 = local_1cc;
    local_1d0 = 0x40;
    local_18d = 0;
    local_1cc[0] = 0;
    local_90 = 2;
    if (*(byte *)(lVar18 + 0x18) < 4) {
      local_90 = (uint)*(byte *)(lVar18 + 0x18);
    }
    local_1e0 = puVar24;
    FUN_006f4bf4(&local_188,&local_1e0,0);
    lVar19 = param_1[2];
    local_2d0 = "LandName";
    local_2d8 = puVar29 + 0x10;
    (**(code **)(local_1e0 + 0x18))(&local_1e0);
    lVar11 = nn::prepo::Struct::GetBuffer();
    if (lVar11 != 0) {
      (**(code **)(local_2d8 + 0x18))(&local_2d8);
      nn::prepo::Struct::Add((char *)(lVar19 + 8),local_2d0);
    }
    lVar11 = param_1[2];
    puVar29 = PTR_DAT_04bb2020 + 0x10;
    local_2d0 = "LandRuby";
    uVar8 = 2;
    if (*(byte *)(lVar18 + 0x18) < 4) {
      uVar8 = (uint)*(byte *)(lVar18 + 0x18);
    }
    local_330 = (undefined *)CONCAT44(local_330._4_4_,uVar8);
    local_2d8 = puVar29;
    lVar19 = nn::prepo::Struct::GetBuffer();
    if (lVar19 != 0) {
      (**(code **)(local_2d8 + 0x18))(&local_2d8);
      nn::prepo::Struct::Add((char *)(lVar11 + 8),(long)local_2d0);
    }
    lVar19 = param_1[2];
    local_2d0 = "LocalPid";
    local_2d8 = puVar29;
    lVar11 = nn::prepo::Struct::GetBuffer();
    if (lVar11 != 0) {
      (**(code **)(local_2d8 + 0x18))(&local_2d8);
      nn::prepo::Struct::Add((char *)(lVar19 + 8),(long)local_2d0);
    }
    local_2c8 = CONCAT35(local_2c8._5_3_,0xb);
    local_2c0 = 0xffffffff;
    uStack_2b8 = 0xffffffff00000000;
    local_2d0 = (char *)&local_1f8;
    lVar11 = *(long *)(lVar28 + 0x17b98) + *(long *)(lVar28 + 0x17b90);
    local_2b0 = 0xffffffff;
    local_298 = 0x40;
    puStack_2a0 = local_294;
    local_255 = 0;
    local_294[0] = 0;
    puVar29 = PTR_DAT_04bb2bc0 + 0x10;
    local_240 = 0x40;
    local_1fd = 0;
    local_23c[0] = 0;
    puStack_248 = local_23c;
    local_2d8 = PTR_DAT_04bb5128 + 0x10;
    uStack_1e8 = 0;
    local_1f8 = 0;
    uStack_1f0 = 0;
    local_1ea = 0;
    puVar2 = auStack_1e2;
    if (auStack_1e2 <= (undefined1 *)((long)&local_1f8 + 2U)) {
      puVar2 = (undefined1 *)((long)&local_1f8 + 2U);
    }
    local_2a8 = puVar29;
    local_250 = puVar29;
    memset(local_2d0,0,(ulong)(puVar2 + (-0xe1 - (long)&local_2d8)) & 0xfffffffffffffffc | 2);
    local_78 = (Any64BitId *)(lVar11 + 0x20);
    local_80 = (undefined *)CONCAT44(local_80._4_4_,10);
    FUN_0082b014(&local_2d8);
    local_318 = 0;
    uStack_310 = 0;
    local_320 = 0;
    local_308 = 1;
    local_304 = 0;
    local_330 = PTR_DAT_04bc0cd8 + 0x10;
    local_328 = 0;
    FUN_02906b00(&local_330,&local_2d8,&local_80);
    iVar6 = *(int *)(lVar11 + 0x34);
    puVar12 = (undefined4 *)(**(code **)(local_2d8 + 0x40))(&local_2d8);
    uVar27 = 1;
    if (iVar6 == 1) {
      uVar27 = 2;
    }
    *puVar12 = uVar27;
    local_328 = (long)&local_320 + 4;
    local_2dd = 0;
    local_320 = CONCAT35(local_320._5_3_,0x40);
    local_330 = puVar29;
    FUN_006f4bf4(&local_2d8,&local_330,0);
    puVar29 = PTR_DAT_04bb2020;
    lVar19 = param_1[2];
    local_80 = PTR_DAT_04bb2020 + 0x10;
    local_78 = (Any64BitId *)0x4092d25;
    (**(code **)(local_330 + 0x18))(&local_330);
    lVar11 = nn::prepo::Struct::GetBuffer();
    if (lVar11 != 0) {
      (**(code **)(local_80 + 0x18))(&local_80);
      nn::prepo::Struct::Add((char *)(lVar19 + 8),(char *)local_78);
    }
    if (lVar10 == 0) {
      lVar11 = 0;
    }
    else if ((*(long **)(lVar10 + 0x290) == (long *)0x0) ||
            (puVar17 = (undefined8 *)**(long **)(lVar10 + 0x290), puVar17 == (undefined8 *)0x0)) {
      lVar11 = *(long *)(*(long *)(lVar10 + 0x278) + *(long *)(lVar10 + 0x270));
    }
    else {
      uVar9 = (**(code **)*puVar17)();
      lVar11 = *(long *)(*(long *)(lVar10 + 0x278) + *(long *)(lVar10 + 0x270));
      if ((((uVar9 & 1) != 0) && (*(long *)(lVar10 + 0x290) != 0)) &&
         (puVar17 = *(undefined8 **)(*(long *)(lVar10 + 0x290) + 8), puVar17 != (undefined8 *)0x0))
      {
        (**(code **)*puVar17)();
      }
    }
    lVar19 = param_1[2];
    local_80 = puVar29 + 0x10;
    local_78 = (Any64BitId *)0x40f5a6a;
    lVar10 = nn::prepo::Struct::GetBuffer();
    if (lVar10 != 0) {
      local_70 = lVar11;
      (**(code **)(local_80 + 0x18))(&local_80);
      nn::prepo::Struct::Add((char *)(lVar19 + 8),local_78);
    }
    if (*(long *)(lVar28 + 0x194b8) == 0) {
      lVar10 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
    }
    else {
      lVar10 = lVar28 + 0x194b0;
    }
    if ((*(long **)(lVar10 + 0x24870) == (long *)0x0) ||
       (puVar17 = (undefined8 *)**(long **)(lVar10 + 0x24870), puVar17 == (undefined8 *)0x0)) {
      lVar11 = *(long *)(*(long *)(lVar10 + 0x24858) + *(long *)(lVar10 + 0x24850));
    }
    else {
      uVar9 = (**(code **)*puVar17)();
      lVar11 = *(long *)(*(long *)(lVar10 + 0x24858) + *(long *)(lVar10 + 0x24850));
      if ((((uVar9 & 1) != 0) && (*(long *)(lVar10 + 0x24870) != 0)) &&
         (puVar17 = *(undefined8 **)(*(long *)(lVar10 + 0x24870) + 8), puVar17 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar17)();
      }
    }
    lVar19 = param_1[2];
    local_78 = (Any64BitId *)0x40f59aa;
    local_80 = puVar29 + 0x10;
    lVar10 = nn::prepo::Struct::GetBuffer();
    if (lVar10 != 0) {
      local_70 = lVar11;
      (**(code **)(local_80 + 0x18))(&local_80);
      nn::prepo::Struct::Add((char *)(lVar19 + 8),local_78);
    }
    lVar10 = param_1[2];
    local_78 = (Any64BitId *)0x40fab9a;
    uVar8 = *(uint *)(lVar18 + 0x34);
    if (1 < uVar8) {
      uVar8 = 0;
    }
    local_80 = puVar29 + 0x10;
    lVar18 = nn::prepo::Struct::GetBuffer();
    if (lVar18 != 0) {
      local_70 = (long)(int)uVar8;
      (**(code **)(local_80 + 0x18))(&local_80);
      nn::prepo::Struct::Add((char *)(lVar10 + 8),local_78);
    }
    puVar24 = puVar29 + 0x10;
    local_78 = (Any64BitId *)0x40a0800;
    local_80 = puVar24;
    FUN_02602860(param_1,&local_80);
    lVar18 = param_1[2];
    local_78 = (Any64BitId *)0x4072f80;
    local_80 = puVar24;
    lVar10 = nn::prepo::Struct::GetBuffer();
    if (lVar10 != 0) {
      (**(code **)(local_80 + 0x18))(&local_80);
      nn::prepo::Struct::Add((char *)(lVar18 + 8),(long)local_78);
    }
    local_78 = (Any64BitId *)0x40a6000;
    local_80 = puVar24;
    FUN_02602860(param_1,&local_80);
    lVar18 = param_1[2];
    local_78 = (Any64BitId *)0x40a73e3;
    local_80 = puVar24;
    lVar10 = nn::prepo::Struct::GetBuffer();
    if (lVar10 != 0) {
      (**(code **)(local_80 + 0x18))(&local_80);
      nn::prepo::Struct::Add((char *)(lVar18 + 8),(long)local_78);
    }
    if ((((local_34c & 1) != 0) && (*(long *)(lVar28 + 0x17bb0) != 0)) &&
       (puVar17 = *(undefined8 **)(*(long *)(lVar28 + 0x17bb0) + 8), puVar17 != (undefined8 *)0x0))
    {
      (**(code **)*puVar17)();
    }
  }
  else {
    iVar6 = *(int *)((long)param_1 + 0x1c);
    if (iVar6 == -1) {
      if (*(char *)(param_1 + 4) == '\0') goto LAB_02600c3c;
      local_188 = (undefined *)((ulong)local_188 & 0xffffffff00000000);
      if ((*(ulong *)(*(long *)PTR_DAT_04bb2268 + 0xb8) & 1) != 0) {
        lVar28 = *(long *)PTR_DAT_04bb39b0;
        pbVar20 = PTR_DAT_04bb32e0;
        if (lVar28 == 0) {
LAB_02600038:
          if (*pbVar20 < 8) goto LAB_026000b0;
LAB_02600044:
          if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_026000a8:
            pbVar20 = PTR_DAT_04bb5038;
            goto LAB_026000b0;
          }
          lVar28 = **(long **)PTR_DAT_04bb27d0;
          bVar21 = *(byte *)(lVar28 + 0x473);
          pbVar20 = PTR_DAT_04bb5038;
          if ((long)(char)bVar21 != 0xffffffffffffffff) {
            puVar3 = (uint *)(lVar28 + 0x48) + ((long)(char)bVar21 & 0xffffffffU) * 0x20;
            if (7 < bVar21) {
              puVar3 = (uint *)(lVar28 + 0x48);
            }
            if ((*puVar3 & 8) != 0) {
              pbVar20 = (byte *)(lVar28 + 0x471);
            }
          }
          bVar21 = *pbVar20;
          bVar5 = 7 < bVar21;
          if (bVar5) {
            bVar21 = 0xff;
          }
          local_330 = (undefined *)CONCAT71(local_330._1_7_,bVar21);
          if (bVar5) goto LAB_026000a8;
        }
        else {
          if (*(int *)(lVar28 + 0x15c) != 0) {
            pbVar20 = (byte *)(lVar28 + 0x158);
          }
          if (7 < *pbVar20) {
            if ((*(int *)(lVar28 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
              pbVar20 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
              goto LAB_02600038;
            }
            goto LAB_02600044;
          }
LAB_026000b0:
          bVar21 = *pbVar20;
          if (7 < bVar21) {
            bVar21 = 0xff;
          }
          local_330 = (undefined *)CONCAT71(local_330._1_7_,bVar21);
        }
        lVar28 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_330,1);
        if (lVar28 != 0) goto LAB_026000e4;
      }
      uVar9 = FUN_026414a0();
      if (((uVar9 & 1) == 0) && (lVar28 = *(long *)PTR_DAT_04bb46b0, lVar28 != 0)) {
        puVar17 = *(undefined8 **)(lVar28 + 0x10);
        if ((*(byte *)(lVar28 + 0x453) & 1) == 0) {
          lVar28 = (**(code **)(*(long *)*puVar17 + 0x38))();
          if (lVar28 != 0) {
            lVar28 = lVar28 + 0x70;
            goto LAB_02600834;
          }
        }
        else if (((puVar17 != (undefined8 *)0x0) && ((long *)puVar17[0x26] != (long *)0x0)) &&
                (lVar28 = (**(code **)(*(long *)puVar17[0x26] + 0x38))(), lVar28 != 0)) {
LAB_02600834:
          plVar23 = (long *)(lVar28 + 0xe7120);
          if ((*(long **)(lVar28 + 0xe7140) == (long *)0x0) ||
             (puVar17 = (undefined8 *)**(long **)(lVar28 + 0xe7140), puVar17 == (undefined8 *)0x0))
          {
            uVar9 = 0;
          }
          else {
            uVar9 = (**(code **)*puVar17)();
            uVar9 = uVar9 & 0xffffffff;
          }
          plVar1 = (long *)(*(long *)(lVar28 + 0xe7128) + *plVar23);
          if (((*plVar1 == 0 && plVar1[1] == 0) ||
              (uVar13 = FUN_007b3cbc(&local_188,0), (uVar13 & 1) == 0)) ||
             (iVar6 = nn::account::GetUserId((Uid *)&local_2d8,(UserHandle *)&local_188), iVar6 != 0
             )) {
LAB_02600898:
            lVar18 = *(long *)(lVar28 + 0xe7128) + *plVar23;
            if ((*(long *)(lVar18 + 0x48) != 0 || *(long *)(lVar18 + 0x50) != 0) &&
               ((uVar13 = FUN_007b3cbc(&local_188,1), (uVar13 & 1) != 0 &&
                (iVar6 = nn::account::GetUserId((Uid *)&local_2d8,(UserHandle *)&local_188),
                iVar6 == 0)))) {
              lVar18 = *(long *)PTR_DAT_04bb4410;
              if (lVar18 == 0) {
                puVar24 = (undefined *)0x0;
                puVar17 = (undefined8 *)0x0;
              }
              else {
                puVar24 = *(undefined **)(lVar18 + 0x140);
                puVar17 = *(undefined8 **)(lVar18 + 0x148);
              }
              if ((local_2d8 == puVar24) && (local_2d0 == (char *)puVar17)) {
                iVar6 = 1;
                goto LAB_02600bfc;
              }
            }
            lVar18 = *(long *)(lVar28 + 0xe7128) + *plVar23;
            if (((*(long *)(lVar18 + 0x90) != 0 || *(long *)(lVar18 + 0x98) != 0) &&
                (uVar13 = FUN_007b3cbc(&local_188,2), (uVar13 & 1) != 0)) &&
               (iVar6 = nn::account::GetUserId((Uid *)&local_2d8,(UserHandle *)&local_188),
               iVar6 == 0)) {
              lVar18 = *(long *)PTR_DAT_04bb4410;
              if (lVar18 == 0) {
                puVar24 = (undefined *)0x0;
                puVar17 = (undefined8 *)0x0;
              }
              else {
                puVar24 = *(undefined **)(lVar18 + 0x140);
                puVar17 = *(undefined8 **)(lVar18 + 0x148);
              }
              if ((local_2d8 == puVar24) && (local_2d0 == (char *)puVar17)) {
                iVar6 = 2;
                goto LAB_02600bfc;
              }
            }
            lVar18 = *(long *)(lVar28 + 0xe7128) + *plVar23;
            if (((*(long *)(lVar18 + 0xd8) != 0 || *(long *)(lVar18 + 0xe0) != 0) &&
                (uVar13 = FUN_007b3cbc(&local_188,3), (uVar13 & 1) != 0)) &&
               (iVar6 = nn::account::GetUserId((Uid *)&local_2d8,(UserHandle *)&local_188),
               iVar6 == 0)) {
              lVar18 = *(long *)PTR_DAT_04bb4410;
              if (lVar18 == 0) {
                puVar24 = (undefined *)0x0;
                puVar17 = (undefined8 *)0x0;
              }
              else {
                puVar24 = *(undefined **)(lVar18 + 0x140);
                puVar17 = *(undefined8 **)(lVar18 + 0x148);
              }
              if ((local_2d8 == puVar24) && (local_2d0 == (char *)puVar17)) {
                iVar6 = 3;
                goto LAB_02600bfc;
              }
            }
            lVar18 = *(long *)(lVar28 + 0xe7128) + *plVar23;
            if (((*(long *)(lVar18 + 0x120) != 0 || *(long *)(lVar18 + 0x128) != 0) &&
                (uVar13 = FUN_007b3cbc(&local_188,4), (uVar13 & 1) != 0)) &&
               (iVar6 = nn::account::GetUserId((Uid *)&local_2d8,(UserHandle *)&local_188),
               iVar6 == 0)) {
              lVar18 = *(long *)PTR_DAT_04bb4410;
              if (lVar18 == 0) {
                puVar24 = (undefined *)0x0;
                puVar17 = (undefined8 *)0x0;
              }
              else {
                puVar24 = *(undefined **)(lVar18 + 0x140);
                puVar17 = *(undefined8 **)(lVar18 + 0x148);
              }
              if ((local_2d8 == puVar24) && (local_2d0 == (char *)puVar17)) {
                iVar6 = 4;
                goto LAB_02600bfc;
              }
            }
            lVar18 = *(long *)(lVar28 + 0xe7128) + *plVar23;
            if (((*(long *)(lVar18 + 0x168) != 0 || *(long *)(lVar18 + 0x170) != 0) &&
                (uVar13 = FUN_007b3cbc(&local_188,5), (uVar13 & 1) != 0)) &&
               (iVar6 = nn::account::GetUserId((Uid *)&local_2d8,(UserHandle *)&local_188),
               iVar6 == 0)) {
              lVar18 = *(long *)PTR_DAT_04bb4410;
              if (lVar18 == 0) {
                puVar24 = (undefined *)0x0;
                puVar17 = (undefined8 *)0x0;
              }
              else {
                puVar24 = *(undefined **)(lVar18 + 0x140);
                puVar17 = *(undefined8 **)(lVar18 + 0x148);
              }
              if ((local_2d8 == puVar24) && (local_2d0 == (char *)puVar17)) {
                iVar6 = 5;
                goto LAB_02600bfc;
              }
            }
            lVar18 = *(long *)(lVar28 + 0xe7128) + *plVar23;
            if (((*(long *)(lVar18 + 0x1b0) != 0 || *(long *)(lVar18 + 0x1b8) != 0) &&
                (uVar13 = FUN_007b3cbc(&local_188,6), (uVar13 & 1) != 0)) &&
               (iVar6 = nn::account::GetUserId((Uid *)&local_2d8,(UserHandle *)&local_188),
               iVar6 == 0)) {
              lVar18 = *(long *)PTR_DAT_04bb4410;
              if (lVar18 == 0) {
                puVar24 = (undefined *)0x0;
                puVar17 = (undefined8 *)0x0;
              }
              else {
                puVar24 = *(undefined **)(lVar18 + 0x140);
                puVar17 = *(undefined8 **)(lVar18 + 0x148);
              }
              if ((local_2d8 == puVar24) && (local_2d0 == (char *)puVar17)) {
                iVar6 = 6;
                goto LAB_02600bfc;
              }
            }
            lVar18 = *(long *)(lVar28 + 0xe7128) + *plVar23;
            if (((*(long *)(lVar18 + 0x1f8) != 0 || *(long *)(lVar18 + 0x200) != 0) &&
                (uVar13 = FUN_007b3cbc(&local_188,7), (uVar13 & 1) != 0)) &&
               (iVar6 = nn::account::GetUserId((Uid *)&local_2d8,(UserHandle *)&local_188),
               iVar6 == 0)) {
              lVar18 = *(long *)PTR_DAT_04bb4410;
              if (lVar18 == 0) {
                puVar24 = (undefined *)0x0;
                puVar17 = (undefined8 *)0x0;
              }
              else {
                puVar24 = *(undefined **)(lVar18 + 0x140);
                puVar17 = *(undefined8 **)(lVar18 + 0x148);
              }
              if ((local_2d8 == puVar24) && (local_2d0 == (char *)puVar17)) {
                iVar6 = 7;
                goto LAB_02600bfc;
              }
            }
            if ((((uVar9 & 1) != 0) && (*(long *)(lVar28 + 0xe7140) != 0)) &&
               (puVar17 = *(undefined8 **)(*(long *)(lVar28 + 0xe7140) + 8),
               puVar17 != (undefined8 *)0x0)) {
              iVar6 = -1;
              goto LAB_02600c10;
            }
          }
          else {
            lVar18 = *(long *)PTR_DAT_04bb4410;
            if (lVar18 == 0) {
              puVar24 = (undefined *)0x0;
              puVar17 = (undefined8 *)0x0;
            }
            else {
              puVar24 = *(undefined **)(lVar18 + 0x140);
              puVar17 = *(undefined8 **)(lVar18 + 0x148);
            }
            if ((local_2d8 != puVar24) || (local_2d0 != (char *)puVar17)) goto LAB_02600898;
            iVar6 = 0;
LAB_02600bfc:
            if ((((uVar9 & 1) != 0) && (*(long *)(lVar28 + 0xe7140) != 0)) &&
               (puVar17 = *(undefined8 **)(*(long *)(lVar28 + 0xe7140) + 8),
               puVar17 != (undefined8 *)0x0)) {
LAB_02600c10:
              (**(code **)*puVar17)();
              if (iVar6 == -1) goto LAB_02600c3c;
            }
            lVar28 = *(long *)PTR_DAT_04bb46b0;
            if (lVar28 != 0) goto LAB_025fffa0;
          }
        }
      }
    }
    else {
      lVar28 = *(long *)PTR_DAT_04bb46b0;
      if (lVar28 == 0) goto LAB_02600c3c;
LAB_025fffa0:
      lVar28 = FUN_026eec4c(lVar28,iVar6);
      if (lVar28 != 0) goto LAB_026000e4;
    }
LAB_02600c3c:
    if (*(int *)((long)param_1 + 0x24) == 0) {
      *(undefined4 *)((long)param_1 + 0x24) = 5;
    }
  }
  lVar28 = *(long *)PTR_DAT_04bb32e8;
  FUN_0071b954(&local_188,"%04d-%02d-%02d %02d:%02d:%02d",(long)*(short *)(lVar28 + 0x4060),
               (long)*(char *)(lVar28 + 0x4062),(long)*(char *)(lVar28 + 0x4063),
               (long)*(char *)(lVar28 + 0x4064),(long)*(char *)(lVar28 + 0x4065),
               (long)*(char *)(lVar28 + 0x4066));
  local_2d8 = puVar29 + 0x10;
  local_2d0 = "gc_recorded_at";
  lVar10 = param_1[2];
  (**(code **)(local_188 + 0x18))(&local_188);
  lVar28 = nn::prepo::Struct::GetBuffer();
  if (lVar28 != 0) {
    (**(code **)(local_2d8 + 0x18))(&local_2d8);
    nn::prepo::Struct::Add((char *)(lVar10 + 8),local_2d0);
  }
  puVar24 = PTR_DAT_04bb48c8;
  puVar17 = *(undefined8 **)PTR_DAT_04bb48c8;
  if (*(char *)(puVar17 + 1) == '\0') {
    uVar14 = nn::oe::GetProgramTotalActiveTime();
    *puVar17 = uVar14;
    *(undefined1 *)(puVar17 + 1) = 1;
  }
  lVar10 = param_1[2];
  lVar28 = nn::prepo::Struct::GetBuffer();
  if (lVar28 != 0) {
    nn::prepo::Struct::Add((char *)(lVar10 + 8),0x40bc111);
  }
  bVar21 = *(byte *)(param_1 + 3);
  if (bVar21 < 8) {
    lVar28 = *(long *)PTR_DAT_04bb39b0;
    pbVar20 = PTR_DAT_04bb32e0;
    if (lVar28 == 0) {
LAB_02600f08:
      if (*pbVar20 < 8) goto LAB_02600f74;
LAB_02600f14:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_02600f6c:
        pbVar20 = PTR_DAT_04bb5038;
        goto LAB_02600f74;
      }
      lVar28 = **(long **)PTR_DAT_04bb27d0;
      bVar22 = *(byte *)(lVar28 + 0x473);
      pbVar20 = PTR_DAT_04bb5038;
      if ((long)(char)bVar22 != 0xffffffffffffffff) {
        puVar3 = (uint *)(lVar28 + 0x48) + ((long)(char)bVar22 & 0xffffffffU) * 0x20;
        if (7 < bVar22) {
          puVar3 = (uint *)(lVar28 + 0x48);
        }
        if ((*puVar3 & 8) != 0) {
          pbVar20 = (byte *)(lVar28 + 0x471);
        }
      }
      bVar22 = *pbVar20;
      if (7 < bVar22) goto LAB_02600f6c;
    }
    else {
      if (*(int *)(lVar28 + 0x15c) != 0) {
        pbVar20 = (byte *)(lVar28 + 0x158);
      }
      if (7 < *pbVar20) {
        if ((*(int *)(lVar28 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar20 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_02600f08;
        }
        goto LAB_02600f14;
      }
LAB_02600f74:
      bVar22 = *pbVar20;
      if (7 < bVar22) {
        bVar22 = 0xff;
      }
    }
    if (7 < bVar22) {
      bVar22 = 0xff;
    }
    if (bVar21 == bVar22) {
LAB_02600f98:
      puVar26 = *(undefined8 **)puVar24;
      if (*(char *)(puVar26 + 1) == '\0') {
        uVar14 = nn::oe::GetProgramTotalActiveTime();
        *puVar26 = uVar14;
        *(undefined1 *)(puVar26 + 1) = 1;
      }
    }
    else {
LAB_02600fb0:
      local_2d8 = (undefined *)CONCAT71(local_2d8._1_7_,bVar21);
      lVar28 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_2d8,1);
      if (lVar28 != 0) goto LAB_02600fd0;
    }
  }
  else {
    uVar8 = *(uint *)((long)param_1 + 0x1c);
    if (uVar8 != 0xffffffff) {
      FUN_02507c6c(&local_2d8,1,1,0,0);
      puVar4 = PTR_DAT_04bb5038;
      uVar30 = (uint)(byte)local_2d8._0_1_;
      local_1e0 = (undefined *)CONCAT44(local_2d8._4_4_,(undefined4)local_1e0);
      UVar15 = local_2d8._0_1_;
      if (7 < (byte)local_2d8._0_1_) {
        UVar15 = (Uid)0xff;
      }
      local_1e0 = (undefined *)CONCAT71(local_1e0._1_7_,UVar15);
      local_1d8 = (undefined1 *)CONCAT62(local_1d8._2_6_,local_2d0._0_2_);
      if ((byte)local_2d8._0_1_ < 8) {
        do {
          local_330 = (undefined *)CONCAT71(local_330._1_7_,(char)uVar30);
          FUN_02582a24(&local_330);
          uVar7 = FUN_02582d8c(&local_330,1);
          uVar16 = 0xffffffff;
          if (uVar7 < 8) {
            lVar28 = *(long *)PTR_DAT_04bb4fb8 + (ulong)uVar7 * 0x13f0;
            if (*(char *)(lVar28 + 0x13d4) == '\0') {
              uVar16 = 0xffffffff;
            }
            else {
              uVar16 = 0xffffffff;
              if (*(int *)(lVar28 + 0x13d0) == 0) {
                uVar16 = (uint)*(byte *)(lVar28 + 0x13d5);
              }
            }
          }
          if (uVar16 == uVar8) {
            lVar28 = *(long *)PTR_DAT_04bb39b0;
            pbVar20 = PTR_DAT_04bb32e0;
            if (lVar28 == 0) {
LAB_02601254:
              if (*pbVar20 < 8) goto LAB_026012c0;
LAB_02601260:
              if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_026012b8:
                pbVar20 = PTR_DAT_04bb5038;
                goto LAB_026012c0;
              }
              lVar28 = **(long **)PTR_DAT_04bb27d0;
              bVar21 = *(byte *)(lVar28 + 0x473);
              pbVar20 = PTR_DAT_04bb5038;
              if ((long)(char)bVar21 != 0xffffffffffffffff) {
                puVar3 = (uint *)(lVar28 + 0x48) + ((long)(char)bVar21 & 0xffffffffU) * 0x20;
                if (7 < bVar21) {
                  puVar3 = (uint *)(lVar28 + 0x48);
                }
                if ((*puVar3 & 8) != 0) {
                  pbVar20 = (byte *)(lVar28 + 0x471);
                }
              }
              bVar22 = *pbVar20;
              if (7 < bVar22) goto LAB_026012b8;
            }
            else {
              if (*(int *)(lVar28 + 0x15c) != 0) {
                pbVar20 = (byte *)(lVar28 + 0x158);
              }
              if (7 < *pbVar20) {
                if ((*(int *)(lVar28 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
                  pbVar20 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
                  goto LAB_02601254;
                }
                goto LAB_02601260;
              }
LAB_026012c0:
              bVar22 = *pbVar20;
              if (7 < bVar22) {
                bVar22 = 0xff;
              }
            }
            bVar21 = *(byte *)(param_1 + 3);
            bVar25 = bVar21;
            if (7 < bVar21) {
              bVar25 = 0xff;
            }
            if (7 < bVar22) {
              bVar22 = 0xff;
            }
            if (bVar25 == bVar22) goto LAB_02600f98;
            goto LAB_02600ecc;
          }
          uVar9 = (ulong)uVar30;
          do {
            if (uVar9 == 7) goto LAB_02600ec4;
            uVar9 = uVar9 + 1;
            uVar13 = FUN_02507924(&local_1e0,puVar4 + uVar9);
          } while ((uVar13 & 1) == 0);
          bVar21 = puVar4[uVar9];
          uVar30 = (uint)bVar21;
          if (7 < uVar30) break;
          local_1e0 = (undefined *)CONCAT71(local_1e0._1_7_,bVar21);
        } while( true );
      }
LAB_02600ec4:
      bVar21 = *(byte *)(param_1 + 3);
LAB_02600ecc:
      if (bVar21 < 8) goto LAB_02600fb0;
      if (((*(int *)((long)param_1 + 0x1c) == -1) || (*(long *)PTR_DAT_04bb46b0 == 0)) ||
         (lVar28 = FUN_026eec4c(), lVar28 == 0)) goto LAB_02601088;
LAB_02600fd0:
      lVar10 = lVar28 + 0x194b0;
      if (*(long *)(lVar28 + 0x194b8) == 0) {
        lVar10 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
      }
      if (((*(long **)(lVar10 + 0x2a6f0) != (long *)0x0) &&
          (puVar26 = (undefined8 *)**(long **)(lVar10 + 0x2a6f0), puVar26 != (undefined8 *)0x0)) &&
         ((uVar9 = (**(code **)*puVar26)(), (uVar9 & 1) != 0 &&
          ((*(long *)(lVar10 + 0x2a6f0) != 0 &&
           (puVar26 = *(undefined8 **)(*(long *)(lVar10 + 0x2a6f0) + 8),
           puVar26 != (undefined8 *)0x0)))))) {
        (**(code **)*puVar26)();
      }
    }
  }
LAB_02601088:
  lVar10 = param_1[2];
  lVar28 = nn::prepo::Struct::GetBuffer();
  if (lVar28 != 0) {
    nn::prepo::Struct::Add((char *)(lVar10 + 8),0x4068a0b);
  }
  if (*(byte *)(param_1 + 3) < 8) {
    lVar28 = param_1[2];
    local_2d8 = (undefined *)CONCAT71(local_2d8._1_7_,*(byte *)(param_1 + 3));
    FUN_02582a24(&local_2d8);
    uVar8 = FUN_02582d8c(&local_2d8,1);
    if (((uVar8 < 8) &&
        (lVar10 = *(long *)PTR_DAT_04bb4fb8 + (ulong)uVar8 * 0x13f0,
        *(char *)(lVar10 + 0x13d4) != '\0')) && (*(int *)(lVar10 + 0x13d0) == 0)) {
      uVar8 = (uint)*(byte *)(lVar10 + 0x13d5);
    }
    else {
      uVar8 = 0xffffffff;
    }
  }
  else {
    uVar8 = *(uint *)((long)param_1 + 0x1c);
    lVar28 = param_1[2];
    if (uVar8 == 0xffffffff) {
      lVar10 = nn::prepo::Struct::GetBuffer();
      goto joined_r0x026011c8;
    }
  }
  FUN_00812dc0(puVar17,uVar8);
  lVar10 = nn::prepo::Struct::GetBuffer();
joined_r0x026011c8:
  if (lVar10 != 0) {
    nn::prepo::Struct::Add((char *)(lVar28 + 8),0x4092d30);
  }
  lVar10 = param_1[2];
  lVar28 = nn::prepo::Struct::GetBuffer();
  if (lVar28 != 0) {
    nn::prepo::Struct::Add((char *)(lVar10 + 8),true);
  }
  if (param_1[1] != 0) {
    local_2d8 = puVar29 + 0x10;
    local_2d0 = "AppCmn";
    FUN_02605cc0(param_1[1],&local_2d8,param_1[2]);
  }
  return;
}

