
void FUN_033227f8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  char **ppcVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  char *pcVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  undefined *local_408;
  char *local_400 [6];
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined *local_3c0;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined *local_390;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined *local_360;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined *local_330;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined *local_300;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined *local_2d0;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined *local_2a0;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined *local_270;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined *local_240;
  uint local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined4 local_208;
  undefined **local_200;
  undefined2 local_1f8;
  undefined *local_1f0;
  undefined *local_1e8;
  undefined *local_1e0;
  char *local_1d8;
  undefined4 local_1d0;
  char local_1cc [62];
  undefined2 local_18e;
  undefined *local_188;
  char *local_180;
  undefined4 local_178;
  undefined1 local_174;
  undefined8 local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined *local_158;
  undefined1 *local_150;
  undefined4 local_148;
  undefined1 local_144 [63];
  undefined1 local_105;
  undefined *local_100;
  undefined1 *local_f8;
  undefined4 local_f0;
  undefined1 local_ec [63];
  undefined1 local_ad;
  char local_a8 [2];
  undefined1 auStack_a6 [14];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  FUN_03321ed0();
  puVar10 = PTR_LAB_04bc92c8;
  puVar9 = PTR_DAT_04bc9198;
  puVar8 = PTR_DAT_04bc8e68;
  puVar7 = PTR_DAT_04bc6338;
  puVar6 = PTR_DAT_04bb8610;
  puVar5 = PTR_PTR_04bb2238;
  puVar1 = (undefined *)0x0;
  if (param_1[0x69] != 0) {
    puVar1 = PTR_LAB_04bc92c8;
  }
  if (puVar1 != (undefined *)0x0) {
    puVar1 = PTR_DAT_04bc8e68 + 0x10;
    local_188 = *(undefined **)(*(long *)(param_1[0x69] + 0x20) + 0x18);
    local_400[0] = "T_00";
    local_408 = puVar1;
    local_68 = FUN_0328b6d0(&local_188,&local_408,0);
    plVar16 = *(long **)(*(long *)puVar7 + 0x88);
    plVar15 = *(long **)puVar9;
    if (plVar16 != (long *)0x0) {
      plVar15 = plVar16;
    }
    local_1d8 = "SwkbdCommon_Enter_LineBreak";
    local_1e8 = *(undefined **)(puVar5 + 8);
    local_1f0 = puVar1;
    local_1e0 = puVar1;
    (**(code **)(*plVar15 + 0x18))(&local_188,plVar15,&local_1e0,&local_1f0);
    local_408 = puVar6 + 0x10;
    local_400[0] = local_180;
    FUN_032d67f0(&local_68,&local_408);
  }
  if (param_1[0x5f] != 0) {
    puVar1 = puVar8 + 0x10;
    local_400[0] = "T_00";
    local_188 = *(undefined **)(*(long *)(param_1[0x60] + 0x20) + 0x18);
    local_408 = puVar1;
    local_68 = FUN_0328b6d0(&local_188,&local_408,0);
    plVar16 = *(long **)(*(long *)puVar7 + 0x88);
    plVar15 = *(long **)puVar9;
    if (plVar16 != (long *)0x0) {
      plVar15 = plVar16;
    }
    local_1d8 = "SwkbdASCII_ShowPass_Btn";
    local_1e8 = *(undefined **)(puVar5 + 8);
    local_1f0 = puVar1;
    local_1e0 = puVar1;
    (**(code **)(*plVar15 + 0x18))(&local_188,plVar15,&local_1e0,&local_1f0);
    local_408 = puVar6 + 0x10;
    local_400[0] = local_180;
    FUN_032d67f0(&local_68,&local_408);
  }
  puVar1 = (undefined *)0x0;
  if (param_1[0x6a] != 0) {
    puVar1 = puVar10;
  }
  if (puVar1 != (undefined *)0x0) {
    local_188 = *(undefined **)(*(long *)(param_1[0x6a] + 0x20) + 0x18);
    local_408 = puVar8 + 0x10;
    local_400[0] = "T_00";
    local_68 = FUN_0328b6d0(&local_188,&local_408,0);
    local_174 = 0;
    local_178 = 0x20;
    local_180 = local_a8;
    local_170 = 0xffffffff;
    local_168 = 0xffffffff00000000;
    local_150 = local_144;
    local_160 = 0xffffffff;
    local_148 = 0x40;
    local_105 = 0;
    local_144[0] = 0;
    local_158 = PTR_DAT_04bb2bc0 + 0x10;
    local_f8 = local_ec;
    local_f0 = 0x40;
    local_ad = 0;
    local_ec[0] = 0;
    local_188 = PTR_DAT_04bb4e10 + 0x10;
    local_70 = 0;
    local_78 = 0;
    local_80 = 0;
    local_88 = 0;
    local_90 = 0;
    local_98 = 0;
    puVar2 = &local_68;
    if (&local_68 <= auStack_a6) {
      puVar2 = (undefined8 *)auStack_a6;
    }
    auStack_a6._6_8_ = 0;
    _local_a8 = 0;
    local_100 = local_158;
    memset(local_180,0,(size_t)((long)puVar2 + (-0xe0 - (long)&local_188)));
    local_1d0 = 0x20;
    local_1d8 = local_1cc;
    local_18e = 0;
    local_1cc[0] = '\0';
    local_1cc[1] = '\0';
    local_1e0 = PTR_DAT_04bc0840 + 0x10;
    local_408 = PTR_DAT_04bb2020 + 0x10;
    local_400[0] = "ETC_Swkbd";
    local_1e8 = &DAT_040b541b;
    local_1f0 = local_408;
    FUN_006f50a0(&local_188,&local_408,&local_1f0,0);
    memset(local_400,0,0x1e0);
    puVar1 = PTR_DAT_04bb2d80;
    local_3d0 = 0;
    uStack_3c8 = 0;
    local_3a0 = 0;
    uStack_398 = 0;
    local_400[2] = PTR_DAT_04bb2d80 + 0x10;
    local_370 = 0;
    uStack_368 = 0;
    local_220 = 0xffffffff;
    local_208 = 0;
    local_340 = 0;
    uStack_338 = 0;
    local_310 = 0;
    uStack_308 = 0;
    local_2e0 = 0;
    uStack_2d8 = 0;
    local_2b0 = 0;
    uStack_2a8 = 0;
    local_280 = 0;
    uStack_278 = 0;
    local_250 = 0;
    uStack_248 = 0;
    local_218 = 0;
    uStack_210 = 0;
    local_408 = PTR_DAT_04bb2d78 + 0x10;
    pcVar12 = local_1d8;
    local_3c0 = local_400[2];
    local_390 = local_400[2];
    local_360 = local_400[2];
    local_330 = local_400[2];
    local_300 = local_400[2];
    local_2d0 = local_400[2];
    local_2a0 = local_400[2];
    local_270 = local_400[2];
    local_240 = local_400[2];
    local_200 = &local_1e0;
    pcVar12[0] = '\0';
    pcVar12[1] = '\0';
    local_1f8 = 0;
    (**(code **)(local_408 + 0x10))(&local_408);
    local_220 = 0xffffffff;
    local_208 = 0;
    local_218 = 0;
    uStack_210 = 0;
    pcVar12 = (char *)(**(code **)(local_188 + 0x18))(&local_188);
    lVar13 = (**(code **)(local_188 + 0x18))(&local_188);
    if (((lVar13 != 0) &&
        (uVar14 = (**(code **)(local_188 + 0x20))(&local_188), pcVar12 != (char *)0x0)) &&
       ((int)local_220 < 9)) {
      local_220 = local_220 + 1;
      uVar4 = (ulong)local_220;
      bVar11 = 9 < local_220;
      ppcVar3 = local_400 + uVar4 * 6;
      if (bVar11) {
        ppcVar3 = local_400;
      }
      *ppcVar3 = pcVar12;
      ppcVar3 = local_400 + uVar4 * 6 + 1;
      if (bVar11) {
        ppcVar3 = local_400 + 1;
      }
      *ppcVar3 = (char *)(lVar13 + (uVar14 & 0xffffffff) * 2);
      ppcVar3 = local_400 + uVar4 * 6 + 2;
      if (bVar11) {
        ppcVar3 = local_400 + 2;
      }
      *ppcVar3 = puVar1 + 0x10;
    }
    (**(code **)(local_408 + 0x18))(&local_408);
    FUN_006f1490(&local_408);
    FUN_032d67f0(&local_68,&local_1e0);
  }
  lVar13 = param_1[0x5f];
  if (lVar13 != 0) {
    if (**(char **)(puVar5 + 8) == '\0') {
      plVar15 = *(long **)(*(long *)(lVar13 + 0xf0) + 0x18);
    }
    else {
      local_408 = puVar8 + 0x10;
      local_400[0] = *(char **)(puVar5 + 8);
      plVar15 = (long *)FUN_032cb8e0(&local_188,&local_408,*(undefined8 *)(lVar13 + 0xf0));
    }
    local_408 = (undefined *)(**(code **)(*plVar15 + 0x60))(plVar15,"L_BtnShowNum",1);
    FUN_032d3550(&local_408,1);
  }
  if (param_1[0x2fa] != param_1[0x67]) {
    FUN_0331e4f8(param_1,*(undefined1 *)(param_1 + 0x2fb));
    uVar14 = (**(code **)*param_1)(param_1);
    if ((uVar14 & 1) == 0) {
      *(undefined1 *)((long)param_1 + 0x17e2) = 1;
    }
  }
  return;
}

