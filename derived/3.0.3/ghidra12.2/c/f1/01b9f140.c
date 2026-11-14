
void FUN_01b9f140(uint *param_1,undefined8 param_2,long *param_3,long param_4,long param_5)

{
  uint *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  byte bVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined1 **ppuVar10;
  uint uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  void *pvVar15;
  bool bVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  long *plVar20;
  void *pvVar21;
  long lVar22;
  ulong uVar23;
  uint uVar24;
  uint uVar25;
  byte *pbVar26;
  long lVar27;
  long lVar28;
  undefined8 uVar29;
  long *plVar30;
  uint *puVar31;
  undefined1 *__src;
  long *plVar32;
  undefined8 local_8c0;
  undefined8 local_8b8;
  undefined4 uStack_8b0;
  byte bStack_8ac;
  byte abStack_8ab [3];
  undefined1 *local_8a8 [2];
  int local_898;
  undefined1 local_894 [4];
  undefined *local_890;
  undefined1 *local_888;
  undefined4 local_880;
  undefined1 local_87c [39];
  undefined1 local_855;
  undefined1 local_83d;
  undefined *local_838;
  undefined1 *local_830;
  undefined4 local_828;
  undefined1 local_824 [63];
  undefined1 local_7e5;
  void *local_7e0;
  uint local_6d8;
  undefined8 local_6d0;
  undefined8 local_6c8;
  undefined4 local_6c0;
  undefined **local_6b8;
  undefined **local_6b0;
  undefined4 local_6a8;
  undefined2 local_6a4;
  char local_678;
  long local_670 [32];
  long local_570 [32];
  undefined *local_470;
  void *local_468;
  undefined4 local_460;
  undefined1 local_45c;
  undefined8 local_458;
  undefined8 local_450;
  undefined4 local_448;
  undefined *local_440;
  undefined1 *local_438;
  undefined4 local_430;
  undefined1 local_42c [63];
  undefined1 local_3ed;
  undefined *local_3e8;
  undefined1 *local_3e0;
  undefined4 local_3d8;
  undefined1 local_3d4 [63];
  undefined1 local_395;
  void *local_390;
  undefined *local_388;
  void *local_380;
  undefined4 local_378;
  undefined1 local_374;
  undefined8 local_370;
  undefined8 local_368;
  undefined4 local_360;
  undefined *local_358;
  undefined1 *local_350;
  undefined4 local_348;
  undefined1 local_344 [63];
  undefined1 local_305;
  undefined *local_300;
  undefined1 *local_2f8;
  undefined4 local_2f0;
  undefined1 local_2ec [63];
  undefined1 local_2ad;
  void *local_2a8;
  undefined *local_2a0;
  undefined6 uStack_298;
  undefined2 local_292;
  undefined6 uStack_290;
  undefined *local_288;
  undefined8 local_268;
  undefined8 local_260;
  undefined *local_258;
  long *local_248;
  long *local_240;
  long *local_238;
  undefined8 local_230;
  undefined *local_228;
  undefined8 local_208;
  undefined8 local_200;
  undefined *local_1f8;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined *local_1c8;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined *local_198;
  undefined8 local_178;
  undefined8 local_170;
  undefined *local_168;
  undefined8 local_148;
  undefined8 local_140;
  undefined *local_138;
  undefined8 local_118;
  undefined8 local_110;
  undefined *local_108;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined *local_d8;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined4 local_6c;
  
  puVar31 = param_1 + 0x13;
  *param_1 = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x12] = 0xffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  memset(puVar31,0,0x1000);
  if (0 < (int)param_1[0x418]) {
    lVar28 = 0;
    do {
      uVar24 = 0;
      if ((int)param_1[0x416] <= (int)((int)lVar28 + param_1[0x417])) {
        uVar24 = param_1[0x416];
      }
      (*(code *)**(undefined8 **)
                  (*(long *)(param_1 + 0x414) +
                  ((lVar28 - (int)uVar24) + (long)(int)param_1[0x417]) * 0xe0))();
      lVar28 = lVar28 + 1;
    } while ((int)lVar28 < (int)param_1[0x418]);
  }
  param_1[0x417] = 0;
  puVar5 = PTR_DAT_04bb2df8;
  param_1[0x418] = 0;
  if (0 < (int)param_1[0x5de]) {
    lVar28 = 0;
    puVar3 = PTR_DAT_04bb2df8 + 0x10;
    do {
      uVar24 = 0;
      if ((int)param_1[0x5dc] <= (int)((int)lVar28 + param_1[0x5dd])) {
        uVar24 = param_1[0x5dc];
      }
      lVar27 = lVar28 - (int)uVar24;
      lVar28 = lVar28 + 1;
      *(undefined **)(*(long *)(param_1 + 0x5da) + (lVar27 + (int)param_1[0x5dd]) * 0x168) = puVar3;
    } while ((int)lVar28 < (int)param_1[0x5de]);
  }
  uStack_8b0 = 0;
  bStack_8ac = 0;
  abStack_8ab[0] = 0;
  param_1[0x5dd] = 0;
  param_1[0x5de] = 0;
  local_8c0 = (undefined *)0x0;
  local_8b8._0_4_ = 0;
  local_8b8._4_2_ = 0;
  local_8b8._6_2_ = 0;
  local_8a8[0] = (undefined1 *)0x0;
  FUN_01b970f0(&local_8c0,param_2);
  FUN_01b9735c(&local_8c0,param_2,param_3);
  uVar25 = 0;
  uVar24 = uStack_8b0 >> 0x18;
  if ((int)local_8c0 != 5) {
    uVar24 = 0;
  }
  uVar11 = 0;
  if (uVar24 < 0x31) {
    uVar11 = uVar24;
  }
  param_1[0x10] = uVar11;
  switch((int)local_8c0) {
  case 1:
    pbVar26 = (byte *)&local_8b8;
    break;
  case 2:
    pbVar26 = (byte *)((long)&local_8b8 + 6);
    break;
  case 3:
    pbVar26 = (byte *)((long)&uStack_8b0 + 1);
    break;
  default:
    goto switchD_01b9f2dc_caseD_4;
  case 5:
    pbVar26 = &bStack_8ac;
    break;
  case 6:
    pbVar26 = abStack_8ab;
  }
  bVar7 = 0;
  if (*pbVar26 < 0xb) {
    bVar7 = *pbVar26;
  }
  uVar25 = (uint)(bVar7 == 10) << 1;
  if (bVar7 == 9) {
    uVar25 = 1;
  }
