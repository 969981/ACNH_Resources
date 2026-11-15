
undefined8 FUN_01f9e120(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
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
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  bool bVar19;
  bool bVar20;
  uint uVar21;
  int iVar22;
  ulong uVar23;
  ushort uVar24;
  uint *puVar25;
  float *pfVar26;
  undefined *puVar27;
  uint *puVar28;
  long *plVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  long lVar34;
  undefined1 *__dest;
  undefined1 *puVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined8 local_338;
  undefined *local_330;
  undefined1 *local_328;
  int local_320;
  undefined1 local_31c [63];
  undefined1 local_2dd;
  int local_2d8;
  undefined4 uStack_2d4;
  undefined4 local_2d0;
  int local_2cc;
  undefined2 local_2c8;
  undefined *local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined *local_2a0;
  undefined *puStack_298;
  undefined8 local_290;
  undefined *puStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined4 local_270;
  undefined1 local_26c;
  undefined8 local_268;
  undefined8 local_260;
  undefined1 local_258;
  undefined4 local_254;
  undefined *local_250;
  undefined4 local_248;
  undefined4 uStack_244;
  long local_240;
  float local_234;
  undefined *local_230;
  long *local_228;
  undefined8 local_220;
  float local_208;
  float local_204;
  float local_200;
  undefined4 local_1fc;
  float local_1f8;
  undefined4 local_1f4;
  float local_1f0;
  undefined4 local_1ec;
  undefined1 local_1e8;
  undefined8 local_1e4;
  float local_1dc;
  undefined1 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined1 local_1c8;
  undefined1 local_1c6;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_198;
  undefined4 local_194;
  float local_190;
  undefined4 local_18c;
  float local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_144;
  undefined4 local_138;
  undefined4 local_134;
  undefined1 *local_118;
  int local_110;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  float local_7c;
  
  puVar6 = PTR_DAT_04bb43c0;
  local_240 = 0;
  puVar33 = PTR_DAT_04bc0510 + 0x10;
  local_248 = (undefined4)*param_2;
  uStack_244 = *(undefined4 *)((long)param_2 + 4);
  lVar34 = *(long *)PTR_DAT_04bb43c0;
  local_250 = puVar33;
  uVar21 = FUN_0277d6c4(&local_248);
  if (*(long *)puVar6 != 0) {
    lVar34 = *(long *)(lVar34 + 0x57e58);
    uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar34 + 0x1f8);
    if ((uVar21 < *(uint *)(lVar34 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar34 + 0x1e0) + (long)(int)uVar21 * 8) != 0)) {
      lVar34 = *(long *)PTR_DAT_04bc0428;
      uVar21 = FUN_0277d6c4(param_2);
      uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar34 + 0x1f8);
      if ((uVar21 < *(uint *)(lVar34 + 0x1d8)) &&
         (lVar34 = *(long *)(*(long *)(lVar34 + 0x1e0) + (long)(int)uVar21 * 8), lVar34 != 0)) {
        local_240 = lVar34;
      }
    }
  }
  local_230 = (undefined *)CONCAT44(local_230._4_4_,*(undefined4 *)(param_1[1] + 0x230));
  FUN_021e8490(&local_230,*(long *)(param_1[1] + 0x68) + 0x278,param_1 + 0x31,1,0);
  local_2b0 = 0;
  uStack_2a8 = 0;
  local_26c = 0;
  local_2c0 = PTR_DAT_04bc1558 + 0x10;
  uStack_2b8 = 0;
  local_2a0 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_298 = PTR_DAT_04bb2010 + 0x10;
  local_290 = 0;
  local_280 = 0;
  uStack_278 = 0xffffffff00000000;
  local_270 = 0xffffffff;
  local_268 = 0xfffe;
  puStack_288 = puStack_298;
  FUN_0277d4ac(&local_268);
  local_228 = (long *)*param_2;
  lVar34 = *(long *)puVar6;
  local_258 = 0;
  local_254 = 0;
  local_260 = 0x3bf800000;
  local_220 = 0;
  local_230 = puVar33;
  uVar21 = FUN_0277d6c4(&local_228);
  if (*(long *)puVar6 == 0) {
LAB_01f9e3b8:
    uVar24 = 0;
  }
  else {
    lVar34 = *(long *)(lVar34 + 0x57e58);
    uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar34 + 0x1f8);
    if ((*(uint *)(lVar34 + 0x1d8) <= uVar21) ||
       (*(long *)(*(long *)(lVar34 + 0x1e0) + (long)(int)uVar21 * 8) == 0)) goto LAB_01f9e3b8;
    lVar34 = *(long *)PTR_DAT_04bc0428;
    uVar21 = FUN_0277d6c4(param_2);
    uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar34 + 0x1f8);
    if ((*(uint *)(lVar34 + 0x1d8) <= uVar21) ||
       (puVar25 = *(uint **)(*(long *)(lVar34 + 0x1e0) + (long)(int)uVar21 * 8),
       puVar25 == (uint *)0x0)) goto LAB_01f9e3b8;
    uVar21 = *puVar25;
    uVar24 = 0;
    if ((uVar21 != 0) && (puVar25 != (uint *)(ulong)uVar21)) {
      puVar28 = (uint *)((long)puVar25 - (long)(ulong)uVar21);
      if ((*puVar28 != 0) &&
         ((uVar21 = puVar28[1], uVar21 != 0 && ((ulong)(ushort)puVar28[2] != 0)))) {
        lVar34 = 0xc;
        if (*(char *)((long)puVar28 + 10) != '\0') {
          lVar34 = 0x1c;
        }
        lVar34 = (long)puVar28 + lVar34 + (ulong)(ushort)puVar28[2] * 8;
        if (lVar34 != 0) {
          uVar5 = 0;
          if ((ulong)uVar21 != 0) {
            uVar5 = (uint)((ulong)((long)puVar25 - lVar34) / (ulong)uVar21);
          }
          if (*puVar28 <= uVar5) {
            uVar5 = 0xffffffff;
          }
          if ((uVar5 < *(uint *)PTR_DAT_04bc0110) &&
             (uVar24 = *(ushort *)(*(long *)(PTR_DAT_04bc0110 + 8) + (long)(int)uVar5 * 2),
             uVar24 < 9)) goto LAB_01f9e3bc;
        }
      }
      goto LAB_01f9e3b8;
    }
  }
