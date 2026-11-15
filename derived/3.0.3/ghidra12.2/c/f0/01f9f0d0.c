
undefined8 FUN_01f9f0d0(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  uint uVar16;
  ulong uVar17;
  undefined *puVar18;
  ulong uVar19;
  long *plVar20;
  char *pcVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  long *plVar26;
  long lVar27;
  undefined1 *__dest;
  undefined1 *puVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  undefined8 local_348;
  undefined *local_340;
  undefined1 *local_338;
  int local_330;
  undefined1 local_32c [63];
  undefined1 local_2ed;
  int local_2e8;
  undefined4 uStack_2e4;
  undefined4 local_2e0;
  int local_2dc;
  undefined2 local_2d8;
  undefined *local_2d0;
  undefined8 uStack_2c8;
  undefined4 local_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 local_2b4;
  undefined *local_2b0;
  undefined *puStack_2a8;
  undefined8 local_2a0;
  undefined *puStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined4 local_280;
  undefined1 local_27c;
  undefined8 local_278;
  undefined8 local_270;
  undefined1 local_268;
  undefined4 local_264;
  undefined *local_260;
  undefined4 local_258;
  undefined4 uStack_254;
  long local_250;
  float local_244;
  undefined8 local_240;
  undefined4 local_238;
  ulong local_218;
  float local_210;
  undefined1 auStack_208 [12];
  undefined1 auStack_1fc [4];
  undefined1 local_1f8;
  undefined8 local_1f4;
  float local_1ec;
  undefined1 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1a8;
  undefined4 local_1a4;
  float local_1a0;
  undefined4 local_19c;
  float local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_154;
  undefined4 local_148;
  undefined4 local_144;
  undefined1 *local_128;
  int local_120;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  float local_8c;
  
  puVar25 = PTR_DAT_04bb43c0;
  local_250 = 0;
  local_260 = PTR_DAT_04bc0510 + 0x10;
  local_258 = *(undefined4 *)param_2;
  uStack_254 = *(undefined4 *)((long)param_2 + 4);
  lVar27 = *(long *)PTR_DAT_04bb43c0;
  uVar16 = FUN_0277d6c4(&local_258);
  if (*(long *)puVar25 != 0) {
    lVar27 = *(long *)(lVar27 + 0x57e58);
    uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
    if ((uVar16 < *(uint *)(lVar27 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
      lVar27 = *(long *)PTR_DAT_04bc0428;
      uVar16 = FUN_0277d6c4(param_2);
      uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
      if (uVar16 < *(uint *)(lVar27 + 0x1d8)) {
        lVar27 = *(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar16 * 8);
        if (lVar27 != 0) {
          local_250 = lVar27;
        }
      }
    }
  }
  local_240 = CONCAT44(local_240._4_4_,*(undefined4 *)(param_1[1] + 0x230));
  FUN_021e8490(&local_240,*(long *)(param_1[1] + 0x68) + 0x278,param_1 + 0x31,1,0);
  local_2c0 = 0;
  uStack_2bc = 0;
  uStack_2b8 = 0;
  local_2b4 = 0;
  local_27c = 0;
  local_2d0 = PTR_DAT_04bc1558 + 0x10;
  uStack_2c8 = 0;
  local_2b0 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_2a8 = PTR_DAT_04bb2010 + 0x10;
  local_2a0 = 0;
  local_290 = 0;
  uStack_288 = 0xffffffff00000000;
  local_280 = 0xffffffff;
  local_278 = 0xfffe;
  puStack_298 = puStack_2a8;
  FUN_0277d4ac(&local_278);
  local_268 = 0;
  local_264 = 0;
  local_270 = 0x3bf800000;
  local_240 = *(undefined8 *)(*(long *)(param_1[1] + 0x68) + 0x278);
  local_238 = *(undefined4 *)(*(long *)(param_1[1] + 0x68) + 0x280);
  if (((int)param_1[0x15f1] != 0) &&
     (uVar17 = FUN_01fc07f8(param_1,&local_240,param_4), (uVar17 & 1) == 0)) {
switchD_01f9f71c_caseD_8:
    return 0;
  }
  puVar25 = PTR_PTR_04bb2238;
  local_278 = *param_2;
  local_290 = *(undefined8 *)(param_3 + 0x20);
  uStack_2bc = (undefined4)local_240;
  uStack_2b8 = local_240._4_4_;
  local_2a0 = *(undefined8 *)(param_3 + 0x10);
  local_2b4 = local_238;
  local_330 = 0x40;
  local_2ed = 0;
  local_340 = PTR_DAT_04bb2f70 + 0x10;
  local_348 = 0;
  local_338 = local_32c;
  (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
  puVar28 = *(undefined1 **)(puVar25 + 8);
  if (local_32c != puVar28) {
    (**(code **)(*(long *)puVar25 + 0x18))(puVar25);
    lVar27 = 0;
    do {
      if (*(char *)(*(long *)(puVar25 + 8) + lVar27) == '\0') goto LAB_01f9f35c;
      lVar1 = *(long *)(puVar25 + 8) + lVar27;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar27 = lVar27 + 1;
        goto LAB_01f9f35c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar27 = lVar27 + 2;
        goto LAB_01f9f35c;
      }
      lVar27 = lVar27 + 3;
    } while (lVar27 != 0x80001);
    lVar27 = 0;
LAB_01f9f35c:
    iVar2 = (int)lVar27;
    if (local_330 <= (int)lVar27) {
      iVar2 = local_330 + -1;
    }
    memcpy(local_32c,puVar28,(long)iVar2);
    local_32c[iVar2] = 0;
  }
  local_2d8 = 0;
  local_340 = PTR_DAT_04bb2bc0 + 0x10;
  uStack_2e4 = *(undefined4 *)PTR_DAT_04bb37e0;
  local_2e0 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  local_2e8 = 0;
  local_2dc = 0;
  plVar26 = param_1 + 0x15f7;
  uVar17 = FUN_02080ddc(plVar26,&local_348,param_2,param_3 + 8,param_1 + 0x23ff);
  if ((uVar17 & 1) == 0) {
    return 0;
  }
  if (local_2e8 == 0) {
    return 0;
  }
  if ((*(int *)(param_1[1] + 0x750) == 1) && ((char)local_2d8 == '\0')) {
    return 0;
  }
  if ((((*(byte *)((long)param_1 + 0xafb1) & 1) == 0) &&
      (uVar17 = (**(code **)(*param_1 + 0x608))(param_1), (uVar17 & 1) != 0)) && (local_2dc != 1)) {
    return 0;
  }
  iVar2 = *(int *)(param_4 + 0x38);
  param_1[0x243a] = 0;
  param_1[0x2433] = (long)&DAT_04a69bd8;
  param_1[0x2434] = (long)param_1;
  param_1[0x2435] = (long)&LAB_01fc1ae0;
  param_1[0x2436] = 0;
  param_1[0x160e] = (long)(param_1 + 0x2433);
  param_1[0x2438] = (long)param_1;
  param_1[0x2439] = (long)&LAB_01fc1b0c;
  local_240 = CONCAT44(local_240._4_4_,local_2e8);
  param_1[0x2437] = (long)&PTR_LAB_04a69c00;
  param_1[0x160f] = (long)(param_1 + 0x2437);
  *(int *)(param_1 + 0x1601) = local_2e8;
  puVar15 = PTR_LAB_04bc2750;
  puVar14 = PTR_LAB_04bc2748;
  puVar13 = PTR_LAB_04bc2738;
  puVar12 = PTR_LAB_04bc2730;
  puVar11 = PTR_LAB_04bc2720;
  puVar10 = PTR_LAB_04bc2718;
  puVar9 = PTR_LAB_04bc2708;
  puVar8 = PTR_LAB_04bc2700;
  puVar7 = PTR_LAB_04bc26f0;
  puVar6 = PTR_LAB_04bc26e8;
  puVar5 = PTR_LAB_04bc26d8;
  puVar4 = PTR_LAB_04bc26d0;
  puVar18 = PTR_LAB_04bc26c0;
  puVar22 = PTR_LAB_04bc26b8;
  puVar3 = PTR_LAB_04bc26a8;
  puVar25 = PTR_LAB_04bc26a0;
  switch(local_2e8) {
  default:
    plVar20 = param_1 + 0x15f8;
    puVar23 = PTR_DAT_04bc2768 + 0x10;
    puVar24 = PTR_DAT_04bc2770 + 0x10;
    param_1[0x1602] = (long)puVar23;
    puVar18 = puVar3;
    puVar22 = puVar25;
    puVar25 = PTR_FUN_04bc2698;
    break;
  case 2:
    plVar20 = param_1 + 0x15f9;
    puVar23 = PTR_DAT_04bc2778 + 0x10;
    puVar24 = PTR_DAT_04bc2780 + 0x10;
    param_1[0x1602] = (long)puVar23;
    puVar25 = PTR_FUN_04bc26b0;
    break;
  case 3:
    plVar20 = param_1 + 0x15fa;
    puVar23 = PTR_DAT_04bc2788 + 0x10;
    puVar24 = PTR_DAT_04bc2790 + 0x10;
    param_1[0x1602] = (long)puVar23;
    puVar18 = puVar7;
    puVar22 = puVar6;
    puVar25 = PTR_LAB_04bc26e0;
    break;
  case 4:
    plVar20 = param_1 + 0x15fb;
    puVar23 = PTR_DAT_04bc2798 + 0x10;
    puVar24 = PTR_DAT_04bc27a0 + 0x10;
    param_1[0x1602] = (long)puVar23;
    puVar18 = puVar5;
    puVar22 = puVar4;
    puVar25 = PTR_LAB_04bc26c8;
    break;
  case 5:
    plVar20 = param_1 + 0x15fc;
    puVar23 = PTR_DAT_04bc27a8 + 0x10;
    puVar24 = PTR_DAT_04bc27b0 + 0x10;
    param_1[0x1602] = (long)puVar23;
    puVar18 = puVar9;
    puVar22 = puVar8;
    puVar25 = PTR_LAB_04bc26f8;
    break;
  case 6:
    plVar20 = param_1 + 0x15fd;
    puVar23 = PTR_DAT_04bc27b8 + 0x10;
    puVar24 = PTR_DAT_04bc27c0 + 0x10;
    param_1[0x1602] = (long)puVar23;
    puVar18 = puVar11;
    puVar22 = puVar10;
    puVar25 = PTR_LAB_04bc2710;
    break;
  case 7:
    plVar20 = param_1 + 0x15fe;
    puVar23 = PTR_DAT_04bc27c8 + 0x10;
    puVar24 = PTR_DAT_04bc27d0 + 0x10;
    param_1[0x1602] = (long)puVar23;
    puVar18 = puVar13;
    puVar22 = puVar12;
    puVar25 = PTR_LAB_04bc2728;
    break;
  case 0xb:
    plVar20 = param_1 + 0x15ff;
    puVar23 = PTR_DAT_04bc27d8 + 0x10;
    puVar24 = PTR_DAT_04bc27e0 + 0x10;
    param_1[0x1602] = (long)puVar23;
    puVar18 = puVar15;
    puVar22 = puVar14;
    puVar25 = PTR_LAB_04bc2740;
  }
  param_1[0x160b] = (long)plVar20;
  param_1[0x160c] = (long)puVar18;
  param_1[0x160d] = 0;
  *(int *)(param_1 + 0x1610) = iVar2;
  param_1[0x1603] = (long)plVar20;
  param_1[0x1604] = (long)puVar25;
  param_1[0x1605] = 0;
  param_1[0x1606] = (long)puVar23;
  param_1[0x1607] = (long)plVar20;
  param_1[0x1608] = (long)puVar22;
  param_1[0x1609] = 0;
  param_1[0x160a] = (long)puVar24;
  if (iVar2 - 2U < 4) {
    *(undefined4 *)((long)param_1 + 0xb084) = *(undefined4 *)(param_4 + 0x3c);
    *(undefined4 *)(param_1 + 0x1611) = *(undefined4 *)(param_4 + 0x40);
    *(undefined4 *)((long)param_1 + 0xb08c) = *(undefined4 *)(param_4 + 0x44);
  }
  FUN_01e63f1c(&local_240);
  if (10 < local_2e8 - 1U) {
    return 0;
  }
  switch(local_2e8) {
  case 1:
    FUN_020804f0(plVar26,&local_240,&local_244,&local_2d0,&local_348);
    goto LAB_01f9fc70;
  case 2:
    FUN_0207da6c(plVar26,&local_94,&local_98,&local_278,&local_2b0);
    local_244 = (float)local_348._4_4_;
    (**(code **)(local_340 + 0x18))(&local_340);
    puVar28 = local_338;
    if (local_128 != local_338) {
      (**(code **)(local_340 + 0x18))(&local_340);
      lVar27 = 0;
      do {
        __dest = local_128;
        if (local_338[lVar27] == '\0') goto LAB_01f9faec;
        if (local_338[lVar27 + 1] == '\0') goto LAB_01f9fae8;
        if (local_338[lVar27 + 2] == '\0') goto LAB_01f9fae0;
        lVar27 = lVar27 + 3;
      } while (lVar27 != 0x80001);
LAB_01f9f968:
      lVar27 = 0;
      __dest = local_128;
      goto LAB_01f9faec;
    }
    break;
  case 3:
    FUN_0207da6c(plVar26,&local_94,&local_98,&local_278,&local_2b0);
    local_244 = (float)local_348._4_4_;
    (**(code **)(local_340 + 0x18))(&local_340);
    puVar28 = local_338;
    if (local_128 != local_338) {
      (**(code **)(local_340 + 0x18))(&local_340);
      lVar27 = 0;
      do {
        __dest = local_128;
        if (local_338[lVar27] == '\0') goto LAB_01f9faec;
        if (local_338[lVar27 + 1] == '\0') goto LAB_01f9fae8;
        if (local_338[lVar27 + 2] == '\0') goto LAB_01f9fae0;
        lVar27 = lVar27 + 3;
      } while (lVar27 != 0x80001);
      goto LAB_01f9f968;
    }
    break;
  case 4:
    FUN_0207da6c(plVar26,&local_94,&local_98,&local_278,&local_2b0);
    local_244 = (float)local_348._4_4_;
    (**(code **)(local_340 + 0x18))(&local_340);
    puVar28 = local_338;
    if (local_128 != local_338) {
      (**(code **)(local_340 + 0x18))(&local_340);
      lVar27 = 0;
      do {
        __dest = local_128;
        if (local_338[lVar27] == '\0') goto LAB_01f9faec;
        if (local_338[lVar27 + 1] == '\0') goto LAB_01f9fae8;
        if (local_338[lVar27 + 2] == '\0') goto LAB_01f9fae0;
        lVar27 = lVar27 + 3;
      } while (lVar27 != 0x80001);
      goto LAB_01f9f968;
    }
    break;
  case 5:
    FUN_0207da6c(plVar26,&local_94,&local_98,&local_278,&local_2b0);
    local_244 = (float)local_348._4_4_;
    (**(code **)(local_340 + 0x18))(&local_340);
    puVar28 = local_338;
    if (local_128 != local_338) {
      (**(code **)(local_340 + 0x18))(&local_340);
      lVar27 = 0;
      do {
        __dest = local_128;
        if (local_338[lVar27] == '\0') goto LAB_01f9faec;
        if (local_338[lVar27 + 1] == '\0') goto LAB_01f9fae8;
        if (local_338[lVar27 + 2] == '\0') goto LAB_01f9fae0;
        lVar27 = lVar27 + 3;
      } while (lVar27 != 0x80001);
      goto LAB_01f9f968;
    }
    break;
  case 6:
    fVar30 = ((float)(int)local_2a0 * 5.0 + (float)(int)local_290 * 5.0 + 5.0) * 0.5;
    fVar29 = ((float)local_2a0._4_4_ * 5.0 + (float)local_290._4_4_ * 5.0 + 5.0) * 0.5;
    local_244 = (float)local_348._4_4_;
    (**(code **)(local_340 + 0x18))(&local_340);
    puVar28 = local_338;
    if (local_128 != local_338) {
      (**(code **)(local_340 + 0x18))(&local_340);
      lVar27 = 0;
      do {
        if (local_338[lVar27] == '\0') goto LAB_01f9fb68;
        if (local_338[lVar27 + 1] == '\0') {
          lVar27 = lVar27 + 1;
          goto LAB_01f9fb68;
        }
        if (local_338[lVar27 + 2] == '\0') {
          lVar27 = lVar27 + 2;
          goto LAB_01f9fb68;
        }
        lVar27 = lVar27 + 3;
      } while (lVar27 != 0x80001);
      lVar27 = 0;
LAB_01f9fb68:
      iVar2 = (int)lVar27;
      if (local_120 <= (int)lVar27) {
        iVar2 = local_120 + -1;
      }
      memcpy(local_128,puVar28,(long)iVar2);
      local_128[iVar2] = 0;
    }
    local_154 = FUN_0277d6c4(&local_278);
    local_19c = 0;
    local_218 = (ulong)(uint)fVar30;
    local_1f4 = (ulong)(uint)fVar30;
    local_1b8 = (int)local_2a0;
    local_1b4 = local_2a0._4_4_;
    local_1a8 = (int)local_290;
    local_1a4 = local_290._4_4_;
    local_1e8 = 1;
    local_1f8 = 1;
    local_210 = fVar29;
    local_1ec = fVar29;
    local_1a0 = fVar30;
    local_198 = fVar29;
    goto LAB_01f9fc70;
  case 7:
    FUN_02080690(plVar26,&local_240,&local_244,&local_2d0,&local_348);
    goto LAB_01f9fc70;
  default:
    goto switchD_01f9f71c_caseD_8;
  case 0xb:
    FUN_0207da6c(plVar26,&local_94,&local_98,&local_278,&local_2b0);
    local_244 = (float)local_348._4_4_;
    (**(code **)(local_340 + 0x18))(&local_340);
    puVar28 = local_338;
    if (local_128 != local_338) {
      (**(code **)(local_340 + 0x18))(&local_340);
      lVar27 = 0;
      do {
        if (local_338[lVar27] == '\0') goto LAB_01f9fbf4;
        if (local_338[lVar27 + 1] == '\0') {
          lVar27 = lVar27 + 1;
          goto LAB_01f9fbf4;
        }
        if (local_338[lVar27 + 2] == '\0') {
          lVar27 = lVar27 + 2;
          goto LAB_01f9fbf4;
        }
        lVar27 = lVar27 + 3;
      } while (lVar27 != 0x80001);
      lVar27 = 0;
LAB_01f9fbf4:
      iVar2 = (int)lVar27;
      if (local_120 <= (int)lVar27) {
        iVar2 = local_120 + -1;
      }
      memcpy(local_128,puVar28,(long)iVar2);
      local_128[iVar2] = 0;
    }
    local_144 = local_98;
    local_190 = (undefined4)local_278;
    local_1f4 = CONCAT44(uStack_90,local_94);
    local_148 = local_348._4_4_;
    local_18c = local_278._4_4_;
    local_1b4 = local_2a0._4_4_;
    local_1a8 = (int)local_290;
    local_1a4 = local_290._4_4_;
    local_1b8 = (int)local_2a0;
    goto LAB_01f9fc6c;
  }
LAB_01f9fb14:
  local_18c = local_278._4_4_;
  local_190 = (undefined4)local_278;
  local_1a8 = (int)local_290;
  local_1a4 = local_290._4_4_;
  local_1f4 = CONCAT44(uStack_90,local_94);
  local_1b4 = local_2a0._4_4_;
  local_1b8 = (int)local_2a0;
LAB_01f9fc6c:
  local_1e0 = 1;
  local_1e8 = 1;
  local_1f8 = 1;
  local_1ec = local_8c;
LAB_01f9fc70:
  fVar29 = local_244;
  if (*(int *)(param_4 + 0x38) - 2U < 4) {
    fVar30 = *(float *)(param_4 + 0x3c);
    uVar32 = *(undefined4 *)(param_4 + 0x40);
    fVar31 = *(float *)(param_4 + 0x44);
  }
  else {
    uVar32 = 0;
    fVar30 = ((float)*(int *)(param_4 + 0x20) * 5.0 + (float)*(int *)(param_4 + 0x30) * 5.0 + 5.0) *
             0.5;
    fVar31 = ((float)*(int *)(param_4 + 0x24) * 5.0 + (float)*(int *)(param_4 + 0x34) * 5.0 + 5.0) *
             0.5;
  }
  if (*(int *)(param_1[1] + 0x750) == 0) {
    FUN_01fc4510(param_1,auStack_208,auStack_1fc,param_4);
    if (*(int *)(param_4 + 0xf8) == 1) {
      local_1e0 = 2;
    }
    else {
      local_1e0 = 1;
    }
  }
  else {
    local_1e0 = 0;
  }
  local_218 = CONCAT44(uStack_2b8,uStack_2bc);
  plVar26 = (long *)(param_4 + 0x48);
  local_210 = (float)local_2b4;
  local_1a0 = fVar30;
  local_19c = uVar32;
  local_198 = fVar31;
  (**(code **)(*plVar26 + 0x18))(plVar26);
  (**(code **)(*plVar26 + 0x18))(plVar26);
  pcVar21 = *(char **)(param_4 + 0x50);
  if (pcVar21 == "NpcRollDance") {
LAB_01f9fdc0:
    local_240 = CONCAT44(local_240._4_4_,0x43);
    *(undefined4 *)((long)param_1 + 0x12054) = 0x3d;
  }
  else {
    if (*pcVar21 == 'N') {
      uVar17 = 0;
      do {
        uVar19 = uVar17;
        if ((uVar19 == 0x80000) || (pcVar21[uVar19 + 1] != "NpcRollDance"[uVar19 + 1]))
        goto LAB_01f9fdd4;
        uVar17 = uVar19 + 1;
      } while (pcVar21[uVar19 + 1] != '\0');
      if (uVar19 >> 0x13 == 0) goto LAB_01f9fdc0;
    }
LAB_01f9fdd4:
    local_240 = CONCAT44(local_240._4_4_,0x3d);
  }
  local_1dc = 1;
  *(uint *)((long)param_1 + 0x12084) = (uint)(fVar29 == 0.0);
  iVar2 = 0x708;
  if (fVar29 != 0.0) {
    iVar2 = (int)fVar29;
  }
  *(int *)(param_1 + 0x1613) = iVar2;
  FUN_01fb1020(param_1,&local_240,0x1e);
  *(uint *)(param_1 + 0x15f6) =
       *(uint *)(param_1 + 0x15f6) & 0xfffffff7 | (uint)local_2d8._1_1_ << 3;
  return 1;
LAB_01f9fae8:
  lVar27 = lVar27 + 1;
  __dest = local_128;
  goto LAB_01f9faec;
LAB_01f9fae0:
  lVar27 = lVar27 + 2;
  __dest = local_128;
LAB_01f9faec:
  iVar2 = (int)lVar27;
  if (local_120 <= (int)lVar27) {
    iVar2 = local_120 + -1;
  }
  memcpy(__dest,puVar28,(long)iVar2);
  __dest[iVar2] = 0;
  goto LAB_01f9fb14;
}

