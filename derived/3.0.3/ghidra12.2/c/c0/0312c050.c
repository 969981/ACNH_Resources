
bool FUN_0312c050(long param_1,uint param_2,uint param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 uVar11;
  int iVar12;
  uint *puVar13;
  long lVar14;
  ulong uVar15;
  char cVar16;
  char *pcVar17;
  uint *puVar18;
  int *piVar19;
  long *plVar20;
  long lVar21;
  int iVar22;
  undefined *puVar23;
  float fVar24;
  float fVar25;
  undefined *local_550;
  undefined8 *local_548;
  undefined4 local_540;
  undefined1 local_53c;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined4 local_528;
  undefined *local_520;
  undefined1 *puStack_518;
  undefined4 local_510;
  undefined1 local_50c [63];
  undefined1 local_4cd;
  undefined *local_4c8;
  undefined1 *puStack_4c0;
  undefined4 local_4b8;
  undefined1 local_4b4 [63];
  undefined1 local_475;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined6 uStack_458;
  undefined2 local_452;
  undefined6 uStack_450;
  undefined1 auStack_44a [2];
  int local_448;
  undefined *local_440;
  undefined4 local_438;
  undefined8 local_434;
  undefined4 local_42c;
  undefined *local_428;
  undefined8 uStack_420;
  undefined4 local_418;
  undefined1 local_414;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined4 local_400;
  undefined *local_3f8;
  undefined1 *puStack_3f0;
  undefined4 local_3e8;
  undefined1 local_3e4 [63];
  undefined1 local_3a5;
  undefined *local_3a0;
  undefined1 *puStack_398;
  undefined4 local_390;
  undefined1 local_38c [63];
  undefined1 local_34d;
  undefined8 local_348;
  undefined *local_340;
  undefined8 local_338;
  undefined4 local_330;
  undefined1 local_32c;
  undefined8 local_328;
  undefined8 local_320;
  undefined4 local_318;
  undefined *local_310;
  undefined1 *local_308;
  undefined4 local_300;
  undefined1 local_2fc [63];
  undefined1 local_2bd;
  undefined *local_2b8;
  undefined1 *local_2b0;
  undefined4 local_2a8;
  undefined1 local_2a4 [63];
  undefined1 local_265;
  undefined8 local_260;
  undefined *local_258;
  undefined8 local_250;
  undefined4 local_248;
  undefined1 local_244;
  undefined8 local_240;
  undefined8 local_238;
  undefined4 local_230;
  undefined *local_228;
  undefined1 *local_220;
  undefined4 local_218;
  undefined1 local_214 [63];
  undefined1 local_1d5;
  undefined *local_1d0;
  undefined1 *local_1c8;
  undefined4 local_1c0;
  undefined1 local_1bc [63];
  undefined1 local_17d;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined *local_160;
  undefined1 *local_158;
  undefined4 local_150;
  undefined1 local_14c [63];
  undefined1 local_10d;
  undefined *local_108;
  undefined1 *local_100;
  undefined4 local_f8;
  undefined1 local_f4 [63];
  undefined1 local_b5;
  undefined *local_b0;
  int local_a8;
  undefined1 local_a4;
  undefined8 local_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined *local_88;
  char *local_80;
  
  puVar1 = PTR_DAT_04bb6448;
  puVar23 = PTR_DAT_04bb6440;
  puVar3 = PTR_DAT_04bb2208;
  lVar14 = *(long *)PTR_DAT_04bb2208;
  if ((int)*(uint *)(lVar14 + 0x1d40) < 1) {
    if (*(long *)(lVar14 + 0x1c30) == 0) {
      return false;
    }
    puVar13 = *(uint **)(*(long *)(lVar14 + 0x1c30) + 8);
    if (puVar13 == (uint *)0x0) {
      return false;
    }
    if ((param_2 < *(uint *)(lVar14 + 0x1c48)) &&
       (*(char *)(*(long *)(lVar14 + 0x1c50) + (long)(int)param_2) == '\0')) {
      return false;
    }
    if (*puVar13 <= param_2) {
      return false;
    }
    if (puVar13[1] == 0) {
      return false;
    }
    if ((ushort)puVar13[2] == 0) {
      return false;
    }
    iVar7 = 0xc;
    if (*(char *)((long)puVar13 + 10) != '\0') {
      iVar7 = 0x1c;
    }
    puVar13 = (uint *)((ulong)(puVar13[1] * param_2 + (uint)(ushort)puVar13[2] * 8 + iVar7) +
                      (long)puVar13);
  }
  else {
    if (*(uint *)(lVar14 + 0x1d40) <= param_2) {
      return false;
    }
    uVar9 = param_2;
    if (*(uint *)(lVar14 + 0x1d30) <= param_2) {
      uVar9 = 0;
    }
    puVar13 = *(uint **)(*(long *)(lVar14 + 0x1d38) + (ulong)uVar9 * 8);
  }
  if (puVar13 == (uint *)0x0) {
    return false;
  }
  if (*puVar13 != 0) {
    cVar16 = *PTR_DAT_04bb6440;
    do {
      if (cVar16 == '\0') {
        cVar16 = '\x01';
        *(undefined8 *)puVar1 = 0xffffffffffffffff;
        *(undefined8 *)(puVar1 + 8) = 0xffffffffffffffff;
        *puVar23 = 1;
        *(undefined4 *)(puVar1 + 0x50) = 0xffffffff;
        *(undefined8 *)(puVar1 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar1 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar1 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar1 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar1 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar1 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar1 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar1 + 0x48) = 0xffffffffffffffff;
      }
      else {
        uVar9 = *(uint *)(puVar1 + 0x48);
        if (-1 < (int)uVar9) {
          pcVar17 = (char *)((ulong)uVar9 + (long)puVar13);
          goto LAB_0312c198;
        }
        if (uVar9 != 0xffffffff) break;
      }
      puVar18 = (uint *)(ulong)*puVar13;
      pcVar17 = (char *)0x0;
      if ((*puVar13 == 0) || (puVar13 == puVar18)) goto LAB_0312c198;
      lVar14 = 0xc;
      if (*(char *)((long)puVar13 + (10 - (long)puVar18)) != '\0') {
        lVar14 = 0x1c;
      }
      lVar14 = (long)puVar13 + (lVar14 - (long)puVar18);
      if (lVar14 == 0) break;
      uVar10 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar18));
      *(undefined4 *)(puVar1 + 0x48) = 0xfffffffe;
      pcVar17 = (char *)0x0;
      if (uVar10 == 0) goto LAB_0312c198;
      piVar19 = (int *)(lVar14 + 4);
      while (piVar19[-1] != 0x45f320f2) {
        piVar19 = piVar19 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) {
          pcVar17 = (char *)0x0;
          goto LAB_0312c198;
        }
      }
      iVar7 = 0;
      if (*piVar19 != -1) {
        iVar7 = *piVar19;
      }
      *(int *)(puVar1 + 0x48) = iVar7;
    } while (*puVar13 != 0);
  }
  pcVar17 = (char *)0x0;