LAB_01f9e3bc:
  uVar23 = FUN_01fbcee8(param_1,&local_2c0,param_2,param_3,uVar24);
  puVar33 = PTR_PTR_04bb2238;
  if ((uVar23 & 1) == 0) {
switchD_01f9e868_caseD_8:
    return 0;
  }
  local_2dd = 0;
  plVar1 = param_1 + 0x23ff;
  local_320 = 0x40;
  local_330 = PTR_DAT_04bb2f70 + 0x10;
  local_338 = 0;
  local_328 = local_31c;
  (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
  puVar35 = *(undefined1 **)(puVar33 + 8);
  if (local_31c != puVar35) {
    (**(code **)(*(long *)puVar33 + 0x18))(puVar33);
    lVar34 = 0;
    do {
      if (*(char *)(*(long *)(puVar33 + 8) + lVar34) == '\0') goto LAB_01f9e48c;
      lVar2 = *(long *)(puVar33 + 8) + lVar34;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar34 = lVar34 + 1;
        goto LAB_01f9e48c;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar34 = lVar34 + 2;
        goto LAB_01f9e48c;
      }
      lVar34 = lVar34 + 3;
    } while (lVar34 != 0x80001);
    lVar34 = 0;
LAB_01f9e48c:
    iVar22 = (int)lVar34;
    if (local_320 <= (int)lVar34) {
      iVar22 = local_320 + -1;
    }
    memcpy(local_31c,puVar35,(long)iVar22);
    local_31c[iVar22] = 0;
  }
  local_330 = PTR_DAT_04bb2bc0 + 0x10;
  local_2c8 = 0;
  uStack_2d4 = *(undefined4 *)PTR_DAT_04bb37e0;
  local_2d0 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  local_2d8 = 0;
  local_2cc = 0;
  plVar3 = param_1 + 0x15f7;
  uVar23 = FUN_02080ddc(plVar3,&local_338,param_2,param_3 + 8,plVar1);
  if ((uVar23 & 1) == 0) {
    return 0;
  }
  if (local_2d8 == 0) {
    return 0;
  }
  if ((*(int *)(param_1[1] + 0x750) == 1) && ((char)local_2c8 == '\0')) {
    return 0;
  }
  if ((((*(byte *)((long)param_1 + 0xafb1) & 1) == 0) &&
      (uVar23 = (**(code **)(*param_1 + 0x608))(param_1), (uVar23 & 1) != 0)) && (local_2cc != 1)) {
    return 0;
  }
  plVar4 = param_1 + 0x1602;
  param_1[0x2435] = (long)&LAB_01fc1ae0;
  param_1[0x2436] = 0;
  local_230 = (undefined *)CONCAT44(local_230._4_4_,local_2d8);
  *(int *)(param_1 + 0x1601) = local_2d8;
  param_1[0x2437] = (long)&PTR_LAB_04a69c00;
  param_1[0x2438] = (long)param_1;
  param_1[0x2433] = (long)&DAT_04a69bd8;
  param_1[0x2434] = (long)param_1;
  param_1[0x2439] = (long)&LAB_01fc1b0c;
  param_1[0x243a] = 0;
  param_1[0x160e] = (long)(param_1 + 0x2433);
  param_1[0x160f] = (long)(param_1 + 0x2437);
  puVar18 = PTR_LAB_04bc2750;
  puVar17 = PTR_LAB_04bc2748;
  puVar16 = PTR_LAB_04bc2738;
  puVar15 = PTR_LAB_04bc2730;
  puVar14 = PTR_LAB_04bc2720;
  puVar13 = PTR_LAB_04bc2718;
  puVar12 = PTR_LAB_04bc2708;
  puVar11 = PTR_LAB_04bc2700;
  puVar10 = PTR_LAB_04bc26f0;
  puVar9 = PTR_LAB_04bc26e8;
  puVar8 = PTR_LAB_04bc26d8;
  puVar7 = PTR_LAB_04bc26d0;
  puVar27 = PTR_LAB_04bc26c0;
  puVar30 = PTR_LAB_04bc26b8;
  puVar6 = PTR_LAB_04bc26a8;
  puVar33 = PTR_LAB_04bc26a0;
  switch(local_2d8) {
  default:
    plVar29 = param_1 + 0x15f8;
    puVar31 = PTR_DAT_04bc2768 + 0x10;
    puVar32 = PTR_DAT_04bc2770 + 0x10;
    *plVar4 = (long)puVar31;
    puVar27 = puVar6;
    puVar30 = puVar33;
    puVar33 = PTR_FUN_04bc2698;
    break;
  case 2:
    plVar29 = param_1 + 0x15f9;
    puVar31 = PTR_DAT_04bc2778 + 0x10;
    puVar32 = PTR_DAT_04bc2780 + 0x10;
    *plVar4 = (long)puVar31;
    puVar33 = PTR_FUN_04bc26b0;
    break;
  case 3:
    plVar29 = param_1 + 0x15fa;
    puVar31 = PTR_DAT_04bc2788 + 0x10;
    puVar32 = PTR_DAT_04bc2790 + 0x10;
    *plVar4 = (long)puVar31;
    puVar27 = puVar10;
    puVar30 = puVar9;
    puVar33 = PTR_LAB_04bc26e0;
    break;
  case 4:
    plVar29 = param_1 + 0x15fb;
    puVar31 = PTR_DAT_04bc2798 + 0x10;
    puVar32 = PTR_DAT_04bc27a0 + 0x10;
    *plVar4 = (long)puVar31;
    puVar27 = puVar8;
    puVar30 = puVar7;
    puVar33 = PTR_LAB_04bc26c8;
    break;
  case 5:
    plVar29 = param_1 + 0x15fc;
    puVar31 = PTR_DAT_04bc27a8 + 0x10;
    puVar32 = PTR_DAT_04bc27b0 + 0x10;
    *plVar4 = (long)puVar31;
    puVar27 = puVar12;
    puVar30 = puVar11;
    puVar33 = PTR_LAB_04bc26f8;
    break;
  case 6:
    plVar29 = param_1 + 0x15fd;
    puVar31 = PTR_DAT_04bc27b8 + 0x10;
    puVar32 = PTR_DAT_04bc27c0 + 0x10;
    *plVar4 = (long)puVar31;
    puVar27 = puVar14;
    puVar30 = puVar13;
    puVar33 = PTR_LAB_04bc2710;
    break;
  case 7:
    plVar29 = param_1 + 0x15fe;
    puVar31 = PTR_DAT_04bc27c8 + 0x10;
    puVar32 = PTR_DAT_04bc27d0 + 0x10;
    *plVar4 = (long)puVar31;
    puVar27 = puVar16;
    puVar30 = puVar15;
    puVar33 = PTR_LAB_04bc2728;
    break;
  case 0xb:
    plVar29 = param_1 + 0x15ff;
    puVar31 = PTR_DAT_04bc27d8 + 0x10;
    puVar32 = PTR_DAT_04bc27e0 + 0x10;
    *plVar4 = (long)puVar31;
    puVar27 = puVar18;
    puVar30 = puVar17;
    puVar33 = PTR_LAB_04bc2740;
  }
  param_1[0x160b] = (long)plVar29;
  param_1[0x160c] = (long)puVar27;
  param_1[0x160d] = 0;
  *(int *)(param_1 + 0x1610) = (int)*plVar1;
  param_1[0x1603] = (long)plVar29;
  param_1[0x1604] = (long)puVar33;
  param_1[0x1605] = 0;
  param_1[0x1606] = (long)puVar31;
  param_1[0x1607] = (long)plVar29;
  param_1[0x1608] = (long)puVar30;
  param_1[0x1609] = 0;
  param_1[0x160a] = (long)puVar32;
  if ((int)*plVar1 - 2U < 4) {
    *(undefined4 *)((long)param_1 + 0xb08c) = *(undefined4 *)((long)param_1 + 0x12004);
    *(undefined8 *)((long)param_1 + 0xb084) = *(undefined8 *)((long)param_1 + 0x11ffc);
  }
  FUN_01e63f1c(&local_230);
  if (10 < local_2d8 - 1U) {
    return 0;
  }
  switch(local_2d8) {
  case 1:
    FUN_020804f0(plVar3,&local_230,&local_234,&local_2c0,&local_338);
    break;
  case 2:
    FUN_0207da6c(plVar3,&local_84,&local_88,&local_268,&local_2a0);
    local_234 = (float)local_338._4_4_;
    (**(code **)(local_330 + 0x18))(&local_330);
    puVar35 = local_328;
    if (local_118 != local_328) {
      (**(code **)(local_330 + 0x18))(&local_330);
      lVar34 = 0;
      do {
        __dest = local_118;
        if (local_328[lVar34] == '\0') goto LAB_01f9ec38;
        if (local_328[lVar34 + 1] == '\0') goto LAB_01f9ec2c;
        if (local_328[lVar34 + 2] == '\0') goto LAB_01f9ec34;
        lVar34 = lVar34 + 3;
      } while (lVar34 != 0x80001);
LAB_01f9eab4:
      lVar34 = 0;
      __dest = local_118;
      goto LAB_01f9ec38;
    }
    goto LAB_01f9ec60;
  case 3:
    FUN_0207da6c(plVar3,&local_84,&local_88,&local_268,&local_2a0);
    local_234 = (float)local_338._4_4_;
    (**(code **)(local_330 + 0x18))(&local_330);
    puVar35 = local_328;
    if (local_118 != local_328) {
      (**(code **)(local_330 + 0x18))(&local_330);
      lVar34 = 0;
      do {
        __dest = local_118;
        if (local_328[lVar34] == '\0') goto LAB_01f9ec38;
        if (local_328[lVar34 + 1] == '\0') goto LAB_01f9ec2c;
        if (local_328[lVar34 + 2] == '\0') goto LAB_01f9ec34;
        lVar34 = lVar34 + 3;
      } while (lVar34 != 0x80001);
      goto LAB_01f9eab4;
    }
    goto LAB_01f9ec60;
  case 4:
    FUN_0207da6c(plVar3,&local_84,&local_88,&local_268,&local_2a0);
    local_234 = (float)local_338._4_4_;
    (**(code **)(local_330 + 0x18))(&local_330);
    puVar35 = local_328;
    if (local_118 != local_328) {
      (**(code **)(local_330 + 0x18))(&local_330);
      lVar34 = 0;
      do {
        __dest = local_118;
        if (local_328[lVar34] == '\0') goto LAB_01f9ec38;
        if (local_328[lVar34 + 1] == '\0') goto LAB_01f9ec2c;
        if (local_328[lVar34 + 2] == '\0') goto LAB_01f9ec34;
        lVar34 = lVar34 + 3;
      } while (lVar34 != 0x80001);
      goto LAB_01f9eab4;
    }
    goto LAB_01f9ec60;
  case 5:
    FUN_0207da6c(plVar3,&local_84,&local_88,&local_268,&local_2a0);
    local_234 = (float)local_338._4_4_;
    (**(code **)(local_330 + 0x18))(&local_330);
    puVar35 = local_328;
    if (local_118 != local_328) {
      (**(code **)(local_330 + 0x18))(&local_330);
      lVar34 = 0;
      do {
        __dest = local_118;
        if (local_328[lVar34] == '\0') goto LAB_01f9ec38;
        if (local_328[lVar34 + 1] == '\0') goto LAB_01f9ec2c;
        if (local_328[lVar34 + 2] == '\0') goto LAB_01f9ec34;
        lVar34 = lVar34 + 3;
      } while (lVar34 != 0x80001);
      goto LAB_01f9eab4;
    }
LAB_01f9ec60:
    local_17c = local_268._4_4_;
    local_180 = (undefined4)local_268;
    local_198 = (int)local_280;
    local_194 = local_280._4_4_;
    local_1e4 = CONCAT44(uStack_80,local_84);
    local_1d8 = 1;
    local_1e8 = 1;
    local_1d0 = 1;
    local_1a4 = local_290._4_4_;
    local_1a8 = (int)local_290;
    local_1dc = local_7c;
    break;
  case 6:
    fVar36 = ((float)(int)local_290 * 5.0 + (float)(int)local_280 * 5.0 + 5.0) * 0.5;
    fVar40 = ((float)local_290._4_4_ * 5.0 + (float)local_280._4_4_ * 5.0 + 5.0) * 0.5;
    local_234 = (float)local_338._4_4_;
    (**(code **)(local_330 + 0x18))(&local_330);
    puVar35 = local_328;
    if (local_118 != local_328) {
      (**(code **)(local_330 + 0x18))(&local_330);
      lVar34 = 0;
      do {
        if (local_328[lVar34] == '\0') goto LAB_01f9efb0;
        if (local_328[lVar34 + 1] == '\0') {
          lVar34 = lVar34 + 1;
          goto LAB_01f9efb0;
        }
        if (local_328[lVar34 + 2] == '\0') {
          lVar34 = lVar34 + 2;
          goto LAB_01f9efb0;
        }
        lVar34 = lVar34 + 3;
      } while (lVar34 != 0x80001);
      lVar34 = 0;
LAB_01f9efb0:
      iVar22 = (int)lVar34;
      if (local_110 <= (int)lVar34) {
        iVar22 = local_110 + -1;
      }
      memcpy(local_118,puVar35,(long)iVar22);
      local_118[iVar22] = 0;
    }
    local_144 = FUN_0277d6c4(&local_268);
    local_18c = 0;
    local_204 = 0.0;
    local_1e4 = (ulong)(uint)fVar36;
    local_1a8 = (int)local_290;
    local_1a4 = local_290._4_4_;
    local_198 = (int)local_280;
    local_194 = local_280._4_4_;
    local_1d8 = 1;
    local_1e8 = 1;
    local_208 = fVar36;
    local_200 = fVar40;
    local_1dc = fVar40;
    local_190 = fVar36;
    local_188 = fVar40;
    break;
  case 7:
    FUN_02080690(plVar3,&local_230,&local_234,&local_2c0,&local_338);
    break;
  default:
    goto switchD_01f9e868_caseD_8;
  case 0xb:
    FUN_0207da6c(plVar3,&local_84,&local_88,&local_268,&local_2a0);
    local_234 = (float)local_338._4_4_;
    (**(code **)(local_330 + 0x18))(&local_330);
    puVar35 = local_328;
    if (local_118 != local_328) {
      (**(code **)(local_330 + 0x18))(&local_330);
      lVar34 = 0;
      do {
        if (local_328[lVar34] == '\0') goto LAB_01f9f034;
        if (local_328[lVar34 + 1] == '\0') {
          lVar34 = lVar34 + 1;
          goto LAB_01f9f034;
        }
        if (local_328[lVar34 + 2] == '\0') {
          lVar34 = lVar34 + 2;
          goto LAB_01f9f034;
        }
        lVar34 = lVar34 + 3;
      } while (lVar34 != 0x80001);
      lVar34 = 0;
LAB_01f9f034:
      iVar22 = (int)lVar34;
      if (local_110 <= (int)lVar34) {
        iVar22 = local_110 + -1;
      }
      memcpy(local_118,puVar35,(long)iVar22);
      local_118[iVar22] = 0;
    }
    local_138 = local_338._4_4_;
    local_17c = local_268._4_4_;
    local_180 = (undefined4)local_268;
    local_1e4 = CONCAT44(uStack_80,local_84);
    local_134 = local_88;
    local_1a4 = local_290._4_4_;
    local_198 = (int)local_280;
    local_194 = local_280._4_4_;
    local_1a8 = (int)local_290;
    local_1d8 = 1;
    local_1e8 = 1;
    local_1dc = local_7c;
    local_1d0 = 1;
  }
  iVar22 = FUN_0277d6c4(&local_268);
  if (iVar22 == 0x45c) {
    iVar22 = 0;
  }
  else {
    iVar22 = FUN_0277d6c4(&local_268);
    iVar22 = (uint)(iVar22 != 0x45d) << 1;
  }
  fVar40 = local_234;
  *(int *)(param_1 + 0x2477) = iVar22;
  pfVar26 = (float *)((long)&local_2b0 + 4);
  uVar21 = (int)*plVar1 - 2;
  if (uVar21 < 4) {
    local_190 = *(float *)((long)param_1 + 0x11ffc);
    local_18c = (undefined4)param_1[0x2400];
    local_188 = *(float *)((long)param_1 + 0x12004);
  }
  else {
    local_190 = ((float)(int)local_290 * 5.0 + (float)(int)local_280 * 5.0 + 5.0) * 0.5;
    local_188 = ((float)local_290._4_4_ * 5.0 + (float)local_280._4_4_ * 5.0 + 5.0) * 0.5;
    local_18c = 0;
  }
  if ((int)param_1[0x15f1] != 1) {
    pfVar26 = (float *)(*(long *)(param_1[1] + 0x68) + 0x278);
  }
  iVar22 = *(int *)(param_1[1] + 0x750);
  if (iVar22 - 1U < 2) {
    local_1d8 = 0;
    local_1c8 = 1;
  }
  else {
    local_208 = *pfVar26;
    local_204 = pfVar26[1];
    local_1fc = 0xc0a00000;
    local_200 = pfVar26[2];
    if (iVar22 == 0) {
      if (uVar21 < 4) {
        local_1d0 = 2;
        switch((int)*plVar1) {
        case 2:
          local_1ec = 0x80000000;
          break;
        case 3:
          local_1ec = 0xc0000000;
          break;
        default:
          local_1ec = 0;
          break;
        case 5:
switchD_01f9ee94_caseD_5:
          local_1d0 = 2;
          local_1ec = 0x40000000;
        }
      }
      else {
        if ((((int)local_280 - (int)local_290) + 1 < 3) &&
           ((local_280._4_4_ - local_290._4_4_) + 1 < 3)) {
          local_1d0 = 1;
          local_1f8 = local_190;
          local_1f4 = local_18c;
          local_1f0 = local_188;
          goto LAB_01f9edb8;
        }
        local_1d0 = 2;
        fVar37 = (float)local_290._4_4_ * 5.0;
        fVar36 = (float)(int)local_280 * 5.0 + 5.0;
        fVar39 = pfVar26[2];
        fVar38 = (float)local_280._4_4_ * 5.0 + 5.0;
        if (((float)(int)local_290 * 5.0 <= local_208) && (local_208 <= fVar36)) {
          bVar19 = false;
          bVar20 = false;
          if (fVar38 <= fVar39) {
            bVar19 = false;
            bVar20 = true;
            if (!NAN(fVar39) && !NAN(fVar37)) {
              bVar19 = fVar39 == fVar37;
              bVar20 = fVar37 <= fVar39;
            }
          }
          local_1ec = 0;
          if (bVar20 && !bVar19) {
            local_1ec = 0x80000000;
          }
          goto LAB_01f9edb8;
        }
        local_1ec = 0;
        if ((fVar37 <= fVar39) && (fVar39 <= fVar38)) {
          if (local_208 <= (float)(int)local_290 * 5.0) goto switchD_01f9ee94_caseD_5;
          if (local_208 < fVar36) {
            local_1ec = 0;
            goto LAB_01f9edb8;
          }
          local_1ec = 0xc0000000;
        }
      }
      goto LAB_01f9edb8;
    }
  }
  local_1d0 = 0;