switchD_01b9f2dc_caseD_4:
  uVar29 = 7;
  param_1[0x11] = uVar25;
  puVar13 = PTR_DAT_04bb2e00;
  puVar3 = PTR_DAT_04bb2698;
  if ((uVar11 < 0x25) && ((1L << ((ulong)uVar11 & 0x3f) & 0x1ffe001fffU) != 0)) {
    uVar29 = 4;
    param_5 = param_4;
  }
  local_378 = 0;
  local_374 = 0;
  local_360 = 0xffffffff;
  local_370 = 0xffffffff;
  local_368 = 0xffffffff00000000;
  local_350 = local_344;
  local_348 = 0x40;
  plVar30 = *(long **)PTR_DAT_04bc08b8;
  local_305 = 0;
  local_344[0] = 0;
  local_358 = PTR_DAT_04bb2bc0 + 0x10;
  local_2f8 = local_2ec;
  local_2f0 = 0x40;
  local_2ad = 0;
  local_2ec[0] = 0;
  lVar28 = *(long *)PTR_DAT_04bb2698;
  local_388 = PTR_DAT_04bb2e00 + 0x10;
  local_380 = (void *)0x0;
  local_2a8 = (void *)0x0;
  local_300 = local_358;
  if (lVar28 == 0) {
    pvVar21 = malloc(0x1000);
    pvVar15 = local_380;
joined_r0x01b9f4ac:
    local_380 = pvVar21;
    if (local_380 != (void *)0x0) {
      local_378 = 0x800;
      local_2a8 = local_380;
      (**(code **)(local_388 + 0x38))(&local_388);
      pvVar15 = local_380;
    }
  }
  else {
    plVar20 = plVar30;
    if (plVar30 != (long *)0x0) {
LAB_01b9f43c:
      pvVar21 = (void *)(**(code **)(*plVar20 + 0x30))(plVar20,0x1000,8);
      pvVar15 = local_380;
      goto joined_r0x01b9f4ac;
    }
    lVar27 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar20 = (long *)(lVar28 + 8);
    if (lVar27 != 0) {
      plVar20 = (long *)(lVar27 + 0xa8);
    }
    plVar20 = (long *)*plVar20;
    pvVar15 = local_380;
    if (plVar20 != (long *)0x0) goto LAB_01b9f43c;
  }
  local_380 = pvVar15;
  lVar28 = *(long *)PTR_DAT_04bc08b0;
  if (lVar28 == 0) {
    lVar27 = 1;
  }
  else {
    lVar22 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar27 = *(long *)(lVar22 + 0xa8);
    *(long *)(lVar22 + 0xa8) = lVar28;
  }
  FUN_01bed9e0(&local_2a0,param_1 + 0xc);
  uStack_8b0 = 0;
  bStack_8ac = 0;
  local_8a8[0] = &DAT_ffffffff;
  local_8a8[1] = &DAT_ffffffff00000000;
  local_898 = -1;
  local_888 = local_87c;
  local_830 = local_824;
  local_880 = 0x40;
  local_83d = 0;
  local_87c[0] = 0;
  lVar28 = *(long *)puVar3;
  local_890 = PTR_DAT_04bb2bc0 + 0x10;
  local_828 = 0x40;
  local_7e5 = 0;
  local_824[0] = 0;
  local_7e0 = (void *)0x0;
  local_8c0 = puVar13 + 0x10;
  local_8b8._0_4_ = 0;
  local_8b8._4_2_ = 0;
  local_8b8._6_2_ = 0;
  local_838 = local_890;
  if (lVar28 == 0) {
    pvVar21 = malloc(0x1000);
    pvVar15 = local_7e0;
joined_r0x01b9f638:
    local_7e0 = pvVar21;
    if (local_7e0 != (void *)0x0) {
      local_8b8._0_4_ = (int)local_7e0;
      local_8b8._4_2_ = (undefined2)((ulong)local_7e0 >> 0x20);
      local_8b8._6_2_ = (undefined2)((ulong)local_7e0 >> 0x30);
      uStack_8b0 = 0x800;
      (**(code **)(local_8c0 + 0x38))(&local_8c0);
      pvVar15 = local_7e0;
    }
  }
  else {
    plVar20 = plVar30;
    if (plVar30 != (long *)0x0) {
LAB_01b9f560:
      pvVar21 = (void *)(**(code **)(*plVar20 + 0x30))(plVar20,0x1000,8);
      pvVar15 = local_7e0;
      goto joined_r0x01b9f638;
    }
    lVar22 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar20 = (long *)(lVar28 + 8);
    if (lVar22 != 0) {
      plVar20 = (long *)(lVar22 + 0xa8);
    }
    plVar20 = (long *)*plVar20;
    pvVar15 = local_7e0;
    if (plVar20 != (long *)0x0) goto LAB_01b9f560;
  }
  local_7e0 = pvVar15;
  FUN_006f50a0(&local_8c0,param_2,param_3,0);
  local_240[0x4e] = param_5;
  FUN_006f3d64(&local_2a0,&local_388,&local_8c0);
  local_8c0 = puVar13 + 0x10;
  if (local_7e0 != (void *)0x0) {
    local_8b8._0_4_ = 0;
    local_8b8._4_2_ = 0;
    local_8b8._6_2_ = 0;
    local_8a8[0] = &DAT_ffffffff;
    local_8a8[1] = &DAT_ffffffff00000000;
    uStack_8b0 = 0;
    bStack_8ac = 0;
    local_898 = -1;
    *local_888 = 0;
    *local_830 = 0;
    pvVar15 = local_7e0;
    if (local_7e0 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(local_7e0);
      }
      else {
        plVar20 = (long *)FUN_038cb610(*(long *)puVar3,local_7e0);
        if (plVar20 != (long *)0x0) {
          (**(code **)(*plVar20 + 0x38))(plVar20,pvVar15);
        }
      }
    }
  }
  local_2a0 = PTR_DAT_04bc0c00 + 0x10;
  if (local_238 != (long *)0x0) {
    (**(code **)(*local_238 + 8))();
  }
  if (local_240 != (long *)0x0) {
    (**(code **)(*local_240 + 8))();
  }
  if (local_248 != (long *)0x0) {
    (**(code **)(*local_248 + 8))();
  }
  FUN_003532f4(&local_2a0);
  if (lVar27 != 1) {
    lVar28 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    *(long *)(lVar28 + 0xa8) = lVar27;
  }
  local_460 = 0;
  local_45c = 0;
  local_458 = 0xffffffff;
  local_450 = 0xffffffff00000000;
  local_448 = 0xffffffff;
  local_438 = local_42c;
  local_3e0 = local_3d4;
  local_430 = 0x40;
  local_3ed = 0;
  local_42c[0] = 0;
  lVar28 = *(long *)puVar3;
  local_440 = PTR_DAT_04bb2bc0 + 0x10;
  local_470 = puVar13 + 0x10;
  local_3d8 = 0x40;
  local_395 = 0;
  local_3d4[0] = 0;
  local_468 = (void *)0x0;
  local_390 = (void *)0x0;
  local_3e8 = local_440;
  if (lVar28 == 0) {
    pvVar21 = malloc(0x1000);
    pvVar15 = local_468;
joined_r0x01b9fd1c:
    local_468 = pvVar21;
    if (local_468 != (void *)0x0) {
      local_460 = 0x800;
      local_390 = local_468;
      (**(code **)(local_470 + 0x38))(&local_470);
      pvVar15 = local_468;
    }
  }
  else {
    if (plVar30 != (long *)0x0) {
LAB_01b9f764:
      pvVar21 = (void *)(**(code **)(*plVar30 + 0x30))(plVar30,0x1000,8);
      pvVar15 = local_468;
      goto joined_r0x01b9fd1c;
    }
    lVar27 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar9 = (undefined8 *)(lVar28 + 8);
    if (lVar27 != 0) {
      puVar9 = (undefined8 *)(lVar27 + 0xa8);
    }
    plVar30 = (long *)*puVar9;
    pvVar15 = local_468;
    if (plVar30 != (long *)0x0) goto LAB_01b9f764;
  }
  local_468 = pvVar15;
  FUN_01ba1358(&local_8c0,uVar29);
  local_6b8 = &local_470;
  local_6a8 = 0;
  local_6b0 = &local_388;
  local_6a4 = 0;
  (**(code **)(local_670[0] + 0x38))(local_670);
  (**(code **)(local_570[0] + 0x38))(local_570);
  (**(code **)(local_8c0 + 0x10))(&local_8c0);
  local_6d0 = 0;
  local_6d8 = 0xffffffff;
  local_6c8 = 0;
  local_6c0 = 0;
  lVar28 = (**(code **)(local_388 + 0x18))(&local_388);
  lVar27 = (**(code **)(local_388 + 0x18))(&local_388);
  puVar3 = PTR_DAT_04bb2d80;
  if (((lVar27 != 0) && (uVar23 = (**(code **)(local_388 + 0x20))(&local_388), lVar28 != 0)) &&
     ((int)local_6d8 < 9)) {
    local_6d8 = local_6d8 + 1;
    uVar12 = (ulong)local_6d8;
    bVar16 = 9 < local_6d8;
    plVar30 = &local_8b8 + uVar12 * 6;
    if (bVar16) {
      plVar30 = &local_8b8;
    }
    *plVar30 = lVar28;
    pbVar26 = abStack_8ab + uVar12 * 0x30 + -5;
    if (bVar16) {
      pbVar26 = (byte *)&uStack_8b0;
    }
    *(ulong *)pbVar26 = lVar27 + (uVar23 & 0xffffffff) * 2;
    ppuVar10 = local_8a8 + uVar12 * 6;
    if (bVar16) {
      ppuVar10 = local_8a8;
    }
    *ppuVar10 = puVar3 + 0x10;
  }
  (**(code **)(local_8c0 + 0x18))(&local_8c0);
  FUN_01ba1624(&local_8c0,0);
  iVar17 = FUN_006f4a64(&local_470);
  uVar24 = param_1[0x418];
  param_1[0x418] = uVar24 + 1;
  iVar18 = param_1[0x417] + uVar24;
  uVar24 = 0;
  if ((int)param_1[0x416] <= iVar18) {
    uVar24 = param_1[0x416];
  }
  plVar30 = (long *)(*(long *)(param_1 + 0x414) + (long)(int)(iVar18 - uVar24) * 0xe0);
  *plVar30 = (long)(puVar5 + 0x10);
  plVar30[1] = (long)puVar31;
  *(uint *)(plVar30 + 2) = iVar17 + 1U;
  *(undefined1 *)((long)plVar30 + 0x14) = 0;
  *(undefined4 *)(plVar30 + 5) = 0xffffffff;
  plVar30[3] = 0xffffffff;
  plVar30[4] = -0x100000000;
  *(undefined4 *)(plVar30 + 8) = 0x40;
  *(undefined1 *)((long)plVar30 + 0x44) = 0;
  *(undefined1 *)((long)plVar30 + 0x9c) = 0;
  puVar13 = PTR_DAT_04bb2bc0;
  *(undefined1 *)((long)plVar30 + 0x83) = 0;
  *(undefined4 *)(plVar30 + 0x13) = 0x40;
  *(undefined1 *)((long)plVar30 + 0xdb) = 0;
  plVar30[6] = (long)(puVar13 + 0x10);
  plVar30[7] = (long)plVar30 + 0x44;
  plVar30[0x11] = (long)(puVar13 + 0x10);
  plVar30[0x12] = (long)plVar30 + 0x9c;
  memset(&uStack_298,0,0x1e0);
  puVar14 = PTR_DAT_04bb2e08;
  puVar13 = PTR_DAT_04bb2d40;
  local_288 = puVar3 + 0x10;
  local_268 = 0;
  local_260 = 0;
  local_238 = (long *)0x0;
  local_230 = 0;
  local_208 = 0;
  local_200 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_178 = 0;
  local_170 = 0;
  local_148 = 0;
  local_140 = 0;
  local_118 = 0;
  local_110 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_b8 = 0xffffffff;
  local_b0 = 0;
  local_a8 = 0;
  local_2a0 = PTR_DAT_04bb2d40 + 0x10;
  local_a0 = 0;
  local_98 = PTR_DAT_04bb2e08 + 0x10;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 1;
  local_6c = 0;
  local_258 = local_288;
  local_228 = local_288;
  local_1f8 = local_288;
  local_1c8 = local_288;
  local_198 = local_288;
  local_168 = local_288;
  local_138 = local_288;
  local_108 = local_288;
  local_d8 = local_288;
  FUN_006f1854(&local_2a0,plVar30,&local_470);
  (**(code **)(*plVar30 + 0x30))(plVar30,&local_470);
  if ((local_678 != '\0') && ((char)local_6a4 != '\0')) {
    puVar31 = (uint *)((long)puVar31 + (ulong)(iVar17 + 1U) * 2);
    puVar3 = puVar3 + 0x10;
    puVar4 = PTR_DAT_04bb2bc0 + 0x10;
    do {
      FUN_01ba1624(&local_8c0,0);
      iVar18 = FUN_006f4a64(&local_470);
      puVar1 = (uint *)((long)puVar31 + (ulong)(iVar18 + 1U) * 2);
      if (puVar1 < param_1 + 0x413) {
        uVar24 = param_1[0x418];
        uVar25 = param_1[0x416];
        if ((int)uVar24 < (int)uVar25) {
          param_1[0x418] = uVar24 + 1;
          uVar11 = 0;
          if ((int)uVar25 <= (int)(param_1[0x417] + uVar24)) {
            uVar11 = uVar25;
          }
          plVar30 = (long *)(*(long *)(param_1 + 0x414) +
                            (long)(int)((param_1[0x417] + uVar24) - uVar11) * 0xe0);
          *(uint *)(plVar30 + 2) = iVar18 + 1U;
          *(undefined1 *)((long)plVar30 + 0x14) = 0;
          *(undefined4 *)(plVar30 + 8) = 0x40;
          *(undefined1 *)((long)plVar30 + 0x83) = 0;
          *(undefined4 *)(plVar30 + 0x13) = 0x40;
          *(undefined1 *)((long)plVar30 + 0xdb) = 0;
          *plVar30 = (long)(puVar5 + 0x10);
          plVar30[1] = (long)puVar31;
          plVar30[3] = 0xffffffff;
          plVar30[4] = -0x100000000;
          *(undefined1 *)((long)plVar30 + 0x9c) = 0;
          *(undefined4 *)(plVar30 + 5) = 0xffffffff;
          plVar30[0x11] = (long)puVar4;
          plVar30[0x12] = (long)plVar30 + 0x9c;
          *(undefined1 *)((long)plVar30 + 0x44) = 0;
          plVar30[6] = (long)puVar4;
          plVar30[7] = (long)plVar30 + 0x44;
          memset(&uStack_298,0,0x1e0);
          local_b8 = 0xffffffff;
          local_a0 = 0;
          local_6c = 0;
          local_268 = 0;
          local_260 = 0;
          local_e8 = 0;
          local_e0 = 0;
          local_238 = (long *)0x0;
          local_230 = 0;
          local_b0 = 0;
          local_a8 = 0;
          local_90 = 0;
          local_88 = 0;
          local_80 = 0;
          local_78 = 0;
          local_208 = 0;
          local_200 = 0;
          local_1d8 = 0;
          local_1d0 = 0;
          local_1a8 = 0;
          local_1a0 = 0;
          local_178 = 0;
          local_170 = 0;
          local_148 = 0;
          local_140 = 0;
          local_118 = 0;
          local_110 = 0;
          local_70 = 1;
          local_2a0 = puVar13 + 0x10;
          local_288 = puVar3;
          local_258 = puVar3;
          local_228 = puVar3;
          local_1f8 = puVar3;
          local_1c8 = puVar3;
          local_198 = puVar3;
          local_168 = puVar3;
          local_138 = puVar3;
          local_108 = puVar3;
          local_d8 = puVar3;
          local_98 = puVar14 + 0x10;
          FUN_006f1854(&local_2a0,plVar30,&local_470);
          (**(code **)(*plVar30 + 0x30))(plVar30,&local_470);
          puVar31 = puVar1;
        }
      }
    } while ((local_678 != '\0') && ((char)local_6a4 != '\0'));
  }
  puVar3 = PTR_DAT_04bb2698;
  puVar5 = PTR_DAT_04bb2e00 + 0x10;
  local_470 = puVar5;
  if (local_390 != (void *)0x0) {
    local_468 = (void *)0x0;
    local_450 = 0xffffffff00000000;
    local_460 = 0;
    local_45c = 0;
    local_458 = 0xffffffff;
    local_448 = 0xffffffff;
    *local_438 = 0;
    *local_3e0 = 0;
    pvVar15 = local_390;
    if (local_390 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(local_390);
      }
      else {
        plVar30 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,local_390);
        if (plVar30 != (long *)0x0) {
          (**(code **)(*plVar30 + 0x38))(plVar30,pvVar15);
        }
      }
    }
  }
  local_388 = puVar5;
  if (local_2a8 != (void *)0x0) {
    local_380 = (void *)0x0;
    local_368 = 0xffffffff00000000;
    local_378 = 0;
    local_374 = 0;
    local_370 = 0xffffffff;
    local_360 = 0xffffffff;
    *local_350 = 0;
    *local_2f8 = 0;
    pvVar15 = local_2a8;
    if (local_2a8 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(local_2a8);
      }
      else {
        plVar30 = (long *)FUN_038cb610(*(long *)puVar3,local_2a8);
        if (plVar30 != (long *)0x0) {
          (**(code **)(*plVar30 + 0x38))(plVar30,pvVar15);
        }
      }
    }
  }
  uVar24 = param_1[0x10];
  uVar25 = uVar24 - 5;
  if ((uVar25 < 0x2c) && ((0xfe0fe0fe0ffU >> ((ulong)uVar25 & 0x3f) & 1) != 0)) {
    iVar18 = *(int *)(&DAT_04177cd8 + (long)(int)uVar25 * 4);
    puVar6 = PTR_DAT_04bb2bc0 + 0x10;
    puVar5 = PTR_DAT_04bb6b18 + 0x10;
    iVar17 = 0;
    do {
      local_898 = 0x40;
      local_8c0 = (undefined *)0xffffffff00000000;
      local_8b8._0_4_ = -1;
      local_8b8._4_2_ = 0;
      local_8b8._6_2_ = 0;
      local_855 = 0;
      local_894[0] = 0;
      uStack_8b0 = 0;
      local_8a8[0] = puVar6;
      local_8a8[1] = local_894;
      (**(code **)(*param_3 + 0x18))(param_3);
      __src = (undefined1 *)param_3[1];
      if (local_894 != __src) {
        (**(code **)(*param_3 + 0x18))(param_3);
        lVar28 = 0;
        do {
          if (*(char *)(param_3[1] + lVar28) == '\0') goto LAB_01b9febc;
          lVar27 = param_3[1] + lVar28;
          if (*(char *)(lVar27 + 1) == '\0') {
            lVar28 = lVar28 + 1;
            goto LAB_01b9febc;
          }
          if (*(char *)(lVar27 + 2) == '\0') {
            lVar28 = lVar28 + 2;
            goto LAB_01b9febc;
          }
          lVar28 = lVar28 + 3;
        } while (lVar28 != 0x80001);
        lVar28 = 0;
LAB_01b9febc:
        iVar2 = (int)lVar28;
        if (local_898 <= (int)lVar28) {
          iVar2 = local_898 + -1;
        }
        memcpy(local_894,__src,(long)iVar2);
        local_894[iVar2] = 0;
      }
      local_8c0._0_4_ = 4;
      FUN_01bd9620(&local_2a0,&local_8c0,param_3);
      uStack_8b0 = 0;
      iVar2 = iVar17 + 1;
      *local_8a8[1] = 0;
      local_8c0 = (undefined *)CONCAT44(local_8c0._4_4_,5);
      local_8b8._4_4_ = iVar2;
      if (local_8c0._4_4_ == -1) {
        *local_8a8[1] = 0;
      }
      else if ((int)local_8b8 + 1U < 2) {
        FUN_038d1270(local_8a8,"%04d_%c",local_8c0._4_4_,iVar17 + 0x61U & 0xff);
      }
      else {
        FUN_038d1270(local_8a8,"%04d_%02d_%c",local_8c0._4_4_,(int)local_8b8,iVar17 + 0x61U & 0xff);
      }
      uVar25 = param_1[0x5de];
      uVar11 = param_1[0x5dc];
      if ((int)uVar25 < (int)uVar11) {
        param_1[0x5de] = uVar25 + 1;
        uVar8 = 0;
        if ((int)uVar11 <= (int)(param_1[0x5dd] + uVar25)) {
          uVar8 = uVar11;
        }
        plVar32 = (long *)(*(long *)(param_1 + 0x5da) +
                          (long)(int)((param_1[0x5dd] + uVar25) - uVar8) * 0x168);
        memset(plVar32 + 2,0,0x158);
        *(undefined4 *)(plVar32 + 2) = 0x40;
        *(undefined4 *)(plVar32 + 3) = 0xffffffff;
        plVar20 = plVar32 + 0x1c;
        *plVar20 = 0;
        *(undefined8 *)((long)plVar32 + 0x24) = 0xffffffffffffffff;
        *(undefined4 *)(plVar32 + 8) = 0x40;
        puVar3 = PTR_DAT_04bb2bc0 + 0x10;
        *(undefined4 *)(plVar32 + 0x13) = 0x40;
        plVar32[0x1d] = 0;
        plVar32[0x1e] = 0;
        plVar32[0x2b] = 0;
        plVar32[0x1f] = 0;
        plVar32[0x20] = 0;
        plVar32[0x21] = 0;
        plVar32[0x22] = 0;
        plVar32[6] = (long)puVar3;
        plVar32[7] = (long)plVar32 + 0x44;
        plVar32[0x11] = (long)puVar3;
        plVar32[0x12] = (long)plVar32 + 0x9c;
        plVar32[0x23] = 0;
        plVar32[0x24] = 0;
        plVar32[0x25] = 0;
        plVar32[0x26] = 0;
        plVar32[0x27] = 0;
        plVar32[0x28] = 0;
        *plVar32 = (long)puVar5;
        plVar32[1] = (long)plVar20;
        plVar30 = plVar32 + 0x2c;
        if (plVar32 + 0x2c <= (long *)((long)plVar32 + 0xe2)) {
          plVar30 = (long *)((long)plVar32 + 0xe2);
        }
        plVar32[0x29] = 0;
        plVar32[0x2a] = 0;
        memset(plVar20,0,((long)plVar30 + (-0xe1 - (long)plVar32) & 0xfffffffffffffffeU) + 2);
        *(undefined4 *)(plVar32 + 0x2c) = 0;
        FUN_006f50a0(plVar32,param_2,local_8a8,0);
        local_2a0 = (undefined *)0x0;
        uStack_290 = 0;
        uStack_298 = 0;
        local_292 = 0;
        local_288 = (undefined *)0x0;
        FUN_01b970f0(&local_2a0,param_2);
        FUN_01b9735c(&local_2a0,param_2,local_8a8);
        uVar19 = FUN_01b97400(&local_2a0);
        *(undefined4 *)(plVar32 + 0x2c) = uVar19;
      }
      iVar17 = iVar2;
    } while (iVar2 != iVar18);
  }
  else {
    iVar18 = 0;
  }
  iVar17 = FUN_01b977b0(uVar24);
  uVar24 = param_1[0x5de];
  if ((iVar17 < 0) || ((int)uVar24 <= iVar17)) {
joined_r0x01ba01cc:
    if (uVar24 == 0) goto LAB_01ba01d0;
    if (iVar18 != 1) {
      uVar25 = 0;
      do {
        uVar11 = 0;
        if ((int)param_1[0x5dc] <= (int)(uVar25 + param_1[0x5dd])) {
          uVar11 = param_1[0x5dc];
        }
        lVar28 = *(long *)(param_1 + 0x5da) +
                 (long)(int)(uVar25 + (param_1[0x5dd] - uVar11)) * 0x168;
        if (*(int *)(lVar28 + 0x160) == 0) {
          *(undefined4 *)(lVar28 + 0x160) = 1;
        }
        uVar25 = uVar25 + 1;
      } while (uVar24 != uVar25);
      goto LAB_01ba01d0;
    }
  }
  else {
    uVar25 = 0;
    if ((int)param_1[0x5dc] <= (int)(param_1[0x5dd] + iVar17)) {
      uVar25 = param_1[0x5dc];
    }
    lVar28 = *(long *)(param_1 + 0x5da) + (long)(int)((param_1[0x5dd] + iVar17) - uVar25) * 0x168;
    if (*(int *)(lVar28 + 0x160) != 0) goto joined_r0x01ba01cc;
    if (iVar18 != 1) {
      *(undefined4 *)(lVar28 + 0x160) = 2;
      uVar24 = param_1[0x5de];
      goto joined_r0x01ba01cc;
    }
    *(undefined4 *)(lVar28 + 0x160) = 6;
    uVar24 = param_1[0x5de];
    if (uVar24 == 0) goto LAB_01ba01d0;
  }
  uVar25 = 0;
  do {
    uVar11 = 0;
    if ((int)param_1[0x5dc] <= (int)(uVar25 + param_1[0x5dd])) {
      uVar11 = param_1[0x5dc];
    }
    lVar28 = *(long *)(param_1 + 0x5da) + (long)(int)(uVar25 + (param_1[0x5dd] - uVar11)) * 0x168;
    if (*(int *)(lVar28 + 0x160) == 0) {
      *(undefined4 *)(lVar28 + 0x160) = 6;
    }
    uVar25 = uVar25 + 1;
  } while (uVar24 != uVar25);
LAB_01ba01d0:
  if (*param_1 < param_1[0x418]) {
    iVar18 = param_1[0x417] + *param_1;
    uVar24 = 0;
    if ((int)param_1[0x416] <= iVar18) {
      uVar24 = param_1[0x416];
    }
    lVar28 = *(long *)(param_1 + 0x414) + (long)(int)(iVar18 - uVar24) * 0xe0;
  }
  else {
    lVar28 = 0;
  }
  *(long *)(param_1 + 2) = lVar28;
  FUN_01ba025c(param_1);
  if ((char)param_1[0xf] != '\0') {
    FUN_01bc1880(*(long *)PTR_DAT_04bb28f8 + 0x2990,param_1 + 0xe);
  }
  return;
}