LAB_0312c198:
  local_80 = *(char **)PTR_PTR_04bb6438;
  if (pcVar17 != (char *)0x0) {
    local_80 = pcVar17;
  }
  local_88 = PTR_DAT_04bb2020 + 0x10;
  uVar10 = FUN_03256ab0(&local_88);
  if ((uVar10 & 1) != 0) {
    plVar20 = *(long **)(*(long *)(param_1 + 0x210) + 0x428);
    if (plVar20 == (long *)0x0) {
      return false;
    }
    local_440 = PTR_DAT_04bc4f00 + 0x10;
    local_438 = 0x14;
    (**(code **)(*plVar20 + 0x18))(plVar20,&local_440);
    bVar5 = false;
    uVar6 = 0x3f800000;
    goto LAB_0312c9ac;
  }
  lVar14 = param_1 + 0x1f8;
  uVar6 = FUN_02798760(lVar14,&local_88);
  iVar7 = FUN_03258260(param_2);
  iVar8 = FUN_02798b88(lVar14,&local_88,uVar6);
  if (iVar8 < 1) {
    iVar12 = 0;
  }
  else {
    iVar22 = 0;
    iVar12 = 0;
    do {
      iVar22 = iVar22 + 1;
      uVar9 = FUN_0279bb10(lVar14,&local_88,iVar22);
      iVar12 = iVar12 + (uVar9 & 1);
    } while (iVar8 != iVar22);
  }
  puVar23 = PTR_DAT_04bc4f00;
  iVar12 = iVar12 + (param_3 & 1);
  iVar8 = iVar12;
  if (5 < iVar12) {
    iVar8 = 6;
  }
  plVar20 = *(long **)(*(long *)(param_1 + 0x210) + 0x420);
  if (plVar20 == (long *)0x0) {
    bVar5 = false;
  }
  else {
    puVar1 = PTR_DAT_04bc4f00 + 0x10;
    local_438 = 9;
    local_440 = puVar1;
    (**(code **)(*plVar20 + 0x20))(plVar20,&local_440);
    fVar24 = (float)(**(code **)(plVar20[3] + 0xb0))(plVar20[1]);
    bVar5 = iVar7 == iVar8;
    if ((bVar5) || (fVar25 = (float)iVar8, fVar24 < fVar25)) {
      local_438 = 9;
      local_440 = puVar1;
      (**(code **)(*plVar20 + 0x20))(plVar20,&local_440);
      fVar25 = (float)(**(code **)(plVar20[3] + 0xb0))(plVar20[1]);
    }
    local_440 = puVar23 + 0x10;
    local_438 = 0x14;
    (**(code **)(*plVar20 + 0x18))(plVar20,&local_440);
    (**(code **)(plVar20[3] + 0x158))(fVar25,plVar20[1]);
  }
  lVar14 = *(long *)puVar3;
  (**(code **)(local_88 + 0x18))(&local_88);
  uVar6 = FUN_006bd550(local_80,0);
  local_440 = (undefined *)CONCAT44(local_440._4_4_,uVar6);
  lVar14 = FUN_01b1ee90(lVar14 + 0x1b80,&local_440);
  if (lVar14 == 0) {
    iVar8 = 0;
  }
  else {
    if (4 < iVar12) {
      iVar12 = 5;
    }
    iVar22 = iVar7;
    if (iVar8 < iVar7) {
      iVar22 = iVar12 + 1;
    }
    iVar8 = FUN_027a40c0(lVar14,iVar22);
  }
  puVar3 = PTR_DAT_04bc0a78;
  lVar14 = *(long *)(param_1 + 0x210);
  lVar21 = *(long *)(lVar14 + 0x4c8);
  if (lVar21 != 0) {
    local_42c = 0;
    local_434 = 0;
    local_438 = CONCAT22(local_438._2_2_,0x100);
    local_418 = 0;
    puStack_3f0 = local_3e4;
    local_414 = 0;
    local_400 = 0xffffffff;
    local_3e8 = 0x40;
    local_3a5 = 0;
    local_3e4[0] = 0;
    local_410 = 0xffffffff;
    uStack_408 = 0xffffffff00000000;
    puVar23 = PTR_DAT_04bb2bc0 + 0x10;
    local_390 = 0x40;
    local_34d = 0;
    local_38c[0] = 0;
    puStack_398 = local_38c;
    local_428 = PTR_DAT_04bb2e00 + 0x10;
    local_338 = 0;
    local_2b0 = local_2a4;
    local_2a4[0] = 0;
    local_308 = local_2fc;
    local_2fc[0] = 0;
    local_1c8 = local_1bc;
    local_1bc[0] = 0;
    local_220 = local_214;
    local_214[0] = 0;
    local_330 = 0;
    local_32c = 0;
    local_328 = 0xffffffff;
    local_320 = 0xffffffff00000000;
    local_318 = 0xffffffff;
    local_300 = 0x40;
    local_2bd = 0;
    local_2a8 = 0x40;
    local_265 = 0;
    local_348 = 0;
    local_250 = 0;
    local_248 = 0;
    local_244 = 0;
    local_240 = 0xffffffff;
    local_238 = 0xffffffff00000000;
    local_230 = 0xffffffff;
    local_218 = 0x40;
    local_1d5 = 0;
    local_1c0 = 0x40;
    local_17d = 0;
    local_260 = 0;
    local_168 = 0;
    local_170 = 0;
    local_178 = 0;
    local_150 = 0x40;
    local_10d = 0;
    local_f8 = 0x40;
    local_b5 = 0;
    uStack_420 = 0;
    local_158 = local_14c;
    local_14c[0] = 0;
    local_100 = local_f4;
    local_f4[0] = 0;
    local_a8 = *(int *)PTR_DAT_04bc0b30;
    local_a4 = 0;
    *(int *)PTR_DAT_04bc0b30 = local_a8 + 1;
    local_b0 = puVar3 + 0x10;
    local_a0 = 0;
    local_440 = PTR_DAT_04bc0bf0 + 0x10;
    local_98 = 0;
    local_90 = 0;
    plVar20 = *(long **)(lVar21 + 0x48);
    local_3f8 = puVar23;
    local_3a0 = puVar23;
    local_340 = local_428;
    local_310 = puVar23;
    local_2b8 = puVar23;
    local_258 = local_428;
    local_228 = puVar23;
    local_1d0 = puVar23;
    local_160 = puVar23;
    local_108 = puVar23;
    if (plVar20[1] != 0) {
      local_548 = (undefined8 *)CONCAT44(local_548._4_4_,9);
      local_550 = PTR_DAT_04bc0878 + 0x10;
      (**(code **)(*plVar20 + 0x18))(plVar20,&local_550);
      (**(code **)(plVar20[3] + 0x5e0))(plVar20[1],PTR_DAT_04bb2da0,0);
      FUN_03d7dd80(lVar21);
    }
    local_53c = 0;
    local_540 = 0x13;
    puStack_518 = local_50c;
    local_548 = &local_470;
    puStack_4c0 = local_4b4;
    local_528 = 0xffffffff;
    local_510 = 0x40;
    local_4cd = 0;
    local_50c[0] = 0;
    local_4b8 = 0x40;
    local_475 = 0;
    local_4b4[0] = 0;
    local_538 = 0xffffffff;
    uStack_530 = 0xffffffff00000000;
    local_550 = PTR_DAT_04bc0bc0 + 0x10;
    uStack_450 = 0;
    puVar2 = auStack_44a;
    if (auStack_44a <= (undefined1 *)((long)&local_470 + 2U)) {
      puVar2 = (undefined1 *)((long)&local_470 + 2U);
    }
    local_460 = 0;
    uStack_458 = 0;
    local_452 = 0;
    local_470 = 0;
    uStack_468 = 0;
    local_520 = puVar23;
    local_4c8 = puVar23;
    memset(local_548,0,(ulong)(puVar2 + (-0xe1 - (long)&local_550)) & 0xfffffffffffffffc | 2);
    local_448 = 0;
    (**(code **)(local_88 + 0x18))(&local_88);
    (**(code **)(local_88 + 0x18))(&local_88);
    puVar23 = PTR_DAT_04bc4f00;
    if (local_80 == "HowmuchSellKabu") {
LAB_0312c7fc:
      iVar12 = **(int **)PTR_DAT_04bb3448;
      uVar11 = 3;
      if (iVar12 != 8) {
        uVar11 = 0;
      }
    }
    else {
      uVar10 = 0;
      bVar4 = true;
      do {
        if (local_80[uVar10] != "HowmuchSellKabu"[uVar10]) break;
        if (local_80[uVar10] == '\0') {
          if (bVar4) goto LAB_0312c7fc;
          break;
        }
        bVar4 = uVar10 < 0x80000;
        uVar10 = uVar10 + 1;
      } while (uVar10 != 0x80001);
      (**(code **)(local_88 + 0x18))(&local_88);
      (**(code **)(local_88 + 0x18))(&local_88);
      if (local_80 == "HowmuchBuyItem") goto LAB_0312c7fc;
      if (*local_80 == 'H') {
        uVar10 = 0;
        do {
          uVar15 = uVar10;
          if ((uVar15 == 0x80000) || (local_80[uVar15 + 1] != "HowmuchBuyItem"[uVar15 + 1]))
          goto LAB_0312c828;
          uVar10 = uVar15 + 1;
        } while (local_80[uVar15 + 1] != '\0');
        if (uVar15 >> 0x13 == 0) goto LAB_0312c7fc;
      }
LAB_0312c828:
      uVar11 = 0;
      iVar12 = **(int **)PTR_DAT_04bb3448;
    }
    FUN_01be4af0(&local_550,iVar12,iVar8,10,uVar11,0);
    local_448 = iVar8;
    FUN_01bea4e8(&local_440,lVar21,&local_550);
    FUN_01bea9c8(&local_440);
    FUN_01be9eb8(&local_440);
    lVar14 = *(long *)(param_1 + 0x210);
  }
  plVar20 = *(long **)(lVar14 + 0x428);
  if (plVar20 == (long *)0x0) {
    return bVar5;
  }
  if (iVar8 == 0) goto LAB_0312c988;
  uVar6 = 0;
  if (iVar7 == 1) {
    (**(code **)(local_88 + 0x18))(&local_88);
    (**(code **)(local_88 + 0x18))(&local_88);
    if (local_80 != "PutFurnitureOutside") {
      uVar10 = 0;
      bVar4 = true;
      do {
        if (local_80[uVar10] != "PutFurnitureOutside"[uVar10]) break;
        if (local_80[uVar10] == '\0') {
          if (bVar4) goto LAB_0312c98c;
          break;
        }
        bVar4 = uVar10 < 0x80000;
        uVar10 = uVar10 + 1;
      } while (uVar10 != 0x80001);
      (**(code **)(local_88 + 0x18))(&local_88);
      (**(code **)(local_88 + 0x18))(&local_88);
      if (local_80 != "BuildFence") {
        if (*local_80 == 'B') {
          uVar10 = 0;
          do {
            uVar15 = uVar10;
            if ((uVar15 == 0x80000) || (local_80[uVar15 + 1] != "BuildFence"[uVar15 + 1]))
            goto LAB_0312c988;
            uVar10 = uVar15 + 1;
          } while (local_80[uVar15 + 1] != '\0');
          if (uVar15 < 0x80000) goto LAB_0312c98c;
        }
LAB_0312c988:
        uVar6 = 0x3f800000;
      }
    }
  }
LAB_0312c98c:
  local_440 = puVar23 + 0x10;
  local_438 = 0x14;
  (**(code **)(*plVar20 + 0x18))(plVar20,&local_440);
LAB_0312c9ac:
  (**(code **)(plVar20[3] + 0x158))(uVar6,plVar20[1]);
  return bVar5;
}