LAB_01f9edb8:
  local_230 = (undefined *)CONCAT44(local_230._4_4_,0x3d);
  local_1cc = 1;
  iVar22 = (**(code **)(*param_1 + 0x610))(param_1);
  if (iVar22 == 1) {
    local_154 = *(undefined4 *)((long)param_1 + 0xae84);
    local_150 = (undefined4)param_1[0x15d1];
    local_1c6 = 1;
  }
  if ((*(byte *)((long)param_1 + 0xafb2) >> 5 & 1) == 0) {
    local_228 = param_1 + 0x2443;
    param_1[0x2444] = (long)param_1;
    param_1[0x2445] = (long)&LAB_01fc13b0;
    param_1[0x2446] = 0;
  }
  *(uint *)((long)param_1 + 0x12084) = (uint)(fVar40 == 0.0);
  iVar22 = 0x708;
  if (fVar40 != 0.0) {
    iVar22 = (int)fVar40;
  }
  *(int *)(param_1 + 0x1613) = iVar22;
  FUN_01fb1020(param_1,&local_230,0x1e);
  *(uint *)(param_1 + 0x15f6) =
       *(uint *)(param_1 + 0x15f6) & 0xfffffff7 | (uint)local_2c8._1_1_ << 3;
  return 1;
LAB_01f9ec2c:
  lVar34 = lVar34 + 1;
  __dest = local_118;
  goto LAB_01f9ec38;
LAB_01f9ec34:
  lVar34 = lVar34 + 2;
  __dest = local_118;
LAB_01f9ec38:
  iVar22 = (int)lVar34;
  if (local_110 <= (int)lVar34) {
    iVar22 = local_110 + -1;
  }
  memcpy(__dest,puVar35,(long)iVar22);
  __dest[iVar22] = 0;
  goto LAB_01f9ec60;
}

