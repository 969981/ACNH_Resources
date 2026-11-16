
void FUN_026012f4(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  uint *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  undefined4 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  Uid UVar14;
  uint uVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  byte *pbVar19;
  long lVar20;
  ulong uVar21;
  byte bVar22;
  byte bVar23;
  undefined *puVar24;
  long *plVar25;
  byte bVar26;
  undefined8 *puVar27;
  undefined4 uVar28;
  undefined *puVar29;
  uint uVar30;
  uint uStack_34c;
  undefined *puStack_330;
  long lStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined1 uStack_308;
  undefined4 uStack_304;
  undefined1 uStack_2dd;
  undefined8 uStack_2d8;
  char *pcStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined *puStack_2a8;
  undefined1 *puStack_2a0;
  undefined4 uStack_298;
  undefined1 auStack_294 [63];
  undefined1 uStack_255;
  undefined *puStack_250;
  undefined1 *puStack_248;
  undefined4 uStack_240;
  undefined1 auStack_23c [63];
  undefined1 uStack_1fd;
  undefined8 uStack_1f8;
  undefined6 uStack_1f0;
  undefined2 uStack_1ea;
  undefined6 uStack_1e8;
  undefined1 auStack_1e2 [2];
  undefined8 uStack_1e0;
  undefined1 *puStack_1d8;
  undefined4 uStack_1d0;
  undefined1 auStack_1cc [63];
  undefined1 uStack_18d;
  undefined8 uStack_188;
  char *pcStack_180;
  undefined4 uStack_178;
  undefined1 uStack_174;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  undefined4 uStack_148;
  undefined1 auStack_144 [63];
  undefined1 uStack_105;
  undefined *puStack_100;
  undefined1 *puStack_f8;
  undefined4 uStack_f0;
  undefined1 auStack_ec [63];
  undefined1 uStack_ad;
  undefined8 uStack_a8;
  undefined6 uStack_a0;
  undefined2 uStack_9a;
  undefined6 uStack_98;
  undefined1 auStack_92 [2];
  uint uStack_90;
  uint uStack_88;
  uint uStack_84;
  undefined *puStack_80;
  Any64BitId *pAStack_78;
  long lStack_70;
  
  param_1[2] = 0;
  *param_1 = &PTR_LAB_04a86ce8;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 3) = 0xff;
  uVar28 = *param_3;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = uVar28;
  puVar29 = PTR_DAT_04bb2268;
  lVar13 = *(long *)PTR_DAT_04bb2268;
  if ((lVar13 == 0) || (*(char *)(lVar13 + 0xb1) != '\0')) {
    return;
  }
  lVar13 = FUN_0260d454(lVar13,param_2,0xffffffff,8,0x10);
  param_1[1] = lVar13;
  if (lVar13 == 0) {
    return;
  }
  lVar20 = *(long *)puVar29;
  if ((lVar20 != 0) && (*(char *)(lVar20 + 0xb1) == '\0')) {
    lVar13 = *(long *)(lVar13 + 8);
    if (lVar13 == 0) {
      lVar20 = 0;
    }
    else {
      lVar20 = FUN_03f2a10c(0x400,**(undefined8 **)PTR_DAT_04bc3578,1);
      if ((lVar20 != 0) &&
         (uVar21 = (ulong)*(uint *)(lVar13 + 0x20), 0 < (int)*(uint *)(lVar13 + 0x20))) {
        plVar25 = *(long **)(lVar13 + 0x28);
        do {
          if (*plVar25 == 0) {
            *plVar25 = lVar20;
            goto LAB_026013f4;
          }
          plVar25 = plVar25 + 1;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
      }
      lVar20 = 0;
      *(undefined1 *)(*(long *)puVar29 + 0xb1) = 1;
    }
LAB_026013f4:
    param_1[2] = lVar20;
  }
  puVar29 = PTR_DAT_04bb46b0;
  uStack_188 = (undefined *)((ulong)uStack_188._4_4_ << 0x20);
  lVar13 = *(long *)PTR_DAT_04bb46b0;
  if (lVar13 == 0) {
    lVar13 = 0;
LAB_025ffca4:
    lVar20 = 0;
    lVar17 = param_1[2];
    puVar29 = PTR_DAT_04bb2020;
  }
  else {
    puVar16 = *(undefined8 **)(lVar13 + 0x10);
    if ((*(byte *)(lVar13 + 0x453) & 1) == 0) {
      lVar20 = (**(code **)(*(long *)*puVar16 + 0x38))();
      lVar13 = 0;
      if (lVar20 != 0) {
        lVar13 = lVar20 + 0x70;
      }
      lVar20 = *(long *)puVar29;
    }
    else if ((puVar16 == (undefined8 *)0x0) || ((long *)puVar16[0x26] == (long *)0x0)) {
      lVar13 = 0;
      lVar20 = *(long *)PTR_DAT_04bb46b0;
    }
    else {
      lVar13 = (**(code **)(*(long *)puVar16[0x26] + 0x38))();
      lVar20 = *(long *)puVar29;
    }
    if (lVar20 == 0) goto LAB_025ffca4;
    lVar17 = (**(code **)(*(long *)**(undefined8 **)(lVar20 + 0x10) + 0x38))();
    lVar20 = 0;
    if (lVar17 != 0) {
      lVar20 = lVar17 + 0x276cb0;
    }
    lVar17 = param_1[2];
    puVar29 = PTR_DAT_04bb2020;
  }
  if (lVar17 == 0) {
    PTR_DAT_04bb2020 = puVar29;
    return;
  }
  PTR_DAT_04bb2020 = puVar29;
  if (lVar20 != 0) {
    uStack_188 = puVar29 + 0x10;
    pcStack_180 = "VillageDaysCount";
    FUN_0273ea30(&uStack_188);
    lVar17 = param_1[2];
  }
  uStack_188 = puVar29 + 0x10;
  pcStack_180 = "VillageDaysCount";
  lVar9 = nn::prepo::Struct::GetBuffer();
  if (lVar9 != 0) {
    (**(code **)(uStack_188 + 0x18))(&uStack_188);
    nn::prepo::Struct::Add((char *)(lVar17 + 8),(long)pcStack_180);
  }
  if (*(long **)(lVar13 + 0x1c2868) == (long *)0x0) {
    uVar21 = 0;
  }
  else {
    puVar16 = (undefined8 *)**(long **)(lVar13 + 0x1c2868);
    uVar21 = 0;
    if (puVar16 != (undefined8 *)0x0) {
      uVar21 = (**(code **)*puVar16)();
    }
  }
  uStack_84 = *(uint *)(*(long *)(lVar13 + 0x1c2850) + *(long *)(lVar13 + 0x1c2848));
  if (3 < uStack_84) {
    uStack_84 = 0;
  }
  if ((((uVar21 & 1) != 0) && (*(long *)(lVar13 + 0x1c2868) != 0)) &&
     (puVar16 = *(undefined8 **)(*(long *)(lVar13 + 0x1c2868) + 8), puVar16 != (undefined8 *)0x0)) {
    (**(code **)*puVar16)();
  }
  lVar9 = param_1[2];
  pcStack_180 = "GameRegion";
  uStack_188 = puVar29 + 0x10;
  lVar17 = nn::prepo::Struct::GetBuffer();
  if (lVar17 != 0) {
    (**(code **)(uStack_188 + 0x18))(&uStack_188);
    nn::prepo::Struct::Add((char *)(lVar9 + 8),(long)pcStack_180);
  }
  lVar9 = param_1[2];
  pcStack_180 = "Language";
  uStack_188 = puVar29 + 0x10;
  lVar17 = nn::prepo::Struct::GetBuffer();
  if (lVar17 != 0) {
    (**(code **)(uStack_188 + 0x18))(&uStack_188);
    nn::prepo::Struct::Add((char *)(lVar9 + 8),pcStack_180);
  }
  if (*(long **)(lVar13 + 0xe7178) == (long *)0x0) {
    uVar21 = 0;
  }
  else {
    puVar16 = (undefined8 *)**(long **)(lVar13 + 0xe7178);
    uVar21 = 0;
    if (puVar16 != (undefined8 *)0x0) {
      uVar21 = (**(code **)*puVar16)();
    }
  }
  uStack_88 = *(uint *)(*(long *)(lVar13 + 0xe7160) + *(long *)(lVar13 + 0xe7158) + 0x14);
  if (1 < uStack_88) {
    uStack_88 = 0;
  }
  if ((((uVar21 & 1) != 0) && (*(long *)(lVar13 + 0xe7178) != 0)) &&
     (puVar16 = *(undefined8 **)(*(long *)(lVar13 + 0xe7178) + 8), puVar16 != (undefined8 *)0x0)) {
    (**(code **)*puVar16)();
  }
  lVar17 = param_1[2];
  uStack_188 = puVar29 + 0x10;
  pcStack_180 = "WeatherArea";
  lVar13 = nn::prepo::Struct::GetBuffer();
  if (lVar13 != 0) {
    (**(code **)(uStack_188 + 0x18))(&uStack_188);
    nn::prepo::Struct::Add((char *)(lVar17 + 8),(long)pcStack_180);
  }
  if (*(byte *)(param_1 + 3) < 8) {
    uStack_1e0 = (undefined *)CONCAT71(uStack_1e0._1_7_,*(byte *)(param_1 + 3));
    lVar13 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&uStack_1e0,1);
    if (lVar13 == 0) goto LAB_02600c3c;
LAB_026000e4:
    if ((*(long **)(lVar13 + 0x17bb0) == (long *)0x0) ||
       (puVar16 = (undefined8 *)**(long **)(lVar13 + 0x17bb0), puVar16 == (undefined8 *)0x0)) {
      uStack_34c = 0;
    }
    else {
      uStack_34c = (**(code **)*puVar16)();
    }
    lVar17 = *(long *)(lVar13 + 0x17b98) + *(long *)(lVar13 + 0x17b90);
    lVar18 = param_1[2];
    pcStack_180 = "LocalVid";
    uStack_188 = puVar29 + 0x10;
    lVar9 = nn::prepo::Struct::GetBuffer();
    if (lVar9 != 0) {
      (**(code **)(uStack_188 + 0x18))(&uStack_188);
      nn::prepo::Struct::Add((char *)(lVar18 + 8),(long)pcStack_180);
    }
    uStack_174 = 0;
    uStack_178 = 0xb;
    uStack_170 = 0xffffffff;
    uStack_168 = 0xffffffff00000000;
    puStack_150 = auStack_144;
    pcStack_180 = (char *)&uStack_a8;
    uStack_160 = 0xffffffff;
    uStack_148 = 0x40;
    uStack_105 = 0;
    auStack_144[0] = 0;
    puVar24 = PTR_DAT_04bb2bc0 + 0x10;
    uStack_f0 = 0x40;
    uStack_ad = 0;
    auStack_ec[0] = 0;
    puStack_f8 = auStack_ec;
    uStack_98 = 0;
    uStack_188 = PTR_DAT_04bb5128 + 0x10;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_9a = 0;
    puVar2 = auStack_92;
    if (auStack_92 <= (undefined1 *)((long)&uStack_a8 + 2U)) {
      puVar2 = (undefined1 *)((long)&uStack_a8 + 2U);
    }
    puStack_158 = puVar24;
    puStack_100 = puVar24;
    memset(pcStack_180,0,(ulong)(puVar2 + (-0xe1 - (long)&uStack_188)) & 0xfffffffffffffffc | 2);
    puStack_1d8 = (undefined1 *)(lVar17 + 4);
    uStack_90 = 2;
    uStack_1e0 = (undefined *)CONCAT44(uStack_1e0._4_4_,10);
    FUN_0082b014(&uStack_188);
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2c8 = 0;
    uStack_2b0 = CONCAT31(uStack_2b0._1_3_,1);
    uStack_2ac = 0;
    uStack_2d8 = PTR_DAT_04bc0cd8 + 0x10;
    pcStack_2d0 = (char *)0x0;
    FUN_02906b00(&uStack_2d8,&uStack_188,&uStack_1e0);
    puStack_1d8 = auStack_1cc;
    uStack_1d0 = 0x40;
    uStack_18d = 0;
    auStack_1cc[0] = 0;
    uStack_90 = 2;
    if (*(byte *)(lVar17 + 0x18) < 4) {
      uStack_90 = (uint)*(byte *)(lVar17 + 0x18);
    }
    uStack_1e0 = puVar24;
    FUN_006f4bf4(&uStack_188,&uStack_1e0,0);
    lVar18 = param_1[2];
    pcStack_2d0 = "LandName";
    uStack_2d8 = puVar29 + 0x10;
    (**(code **)(uStack_1e0 + 0x18))(&uStack_1e0);
    lVar9 = nn::prepo::Struct::GetBuffer();
    if (lVar9 != 0) {
      (**(code **)(uStack_2d8 + 0x18))(&uStack_2d8);
      nn::prepo::Struct::Add((char *)(lVar18 + 8),pcStack_2d0);
    }
    lVar9 = param_1[2];
    puVar29 = PTR_DAT_04bb2020 + 0x10;
    pcStack_2d0 = "LandRuby";
    uVar8 = 2;
    if (*(byte *)(lVar17 + 0x18) < 4) {
      uVar8 = (uint)*(byte *)(lVar17 + 0x18);
    }
    puStack_330 = (undefined *)CONCAT44(puStack_330._4_4_,uVar8);
    uStack_2d8 = puVar29;
    lVar18 = nn::prepo::Struct::GetBuffer();
    if (lVar18 != 0) {
      (**(code **)(uStack_2d8 + 0x18))(&uStack_2d8);
      nn::prepo::Struct::Add((char *)(lVar9 + 8),(long)pcStack_2d0);
    }
    lVar18 = param_1[2];
    pcStack_2d0 = "LocalPid";
    uStack_2d8 = puVar29;
    lVar9 = nn::prepo::Struct::GetBuffer();
    if (lVar9 != 0) {
      (**(code **)(uStack_2d8 + 0x18))(&uStack_2d8);
      nn::prepo::Struct::Add((char *)(lVar18 + 8),(long)pcStack_2d0);
    }
    uStack_2c8 = CONCAT35(uStack_2c8._5_3_,0xb);
    uStack_2c0 = 0xffffffff;
    uStack_2b8 = 0xffffffff00000000;
    pcStack_2d0 = (char *)&uStack_1f8;
    lVar9 = *(long *)(lVar13 + 0x17b98) + *(long *)(lVar13 + 0x17b90);
    uStack_2b0 = 0xffffffff;
    uStack_298 = 0x40;
    puStack_2a0 = auStack_294;
    uStack_255 = 0;
    auStack_294[0] = 0;
    puVar29 = PTR_DAT_04bb2bc0 + 0x10;
    uStack_240 = 0x40;
    uStack_1fd = 0;
    auStack_23c[0] = 0;
    puStack_248 = auStack_23c;
    uStack_2d8 = PTR_DAT_04bb5128 + 0x10;
    uStack_1e8 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uStack_1ea = 0;
    puVar2 = auStack_1e2;
    if (auStack_1e2 <= (undefined1 *)((long)&uStack_1f8 + 2U)) {
      puVar2 = (undefined1 *)((long)&uStack_1f8 + 2U);
    }
    puStack_2a8 = puVar29;
    puStack_250 = puVar29;
    memset(pcStack_2d0,0,(ulong)(puVar2 + (-0xe1 - (long)&uStack_2d8)) & 0xfffffffffffffffc | 2);
    pAStack_78 = (Any64BitId *)(lVar9 + 0x20);
    puStack_80 = (undefined *)CONCAT44(puStack_80._4_4_,10);
    FUN_0082b014(&uStack_2d8);
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_320 = 0;
    uStack_308 = 1;
    uStack_304 = 0;
    puStack_330 = PTR_DAT_04bc0cd8 + 0x10;
    lStack_328 = 0;
    FUN_02906b00(&puStack_330,&uStack_2d8,&puStack_80);
    iVar6 = *(int *)(lVar9 + 0x34);
    puVar10 = (undefined4 *)(**(code **)(uStack_2d8 + 0x40))(&uStack_2d8);
    uVar28 = 1;
    if (iVar6 == 1) {
      uVar28 = 2;
    }
    *puVar10 = uVar28;
    lStack_328 = (long)&uStack_320 + 4;
    uStack_2dd = 0;
    uStack_320 = CONCAT35(uStack_320._5_3_,0x40);
    puStack_330 = puVar29;
    FUN_006f4bf4(&uStack_2d8,&puStack_330,0);
    puVar29 = PTR_DAT_04bb2020;
    lVar18 = param_1[2];
    puStack_80 = PTR_DAT_04bb2020 + 0x10;
    pAStack_78 = (Any64BitId *)0x4092d25;
    (**(code **)(puStack_330 + 0x18))(&puStack_330);
    lVar9 = nn::prepo::Struct::GetBuffer();
    if (lVar9 != 0) {
      (**(code **)(puStack_80 + 0x18))(&puStack_80);
      nn::prepo::Struct::Add((char *)(lVar18 + 8),(char *)pAStack_78);
    }
    if (lVar20 == 0) {
      lVar9 = 0;
    }
    else if ((*(long **)(lVar20 + 0x290) == (long *)0x0) ||
            (puVar16 = (undefined8 *)**(long **)(lVar20 + 0x290), puVar16 == (undefined8 *)0x0)) {
      lVar9 = *(long *)(*(long *)(lVar20 + 0x278) + *(long *)(lVar20 + 0x270));
    }
    else {
      uVar21 = (**(code **)*puVar16)();
      lVar9 = *(long *)(*(long *)(lVar20 + 0x278) + *(long *)(lVar20 + 0x270));
      if ((((uVar21 & 1) != 0) && (*(long *)(lVar20 + 0x290) != 0)) &&
         (puVar16 = *(undefined8 **)(*(long *)(lVar20 + 0x290) + 8), puVar16 != (undefined8 *)0x0))
      {
        (**(code **)*puVar16)();
      }
    }
    lVar18 = param_1[2];
    puStack_80 = puVar29 + 0x10;
    pAStack_78 = (Any64BitId *)0x40f5a6a;
    lVar20 = nn::prepo::Struct::GetBuffer();
    if (lVar20 != 0) {
      lStack_70 = lVar9;
      (**(code **)(puStack_80 + 0x18))(&puStack_80);
      nn::prepo::Struct::Add((char *)(lVar18 + 8),pAStack_78);
    }
    if (*(long *)(lVar13 + 0x194b8) == 0) {
      lVar20 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
    }
    else {
      lVar20 = lVar13 + 0x194b0;
    }
    if ((*(long **)(lVar20 + 0x24870) == (long *)0x0) ||
       (puVar16 = (undefined8 *)**(long **)(lVar20 + 0x24870), puVar16 == (undefined8 *)0x0)) {
      lVar9 = *(long *)(*(long *)(lVar20 + 0x24858) + *(long *)(lVar20 + 0x24850));
    }
    else {
      uVar21 = (**(code **)*puVar16)();
      lVar9 = *(long *)(*(long *)(lVar20 + 0x24858) + *(long *)(lVar20 + 0x24850));
      if ((((uVar21 & 1) != 0) && (*(long *)(lVar20 + 0x24870) != 0)) &&
         (puVar16 = *(undefined8 **)(*(long *)(lVar20 + 0x24870) + 8), puVar16 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar16)();
      }
    }
    lVar18 = param_1[2];
    pAStack_78 = (Any64BitId *)0x40f59aa;
    puStack_80 = puVar29 + 0x10;
    lVar20 = nn::prepo::Struct::GetBuffer();
    if (lVar20 != 0) {
      lStack_70 = lVar9;
      (**(code **)(puStack_80 + 0x18))(&puStack_80);
      nn::prepo::Struct::Add((char *)(lVar18 + 8),pAStack_78);
    }
    lVar20 = param_1[2];
    pAStack_78 = (Any64BitId *)0x40fab9a;
    uVar8 = *(uint *)(lVar17 + 0x34);
    if (1 < uVar8) {
      uVar8 = 0;
    }
    puStack_80 = puVar29 + 0x10;
    lVar17 = nn::prepo::Struct::GetBuffer();
    if (lVar17 != 0) {
      lStack_70 = (long)(int)uVar8;
      (**(code **)(puStack_80 + 0x18))(&puStack_80);
      nn::prepo::Struct::Add((char *)(lVar20 + 8),pAStack_78);
    }
    puVar24 = puVar29 + 0x10;
    pAStack_78 = (Any64BitId *)0x40a0800;
    puStack_80 = puVar24;
    FUN_02602860(param_1,&puStack_80);
    lVar17 = param_1[2];
    pAStack_78 = (Any64BitId *)0x4072f80;
    puStack_80 = puVar24;
    lVar20 = nn::prepo::Struct::GetBuffer();
    if (lVar20 != 0) {
      (**(code **)(puStack_80 + 0x18))(&puStack_80);
      nn::prepo::Struct::Add((char *)(lVar17 + 8),(long)pAStack_78);
    }
    pAStack_78 = (Any64BitId *)0x40a6000;
    puStack_80 = puVar24;
    FUN_02602860(param_1,&puStack_80);
    lVar17 = param_1[2];
    pAStack_78 = (Any64BitId *)0x40a73e3;
    puStack_80 = puVar24;
    lVar20 = nn::prepo::Struct::GetBuffer();
    if (lVar20 != 0) {
      (**(code **)(puStack_80 + 0x18))(&puStack_80);
      nn::prepo::Struct::Add((char *)(lVar17 + 8),(long)pAStack_78);
    }
    if ((((uStack_34c & 1) != 0) && (*(long *)(lVar13 + 0x17bb0) != 0)) &&
       (puVar16 = *(undefined8 **)(*(long *)(lVar13 + 0x17bb0) + 8), puVar16 != (undefined8 *)0x0))
    {
      (**(code **)*puVar16)();
    }
  }
  else {
    iVar6 = *(int *)((long)param_1 + 0x1c);
    if (iVar6 == -1) {
      if (*(char *)(param_1 + 4) == '\0') goto LAB_02600c3c;
      uStack_188 = (undefined *)((ulong)uStack_188 & 0xffffffff00000000);
      if ((*(ulong *)(*(long *)PTR_DAT_04bb2268 + 0xb8) & 1) != 0) {
        lVar13 = *(long *)PTR_DAT_04bb39b0;
        pbVar19 = PTR_DAT_04bb32e0;
        if (lVar13 == 0) {
LAB_02600038:
          if (*pbVar19 < 8) goto LAB_026000b0;
LAB_02600044:
          if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_026000a8:
            pbVar19 = PTR_DAT_04bb5038;
            goto LAB_026000b0;
          }
          lVar13 = **(long **)PTR_DAT_04bb27d0;
          bVar22 = *(byte *)(lVar13 + 0x473);
          pbVar19 = PTR_DAT_04bb5038;
          if ((long)(char)bVar22 != 0xffffffffffffffff) {
            puVar3 = (uint *)(lVar13 + 0x48) + ((long)(char)bVar22 & 0xffffffffU) * 0x20;
            if (7 < bVar22) {
              puVar3 = (uint *)(lVar13 + 0x48);
            }
            if ((*puVar3 & 8) != 0) {
              pbVar19 = (byte *)(lVar13 + 0x471);
            }
          }
          bVar22 = *pbVar19;
          bVar5 = 7 < bVar22;
          if (bVar5) {
            bVar22 = 0xff;
          }
          puStack_330 = (undefined *)CONCAT71(puStack_330._1_7_,bVar22);
          if (bVar5) goto LAB_026000a8;
        }
        else {
          if (*(int *)(lVar13 + 0x15c) != 0) {
            pbVar19 = (byte *)(lVar13 + 0x158);
          }
          if (7 < *pbVar19) {
            if ((*(int *)(lVar13 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
              pbVar19 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
              goto LAB_02600038;
            }
            goto LAB_02600044;
          }
LAB_026000b0:
          bVar22 = *pbVar19;
          if (7 < bVar22) {
            bVar22 = 0xff;
          }
          puStack_330 = (undefined *)CONCAT71(puStack_330._1_7_,bVar22);
        }
        lVar13 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&puStack_330,1);
        if (lVar13 != 0) goto LAB_026000e4;
      }
      uVar21 = FUN_026414a0();
      if (((uVar21 & 1) == 0) && (lVar13 = *(long *)PTR_DAT_04bb46b0, lVar13 != 0)) {
        puVar16 = *(undefined8 **)(lVar13 + 0x10);
        if ((*(byte *)(lVar13 + 0x453) & 1) == 0) {
          lVar13 = (**(code **)(*(long *)*puVar16 + 0x38))();
          if (lVar13 != 0) {
            lVar13 = lVar13 + 0x70;
            goto LAB_02600834;
          }
        }
        else if (((puVar16 != (undefined8 *)0x0) && ((long *)puVar16[0x26] != (long *)0x0)) &&
                (lVar13 = (**(code **)(*(long *)puVar16[0x26] + 0x38))(), lVar13 != 0)) {
LAB_02600834:
          plVar25 = (long *)(lVar13 + 0xe7120);
          if ((*(long **)(lVar13 + 0xe7140) == (long *)0x0) ||
             (puVar16 = (undefined8 *)**(long **)(lVar13 + 0xe7140), puVar16 == (undefined8 *)0x0))
          {
            uVar21 = 0;
          }
          else {
            uVar21 = (**(code **)*puVar16)();
            uVar21 = uVar21 & 0xffffffff;
          }
          plVar1 = (long *)(*(long *)(lVar13 + 0xe7128) + *plVar25);
          if (((*plVar1 == 0 && plVar1[1] == 0) ||
              (uVar11 = FUN_007b3cbc(&uStack_188,0), (uVar11 & 1) == 0)) ||
             (iVar6 = nn::account::GetUserId((Uid *)&uStack_2d8,(UserHandle *)&uStack_188),
             iVar6 != 0)) {
LAB_02600898:
            lVar17 = *(long *)(lVar13 + 0xe7128) + *plVar25;
            if ((*(long *)(lVar17 + 0x48) != 0 || *(long *)(lVar17 + 0x50) != 0) &&
               ((uVar11 = FUN_007b3cbc(&uStack_188,1), (uVar11 & 1) != 0 &&
                (iVar6 = nn::account::GetUserId((Uid *)&uStack_2d8,(UserHandle *)&uStack_188),
                iVar6 == 0)))) {
              lVar17 = *(long *)PTR_DAT_04bb4410;
              if (lVar17 == 0) {
                puVar24 = (undefined *)0x0;
                puVar16 = (undefined8 *)0x0;
              }
              else {
                puVar24 = *(undefined **)(lVar17 + 0x140);
                puVar16 = *(undefined8 **)(lVar17 + 0x148);
              }
              if ((uStack_2d8 == puVar24) && (pcStack_2d0 == (char *)puVar16)) {
                iVar6 = 1;
                goto LAB_02600bfc;
              }
            }
            lVar17 = *(long *)(lVar13 + 0xe7128) + *plVar25;
            if (((*(long *)(lVar17 + 0x90) != 0 || *(long *)(lVar17 + 0x98) != 0) &&
                (uVar11 = FUN_007b3cbc(&uStack_188,2), (uVar11 & 1) != 0)) &&
               (iVar6 = nn::account::GetUserId((Uid *)&uStack_2d8,(UserHandle *)&uStack_188),
               iVar6 == 0)) {
              lVar17 = *(long *)PTR_DAT_04bb4410;
              if (lVar17 == 0) {
                puVar24 = (undefined *)0x0;
                puVar16 = (undefined8 *)0x0;
              }
              else {
                puVar24 = *(undefined **)(lVar17 + 0x140);
                puVar16 = *(undefined8 **)(lVar17 + 0x148);
              }
              if ((uStack_2d8 == puVar24) && (pcStack_2d0 == (char *)puVar16)) {
                iVar6 = 2;
                goto LAB_02600bfc;
              }
            }
            lVar17 = *(long *)(lVar13 + 0xe7128) + *plVar25;
            if (((*(long *)(lVar17 + 0xd8) != 0 || *(long *)(lVar17 + 0xe0) != 0) &&
                (uVar11 = FUN_007b3cbc(&uStack_188,3), (uVar11 & 1) != 0)) &&
               (iVar6 = nn::account::GetUserId((Uid *)&uStack_2d8,(UserHandle *)&uStack_188),
               iVar6 == 0)) {
              lVar17 = *(long *)PTR_DAT_04bb4410;
              if (lVar17 == 0) {
                puVar24 = (undefined *)0x0;
                puVar16 = (undefined8 *)0x0;
              }
              else {
                puVar24 = *(undefined **)(lVar17 + 0x140);
                puVar16 = *(undefined8 **)(lVar17 + 0x148);
              }
              if ((uStack_2d8 == puVar24) && (pcStack_2d0 == (char *)puVar16)) {
                iVar6 = 3;
                goto LAB_02600bfc;
              }
            }
            lVar17 = *(long *)(lVar13 + 0xe7128) + *plVar25;
            if (((*(long *)(lVar17 + 0x120) != 0 || *(long *)(lVar17 + 0x128) != 0) &&
                (uVar11 = FUN_007b3cbc(&uStack_188,4), (uVar11 & 1) != 0)) &&
               (iVar6 = nn::account::GetUserId((Uid *)&uStack_2d8,(UserHandle *)&uStack_188),
               iVar6 == 0)) {
              lVar17 = *(long *)PTR_DAT_04bb4410;
              if (lVar17 == 0) {
                puVar24 = (undefined *)0x0;
                puVar16 = (undefined8 *)0x0;
              }
              else {
                puVar24 = *(undefined **)(lVar17 + 0x140);
                puVar16 = *(undefined8 **)(lVar17 + 0x148);
              }
              if ((uStack_2d8 == puVar24) && (pcStack_2d0 == (char *)puVar16)) {
                iVar6 = 4;
                goto LAB_02600bfc;
              }
            }
            lVar17 = *(long *)(lVar13 + 0xe7128) + *plVar25;
            if (((*(long *)(lVar17 + 0x168) != 0 || *(long *)(lVar17 + 0x170) != 0) &&
                (uVar11 = FUN_007b3cbc(&uStack_188,5), (uVar11 & 1) != 0)) &&
               (iVar6 = nn::account::GetUserId((Uid *)&uStack_2d8,(UserHandle *)&uStack_188),
               iVar6 == 0)) {
              lVar17 = *(long *)PTR_DAT_04bb4410;
              if (lVar17 == 0) {
                puVar24 = (undefined *)0x0;
                puVar16 = (undefined8 *)0x0;
              }
              else {
                puVar24 = *(undefined **)(lVar17 + 0x140);
                puVar16 = *(undefined8 **)(lVar17 + 0x148);
              }
              if ((uStack_2d8 == puVar24) && (pcStack_2d0 == (char *)puVar16)) {
                iVar6 = 5;
                goto LAB_02600bfc;
              }
            }
            lVar17 = *(long *)(lVar13 + 0xe7128) + *plVar25;
            if (((*(long *)(lVar17 + 0x1b0) != 0 || *(long *)(lVar17 + 0x1b8) != 0) &&
                (uVar11 = FUN_007b3cbc(&uStack_188,6), (uVar11 & 1) != 0)) &&
               (iVar6 = nn::account::GetUserId((Uid *)&uStack_2d8,(UserHandle *)&uStack_188),
               iVar6 == 0)) {
              lVar17 = *(long *)PTR_DAT_04bb4410;
              if (lVar17 == 0) {
                puVar24 = (undefined *)0x0;
                puVar16 = (undefined8 *)0x0;
              }
              else {
                puVar24 = *(undefined **)(lVar17 + 0x140);
                puVar16 = *(undefined8 **)(lVar17 + 0x148);
              }
              if ((uStack_2d8 == puVar24) && (pcStack_2d0 == (char *)puVar16)) {
                iVar6 = 6;
                goto LAB_02600bfc;
              }
            }
            lVar17 = *(long *)(lVar13 + 0xe7128) + *plVar25;
            if (((*(long *)(lVar17 + 0x1f8) != 0 || *(long *)(lVar17 + 0x200) != 0) &&
                (uVar11 = FUN_007b3cbc(&uStack_188,7), (uVar11 & 1) != 0)) &&
               (iVar6 = nn::account::GetUserId((Uid *)&uStack_2d8,(UserHandle *)&uStack_188),
               iVar6 == 0)) {
              lVar17 = *(long *)PTR_DAT_04bb4410;
              if (lVar17 == 0) {
                puVar24 = (undefined *)0x0;
                puVar16 = (undefined8 *)0x0;
              }
              else {
                puVar24 = *(undefined **)(lVar17 + 0x140);
                puVar16 = *(undefined8 **)(lVar17 + 0x148);
              }
              if ((uStack_2d8 == puVar24) && (pcStack_2d0 == (char *)puVar16)) {
                iVar6 = 7;
                goto LAB_02600bfc;
              }
            }
            if ((((uVar21 & 1) != 0) && (*(long *)(lVar13 + 0xe7140) != 0)) &&
               (puVar16 = *(undefined8 **)(*(long *)(lVar13 + 0xe7140) + 8),
               puVar16 != (undefined8 *)0x0)) {
              iVar6 = -1;
              goto LAB_02600c10;
            }
          }
          else {
            lVar17 = *(long *)PTR_DAT_04bb4410;
            if (lVar17 == 0) {
              puVar24 = (undefined *)0x0;
              puVar16 = (undefined8 *)0x0;
            }
            else {
              puVar24 = *(undefined **)(lVar17 + 0x140);
              puVar16 = *(undefined8 **)(lVar17 + 0x148);
            }
            if ((uStack_2d8 != puVar24) || (pcStack_2d0 != (char *)puVar16)) goto LAB_02600898;
            iVar6 = 0;
LAB_02600bfc:
            if ((((uVar21 & 1) != 0) && (*(long *)(lVar13 + 0xe7140) != 0)) &&
               (puVar16 = *(undefined8 **)(*(long *)(lVar13 + 0xe7140) + 8),
               puVar16 != (undefined8 *)0x0)) {
LAB_02600c10:
              (**(code **)*puVar16)();
              if (iVar6 == -1) goto LAB_02600c3c;
            }
            lVar13 = *(long *)PTR_DAT_04bb46b0;
            if (lVar13 != 0) goto LAB_025fffa0;
          }
        }
      }
    }
    else {
      lVar13 = *(long *)PTR_DAT_04bb46b0;
      if (lVar13 == 0) goto LAB_02600c3c;
LAB_025fffa0:
      lVar13 = FUN_026eec4c(lVar13,iVar6);
      if (lVar13 != 0) goto LAB_026000e4;
    }
LAB_02600c3c:
    if (*(int *)((long)param_1 + 0x24) == 0) {
      *(undefined4 *)((long)param_1 + 0x24) = 5;
    }
  }
  lVar13 = *(long *)PTR_DAT_04bb32e8;
  FUN_0071b954(&uStack_188,"%04d-%02d-%02d %02d:%02d:%02d",(long)*(short *)(lVar13 + 0x4060),
               (long)*(char *)(lVar13 + 0x4062),(long)*(char *)(lVar13 + 0x4063),
               (long)*(char *)(lVar13 + 0x4064),(long)*(char *)(lVar13 + 0x4065),
               (long)*(char *)(lVar13 + 0x4066));
  uStack_2d8 = puVar29 + 0x10;
  pcStack_2d0 = "gc_recorded_at";
  lVar20 = param_1[2];
  (**(code **)(uStack_188 + 0x18))(&uStack_188);
  lVar13 = nn::prepo::Struct::GetBuffer();
  if (lVar13 != 0) {
    (**(code **)(uStack_2d8 + 0x18))(&uStack_2d8);
    nn::prepo::Struct::Add((char *)(lVar20 + 8),pcStack_2d0);
  }
  puVar24 = PTR_DAT_04bb48c8;
  puVar16 = *(undefined8 **)PTR_DAT_04bb48c8;
  if (*(char *)(puVar16 + 1) == '\0') {
    uVar12 = nn::oe::GetProgramTotalActiveTime();
    *puVar16 = uVar12;
    *(undefined1 *)(puVar16 + 1) = 1;
  }
  lVar20 = param_1[2];
  lVar13 = nn::prepo::Struct::GetBuffer();
  if (lVar13 != 0) {
    nn::prepo::Struct::Add((char *)(lVar20 + 8),0x40bc111);
  }
  bVar22 = *(byte *)(param_1 + 3);
  if (bVar22 < 8) {
    lVar13 = *(long *)PTR_DAT_04bb39b0;
    pbVar19 = PTR_DAT_04bb32e0;
    if (lVar13 == 0) {
LAB_02600f08:
      if (*pbVar19 < 8) goto LAB_02600f74;
LAB_02600f14:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_02600f6c:
        pbVar19 = PTR_DAT_04bb5038;
        goto LAB_02600f74;
      }
      lVar13 = **(long **)PTR_DAT_04bb27d0;
      bVar23 = *(byte *)(lVar13 + 0x473);
      pbVar19 = PTR_DAT_04bb5038;
      if ((long)(char)bVar23 != 0xffffffffffffffff) {
        puVar3 = (uint *)(lVar13 + 0x48) + ((long)(char)bVar23 & 0xffffffffU) * 0x20;
        if (7 < bVar23) {
          puVar3 = (uint *)(lVar13 + 0x48);
        }
        if ((*puVar3 & 8) != 0) {
          pbVar19 = (byte *)(lVar13 + 0x471);
        }
      }
      bVar23 = *pbVar19;
      if (7 < bVar23) goto LAB_02600f6c;
    }
    else {
      if (*(int *)(lVar13 + 0x15c) != 0) {
        pbVar19 = (byte *)(lVar13 + 0x158);
      }
      if (7 < *pbVar19) {
        if ((*(int *)(lVar13 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar19 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_02600f08;
        }
        goto LAB_02600f14;
      }
LAB_02600f74:
      bVar23 = *pbVar19;
      if (7 < bVar23) {
        bVar23 = 0xff;
      }
    }
    if (7 < bVar23) {
      bVar23 = 0xff;
    }
    if (bVar22 == bVar23) {
LAB_02600f98:
      puVar27 = *(undefined8 **)puVar24;
      if (*(char *)(puVar27 + 1) == '\0') {
        uVar12 = nn::oe::GetProgramTotalActiveTime();
        *puVar27 = uVar12;
        *(undefined1 *)(puVar27 + 1) = 1;
      }
    }
    else {
LAB_02600fb0:
      uStack_2d8 = (undefined *)CONCAT71(uStack_2d8._1_7_,bVar22);
      lVar13 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&uStack_2d8,1);
      if (lVar13 != 0) goto LAB_02600fd0;
    }
  }
  else {
    uVar8 = *(uint *)((long)param_1 + 0x1c);
    if (uVar8 != 0xffffffff) {
      FUN_02507c6c(&uStack_2d8,1,1,0,0);
      puVar4 = PTR_DAT_04bb5038;
      uVar30 = (uint)(byte)uStack_2d8._0_1_;
      uStack_1e0 = (undefined *)CONCAT44(uStack_2d8._4_4_,(undefined4)uStack_1e0);
      UVar14 = uStack_2d8._0_1_;
      if (7 < (byte)uStack_2d8._0_1_) {
        UVar14 = (Uid)0xff;
      }
      uStack_1e0 = (undefined *)CONCAT71(uStack_1e0._1_7_,UVar14);
      puStack_1d8 = (undefined1 *)CONCAT62(puStack_1d8._2_6_,pcStack_2d0._0_2_);
      if ((byte)uStack_2d8._0_1_ < 8) {
        do {
          puStack_330 = (undefined *)CONCAT71(puStack_330._1_7_,(char)uVar30);
          FUN_02582a24(&puStack_330);
          uVar7 = FUN_02582d8c(&puStack_330,1);
          uVar15 = 0xffffffff;
          if (uVar7 < 8) {
            lVar13 = *(long *)PTR_DAT_04bb4fb8 + (ulong)uVar7 * 0x13f0;
            if (*(char *)(lVar13 + 0x13d4) == '\0') {
              uVar15 = 0xffffffff;
            }
            else {
              uVar15 = 0xffffffff;
              if (*(int *)(lVar13 + 0x13d0) == 0) {
                uVar15 = (uint)*(byte *)(lVar13 + 0x13d5);
              }
            }
          }
          if (uVar15 == uVar8) {
            lVar13 = *(long *)PTR_DAT_04bb39b0;
            pbVar19 = PTR_DAT_04bb32e0;
            if (lVar13 == 0) {
LAB_02601254:
              if (*pbVar19 < 8) goto LAB_026012c0;
LAB_02601260:
              if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_026012b8:
                pbVar19 = PTR_DAT_04bb5038;
                goto LAB_026012c0;
              }
              lVar13 = **(long **)PTR_DAT_04bb27d0;
              bVar22 = *(byte *)(lVar13 + 0x473);
              pbVar19 = PTR_DAT_04bb5038;
              if ((long)(char)bVar22 != 0xffffffffffffffff) {
                puVar3 = (uint *)(lVar13 + 0x48) + ((long)(char)bVar22 & 0xffffffffU) * 0x20;
                if (7 < bVar22) {
                  puVar3 = (uint *)(lVar13 + 0x48);
                }
                if ((*puVar3 & 8) != 0) {
                  pbVar19 = (byte *)(lVar13 + 0x471);
                }
              }
              bVar23 = *pbVar19;
              if (7 < bVar23) goto LAB_026012b8;
            }
            else {
              if (*(int *)(lVar13 + 0x15c) != 0) {
                pbVar19 = (byte *)(lVar13 + 0x158);
              }
              if (7 < *pbVar19) {
                if ((*(int *)(lVar13 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
                  pbVar19 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
                  goto LAB_02601254;
                }
                goto LAB_02601260;
              }
LAB_026012c0:
              bVar23 = *pbVar19;
              if (7 < bVar23) {
                bVar23 = 0xff;
              }
            }
            bVar22 = *(byte *)(param_1 + 3);
            bVar26 = bVar22;
            if (7 < bVar22) {
              bVar26 = 0xff;
            }
            if (7 < bVar23) {
              bVar23 = 0xff;
            }
            if (bVar26 == bVar23) goto LAB_02600f98;
            goto LAB_02600ecc;
          }
          uVar21 = (ulong)uVar30;
          do {
            if (uVar21 == 7) goto LAB_02600ec4;
            uVar21 = uVar21 + 1;
            uVar11 = FUN_02507924(&uStack_1e0,puVar4 + uVar21);
          } while ((uVar11 & 1) == 0);
          bVar22 = puVar4[uVar21];
          uVar30 = (uint)bVar22;
          if (7 < uVar30) break;
          uStack_1e0 = (undefined *)CONCAT71(uStack_1e0._1_7_,bVar22);
        } while( true );
      }
LAB_02600ec4:
      bVar22 = *(byte *)(param_1 + 3);
LAB_02600ecc:
      if (bVar22 < 8) goto LAB_02600fb0;
      if (((*(int *)((long)param_1 + 0x1c) == -1) || (*(long *)PTR_DAT_04bb46b0 == 0)) ||
         (lVar13 = FUN_026eec4c(), lVar13 == 0)) goto LAB_02601088;
LAB_02600fd0:
      lVar20 = lVar13 + 0x194b0;
      if (*(long *)(lVar13 + 0x194b8) == 0) {
        lVar20 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
      }
      if (((*(long **)(lVar20 + 0x2a6f0) != (long *)0x0) &&
          (puVar27 = (undefined8 *)**(long **)(lVar20 + 0x2a6f0), puVar27 != (undefined8 *)0x0)) &&
         ((uVar21 = (**(code **)*puVar27)(), (uVar21 & 1) != 0 &&
          ((*(long *)(lVar20 + 0x2a6f0) != 0 &&
           (puVar27 = *(undefined8 **)(*(long *)(lVar20 + 0x2a6f0) + 8),
           puVar27 != (undefined8 *)0x0)))))) {
        (**(code **)*puVar27)();
      }
    }
  }
LAB_02601088:
  lVar20 = param_1[2];
  lVar13 = nn::prepo::Struct::GetBuffer();
  if (lVar13 != 0) {
    nn::prepo::Struct::Add((char *)(lVar20 + 8),0x4068a0b);
  }
  if (*(byte *)(param_1 + 3) < 8) {
    lVar13 = param_1[2];
    uStack_2d8 = (undefined *)CONCAT71(uStack_2d8._1_7_,*(byte *)(param_1 + 3));
    FUN_02582a24(&uStack_2d8);
    uVar8 = FUN_02582d8c(&uStack_2d8,1);
    if (((uVar8 < 8) &&
        (lVar20 = *(long *)PTR_DAT_04bb4fb8 + (ulong)uVar8 * 0x13f0,
        *(char *)(lVar20 + 0x13d4) != '\0')) && (*(int *)(lVar20 + 0x13d0) == 0)) {
      uVar8 = (uint)*(byte *)(lVar20 + 0x13d5);
    }
    else {
      uVar8 = 0xffffffff;
    }
  }
  else {
    uVar8 = *(uint *)((long)param_1 + 0x1c);
    lVar13 = param_1[2];
    if (uVar8 == 0xffffffff) {
      lVar20 = nn::prepo::Struct::GetBuffer();
      goto joined_r0x026011c8;
    }
  }
  FUN_00812dc0(puVar16,uVar8);
  lVar20 = nn::prepo::Struct::GetBuffer();
joined_r0x026011c8:
  if (lVar20 != 0) {
    nn::prepo::Struct::Add((char *)(lVar13 + 8),0x4092d30);
  }
  lVar20 = param_1[2];
  lVar13 = nn::prepo::Struct::GetBuffer();
  if (lVar13 != 0) {
    nn::prepo::Struct::Add((char *)(lVar20 + 8),true);
  }
  if (param_1[1] != 0) {
    uStack_2d8 = puVar29 + 0x10;
    pcStack_2d0 = "AppCmn";
    FUN_02605cc0(param_1[1],&uStack_2d8,param_1[2]);
  }
  return;
}

