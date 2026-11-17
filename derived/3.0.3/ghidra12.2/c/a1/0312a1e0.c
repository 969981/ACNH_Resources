
void FUN_0312a1e0(long param_1,uint param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  bool bVar8;
  byte bVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined2 uVar17;
  uint uVar18;
  code *pcVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long lVar22;
  char cVar23;
  ulong uVar24;
  char *pcVar25;
  uint *puVar26;
  int *piVar27;
  long lVar28;
  long *plVar29;
  uint *puVar30;
  int iVar31;
  long lVar32;
  float fVar33;
  undefined8 uVar34;
  undefined *local_570;
  undefined8 *local_568;
  undefined4 local_560;
  undefined1 local_55c [4];
  undefined8 local_558;
  undefined8 uStack_550;
  undefined4 local_548;
  undefined *local_540;
  undefined1 *puStack_538;
  undefined4 local_530;
  undefined1 local_52c [63];
  undefined1 local_4ed;
  undefined *local_4e8;
  undefined1 *puStack_4e0;
  undefined4 local_4d8;
  undefined1 local_4d4 [63];
  undefined1 local_495;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined6 uStack_478;
  undefined2 local_472;
  undefined6 uStack_470;
  undefined1 auStack_46a [2];
  undefined4 local_468;
  undefined *local_460;
  undefined8 *puStack_458;
  undefined *local_450;
  undefined4 local_448;
  undefined8 local_444;
  undefined4 local_43c;
  undefined *local_438;
  undefined8 uStack_430;
  undefined4 local_428;
  undefined1 local_424;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined4 local_410;
  undefined *local_408;
  undefined1 *puStack_400;
  undefined4 local_3f8;
  undefined1 local_3f4 [63];
  undefined1 local_3b5;
  undefined *local_3b0;
  undefined1 *local_3a8;
  undefined4 local_3a0;
  undefined1 local_39c [63];
  undefined1 local_35d;
  undefined8 local_358;
  undefined *local_350;
  undefined8 local_348;
  undefined4 local_340;
  undefined1 local_33c;
  undefined8 local_338;
  undefined8 local_330;
  undefined4 local_328;
  undefined *local_320;
  undefined1 *local_318;
  undefined4 local_310;
  undefined1 local_30c [63];
  undefined1 local_2cd;
  undefined *local_2c8;
  undefined1 *local_2c0;
  undefined4 local_2b8;
  undefined1 local_2b4 [63];
  undefined1 local_275;
  undefined8 local_270;
  undefined *local_268;
  undefined8 local_260;
  undefined4 local_258;
  undefined1 local_254;
  undefined8 local_250;
  undefined8 local_248;
  undefined4 local_240;
  undefined *local_238;
  undefined1 *local_230;
  undefined4 local_228;
  undefined1 local_224 [63];
  undefined1 local_1e5;
  undefined *local_1e0;
  undefined1 *local_1d8;
  undefined4 local_1d0;
  undefined1 local_1cc [63];
  undefined1 local_18d;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined *local_170;
  undefined1 *local_168;
  undefined4 local_160;
  undefined1 local_15c [63];
  undefined1 local_11d;
  undefined *local_118;
  undefined1 *local_110;
  undefined4 local_108;
  undefined1 local_104 [63];
  undefined1 local_c5;
  undefined *local_c0;
  int local_b8;
  undefined1 local_b4;
  undefined8 local_b0;
  undefined2 local_a8;
  undefined8 local_a0;
  undefined *local_98;
  char *local_90;
  undefined *local_88;
  char *local_80;
  
  puVar3 = PTR_DAT_04bb6448;
  puVar2 = PTR_DAT_04bb6440;
  lVar22 = *(long *)PTR_DAT_04bb2208;
  if ((int)*(uint *)(lVar22 + 0x1d40) < 1) {
    if (*(long *)(lVar22 + 0x1c30) == 0) {
      return;
    }
    puVar30 = *(uint **)(*(long *)(lVar22 + 0x1c30) + 8);
    if (puVar30 == (uint *)0x0) {
      return;
    }
    if ((param_2 < *(uint *)(lVar22 + 0x1c48)) &&
       (*(char *)(*(long *)(lVar22 + 0x1c50) + (long)(int)param_2) == '\0')) {
      return;
    }
    if (*puVar30 <= param_2) {
      return;
    }
    if (puVar30[1] == 0) {
      return;
    }
    if ((ushort)puVar30[2] == 0) {
      return;
    }
    iVar10 = 0xc;
    if (*(char *)((long)puVar30 + 10) != '\0') {
      iVar10 = 0x1c;
    }
    puVar30 = (uint *)((ulong)(puVar30[1] * param_2 + (uint)(ushort)puVar30[2] * 8 + iVar10) +
                      (long)puVar30);
  }
  else {
    if (*(uint *)(lVar22 + 0x1d40) <= param_2) {
      return;
    }
    uVar12 = param_2;
    if (*(uint *)(lVar22 + 0x1d30) <= param_2) {
      uVar12 = 0;
    }
    puVar30 = *(uint **)(*(long *)(lVar22 + 0x1d38) + (ulong)uVar12 * 8);
  }
  if (puVar30 == (uint *)0x0) {
    return;
  }
  if (*puVar30 != 0) {
    cVar23 = *PTR_DAT_04bb6440;
    do {
      if (cVar23 == '\0') {
        cVar23 = '\x01';
        *(undefined8 *)puVar3 = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
        *puVar2 = 1;
        *(undefined4 *)(puVar3 + 0x50) = 0xffffffff;
        *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x48) = 0xffffffffffffffff;
      }
      else {
        uVar12 = *(uint *)(puVar3 + 0x48);
        if (-1 < (int)uVar12) {
          pcVar25 = (char *)((ulong)uVar12 + (long)puVar30);
          goto LAB_0312a328;
        }
        if (uVar12 != 0xffffffff) break;
      }
      puVar26 = (uint *)(ulong)*puVar30;
      pcVar25 = (char *)0x0;
      if ((*puVar30 == 0) || (puVar30 == puVar26)) goto LAB_0312a328;
      lVar22 = 0xc;
      if (*(char *)((long)puVar30 + (10 - (long)puVar26)) != '\0') {
        lVar22 = 0x1c;
      }
      lVar22 = (long)puVar30 + (lVar22 - (long)puVar26);
      if (lVar22 == 0) break;
      uVar24 = (ulong)*(ushort *)((long)puVar30 + (8 - (long)puVar26));
      *(undefined4 *)(puVar3 + 0x48) = 0xfffffffe;
      pcVar25 = (char *)0x0;
      if (uVar24 == 0) goto LAB_0312a328;
      piVar27 = (int *)(lVar22 + 4);
      while (piVar27[-1] != 0x45f320f2) {
        piVar27 = piVar27 + 2;
        uVar24 = uVar24 - 1;
        if (uVar24 == 0) {
          pcVar25 = (char *)0x0;
          goto LAB_0312a328;
        }
      }
      iVar10 = 0;
      if (*piVar27 != -1) {
        iVar10 = *piVar27;
      }
      *(int *)(puVar3 + 0x48) = iVar10;
    } while (*puVar30 != 0);
  }
  pcVar25 = (char *)0x0;
LAB_0312a328:
  local_90 = *(char **)PTR_PTR_04bb6438;
  if (pcVar25 != (char *)0x0) {
    local_90 = pcVar25;
  }
  local_98 = PTR_DAT_04bb2020 + 0x10;
  iVar10 = FUN_0279cca8(&local_98);
  puVar4 = PTR_DAT_04bc4f00;
  local_450 = (undefined *)CONCAT44(local_450._4_4_,iVar10);
  lVar22 = *(long *)(param_1 + 0x210);
  plVar29 = *(long **)(lVar22 + 0x408);
  if (plVar29 != (long *)0x0) {
    local_450 = PTR_DAT_04bc4f00 + 0x10;
    local_448 = 0x14;
    (**(code **)(*plVar29 + 0x18))(plVar29,&local_450);
    (**(code **)(plVar29[3] + 0x158))((float)iVar10,plVar29[1]);
    lVar22 = *(long *)(param_1 + 0x210);
  }
  plVar29 = *(long **)(lVar22 + 0x418);
  if (plVar29 == (long *)0x0) goto LAB_0312a554;
  (**(code **)(local_98 + 0x18))(&local_98);
  (**(code **)(local_98 + 0x18))(&local_98);
  if (local_90 == "PutFurnitureOutside") {
LAB_0312a520:
    local_450 = puVar4 + 0x10;
    local_448 = 0x14;
    (**(code **)(*plVar29 + 0x18))(plVar29,&local_450);
    (**(code **)(plVar29[3] + 0x158))(0,plVar29[1]);
  }
  else {
    uVar24 = 0;
    bVar8 = true;
    do {
      if (local_90[uVar24] != "PutFurnitureOutside"[uVar24]) break;
      if (local_90[uVar24] == '\0') {
        if (bVar8) goto LAB_0312a520;
        break;
      }
      bVar8 = uVar24 < 0x80000;
      uVar24 = uVar24 + 1;
    } while (uVar24 != 0x80001);
    (**(code **)(local_98 + 0x18))(&local_98);
    (**(code **)(local_98 + 0x18))(&local_98);
    if (local_90 == "BuildFence") goto LAB_0312a520;
    if (*local_90 == 'B') {
      uVar24 = 0;
      do {
        uVar15 = uVar24;
        if ((uVar15 == 0x80000) || (local_90[uVar15 + 1] != "BuildFence"[uVar15 + 1]))
        goto LAB_0312a554;
        uVar24 = uVar15 + 1;
      } while (local_90[uVar15 + 1] != '\0');
      if (uVar15 >> 0x13 == 0) goto LAB_0312a520;
    }
  }
LAB_0312a554:
  lVar22 = *(long *)(param_1 + 0x210);
  plVar29 = *(long **)(lVar22 + 0x430);
  if (plVar29 != (long *)0x0) {
    uVar34 = 0;
    if ((param_3 & 1) != 0) {
      uVar24 = FUN_03256de0(param_1 + 0x1f8,param_2);
      uVar34 = 0x3f800000;
      if ((uVar24 & 1) == 0) {
        uVar34 = 0;
      }
    }
    local_450 = puVar4 + 0x10;
    local_448 = 0x14;
    (**(code **)(*plVar29 + 0x18))(plVar29,&local_450);
    (**(code **)(plVar29[3] + 0x158))(uVar34,plVar29[1]);
    lVar22 = *(long *)(param_1 + 0x210);
  }
  plVar29 = *(long **)(lVar22 + 0x438);
  if (plVar29 != (long *)0x0) {
    uVar24 = FUN_0279c960(param_1 + 0x1f8,&local_98,1);
    if (((uVar24 & 1) == 0) && (uVar24 = FUN_032566f0(param_1 + 0x1f8,&local_98), (uVar24 & 1) != 0)
       ) {
      local_450 = PTR_DAT_04bc4e68 + 0x10;
      local_448 = 7;
      (**(code **)(*plVar29 + 0x18))(plVar29,&local_450);
      puVar20 = (undefined8 *)(plVar29[3] + 0x1c0);
    }
    else {
      local_450 = PTR_DAT_04bc4e68 + 0x10;
      local_448 = 6;
      (**(code **)(*plVar29 + 0x18))(plVar29,&local_450);
      puVar20 = (undefined8 *)(plVar29[3] + 0x1b8);
    }
    (*(code *)*puVar20)(plVar29[1]);
    lVar22 = *(long *)(param_1 + 0x210);
  }
  puVar4 = PTR_DAT_04bb2028;
  lVar28 = *(long *)(lVar22 + 0x4b8);
  if (lVar28 != 0) {
    local_43c = 0;
    local_448 = CONCAT22(local_448._2_2_,0x100);
    local_444 = 0;
    local_428 = 0;
    local_424 = 0;
    local_410 = 0xffffffff;
    local_3f8 = 0x40;
    local_3b5 = 0;
    local_3f4[0] = 0;
    local_420 = 0xffffffff;
    uStack_418 = 0xffffffff00000000;
    puStack_400 = local_3f4;
    local_408 = PTR_DAT_04bb2bc0 + 0x10;
    local_3a0 = 0x40;
    local_35d = 0;
    local_39c[0] = 0;
    local_3a8 = local_39c;
    local_438 = PTR_DAT_04bb2e00 + 0x10;
    local_330 = 0xffffffff00000000;
    local_2c0 = local_2b4;
    local_2b4[0] = 0;
    local_248 = 0xffffffff00000000;
    local_348 = 0;
    local_340 = 0;
    local_230 = local_224;
    local_224[0] = 0;
    local_318 = local_30c;
    local_30c[0] = 0;
    local_15c[0] = 0;
    local_1d8 = local_1cc;
    local_1cc[0] = 0;
    local_33c = 0;
    local_338 = 0xffffffff;
    local_328 = 0xffffffff;
    local_310 = 0x40;
    local_2cd = 0;
    local_2b8 = 0x40;
    local_275 = 0;
    local_358 = 0;
    local_260 = 0;
    local_258 = 0;
    local_254 = 0;
    local_250 = 0xffffffff;
    local_240 = 0xffffffff;
    local_228 = 0x40;
    local_1e5 = 0;
    local_1d0 = 0x40;
    local_18d = 0;
    local_270 = 0;
    local_178 = 0;
    local_180 = 0;
    local_188 = 0;
    local_160 = 0x40;
    local_11d = 0;
    local_108 = 0x40;
    local_c5 = 0;
    local_104[0] = 0;
    uStack_430 = 0;
    local_168 = local_15c;
    local_110 = local_104;
    local_b8 = *(int *)PTR_DAT_04bc0b30;
    local_b4 = 0;
    *(int *)PTR_DAT_04bc0b30 = local_b8 + 1;
    local_c0 = PTR_DAT_04bc0a78 + 0x10;
    local_b0 = 0;
    local_450 = PTR_DAT_04bc0bf0 + 0x10;
    local_a8 = 0;
    local_a0 = 0;
    plVar29 = *(long **)(lVar28 + 0x48);
    local_3b0 = local_408;
    local_350 = local_438;
    local_320 = local_408;
    local_2c8 = local_408;
    local_268 = local_438;
    local_238 = local_408;
    local_1e0 = local_408;
    local_170 = local_408;
    local_118 = local_408;
    if (plVar29[1] != 0) {
      local_570 = PTR_DAT_04bc0878 + 0x10;
      local_568 = (undefined8 *)CONCAT44(local_568._4_4_,9);
      (**(code **)(*plVar29 + 0x18))(plVar29,&local_570);
      (**(code **)(plVar29[3] + 0x5e0))(plVar29[1],PTR_DAT_04bb2da0,0);
      FUN_03d7dd80(lVar28);
    }
    local_540._0_4_ = (uint)(uint3)local_540;
    local_568 = (undefined8 *)local_55c;
    local_560 = 0x20;
    local_570 = puVar4 + 0x10;
    local_55c[0] = 0;
    if (*puVar30 != 0) {
      cVar23 = *puVar2;
      do {
        if (cVar23 == '\0') {
          cVar23 = '\x01';
          *(undefined8 *)puVar3 = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
          *puVar2 = 1;
          *(undefined4 *)(puVar3 + 0x50) = 0xffffffff;
          *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x48) = 0xffffffffffffffff;
        }
        else {
          uVar12 = *(uint *)(puVar3 + 0x3c);
          if (-1 < (int)uVar12) {
            if ((undefined2 *)((ulong)uVar12 + (long)puVar30) != (undefined2 *)0x0) {
              uVar17 = *(undefined2 *)((ulong)uVar12 + (long)puVar30);
              goto LAB_0312a9a4;
            }
            break;
          }
          if (uVar12 != 0xffffffff) break;
        }
        puVar26 = (uint *)(ulong)*puVar30;
        uVar17 = 0;
        if ((*puVar30 == 0) || (puVar30 == puVar26)) goto LAB_0312a9a4;
        lVar22 = 0xc;
        if (*(char *)((long)puVar30 + (10 - (long)puVar26)) != '\0') {
          lVar22 = 0x1c;
        }
        lVar22 = (long)puVar30 + (lVar22 - (long)puVar26);
        if (lVar22 == 0) break;
        uVar24 = (ulong)*(ushort *)((long)puVar30 + (8 - (long)puVar26));
        *(undefined4 *)(puVar3 + 0x3c) = 0xfffffffe;
        if (uVar24 == 0) break;
        piVar27 = (int *)(lVar22 + 4);
        while (piVar27[-1] != 0x54706054) {
          piVar27 = piVar27 + 2;
          uVar24 = uVar24 - 1;
          if (uVar24 == 0) goto LAB_0312a9a0;
        }
        iVar13 = 0;
        if (*piVar27 != -1) {
          iVar13 = *piVar27;
        }
        *(int *)(puVar3 + 0x3c) = iVar13;
        if (*puVar30 == 0) break;
      } while( true );
    }
LAB_0312a9a0:
    uVar17 = 0;
LAB_0312a9a4:
    FUN_038d1270(&local_570,"%03d_0",uVar17);
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_80 = "NookMilage_List";
    local_88 = puVar1;
    (**(code **)(local_570 + 0x18))(&local_570);
    puStack_458 = local_568;
    local_460 = puVar1;
    FUN_01bea210(&local_450,lVar28,&local_88,&local_460);
    FUN_01bea9c8(&local_450);
    FUN_01be9eb8(&local_450);
    lVar22 = *(long *)(param_1 + 0x210);
  }
  lVar22 = *(long *)(lVar22 + 0x4d0);
  if (lVar22 != 0) {
    local_43c = 0;
    local_448 = CONCAT22(local_448._2_2_,0x100);
    local_444 = 0;
    local_428 = 0;
    local_424 = 0;
    local_410 = 0xffffffff;
    local_3f8 = 0x40;
    local_3b5 = 0;
    local_3f4[0] = 0;
    local_420 = 0xffffffff;
    uStack_418 = 0xffffffff00000000;
    puStack_400 = local_3f4;
    local_408 = PTR_DAT_04bb2bc0 + 0x10;
    local_3a0 = 0x40;
    local_35d = 0;
    local_39c[0] = 0;
    local_3a8 = local_39c;
    local_438 = PTR_DAT_04bb2e00 + 0x10;
    local_330 = 0xffffffff00000000;
    local_2c0 = local_2b4;
    local_2b4[0] = 0;
    local_248 = 0xffffffff00000000;
    local_348 = 0;
    local_340 = 0;
    local_230 = local_224;
    local_224[0] = 0;
    local_318 = local_30c;
    local_30c[0] = 0;
    local_15c[0] = 0;
    local_1d8 = local_1cc;
    local_1cc[0] = 0;
    local_33c = 0;
    local_338 = 0xffffffff;
    local_328 = 0xffffffff;
    local_310 = 0x40;
    local_2cd = 0;
    local_2b8 = 0x40;
    local_275 = 0;
    local_358 = 0;
    local_260 = 0;
    local_258 = 0;
    local_254 = 0;
    local_250 = 0xffffffff;
    local_240 = 0xffffffff;
    local_228 = 0x40;
    local_1e5 = 0;
    local_1d0 = 0x40;
    local_18d = 0;
    local_270 = 0;
    local_178 = 0;
    local_180 = 0;
    local_188 = 0;
    local_160 = 0x40;
    local_11d = 0;
    local_108 = 0x40;
    local_c5 = 0;
    local_104[0] = 0;
    uStack_430 = 0;
    local_168 = local_15c;
    local_110 = local_104;
    local_b8 = *(int *)PTR_DAT_04bc0b30;
    local_b4 = 0;
    *(int *)PTR_DAT_04bc0b30 = local_b8 + 1;
    local_c0 = PTR_DAT_04bc0a78 + 0x10;
    local_b0 = 0;
    local_450 = PTR_DAT_04bc0bf0 + 0x10;
    local_a8 = 0;
    local_a0 = 0;
    plVar29 = *(long **)(lVar22 + 0x48);
    local_3b0 = local_408;
    local_350 = local_438;
    local_320 = local_408;
    local_2c8 = local_408;
    local_268 = local_438;
    local_238 = local_408;
    local_1e0 = local_408;
    local_170 = local_408;
    local_118 = local_408;
    if (plVar29[1] != 0) {
      local_570 = PTR_DAT_04bc0878 + 0x10;
      local_568 = (undefined8 *)CONCAT44(local_568._4_4_,9);
      (**(code **)(*plVar29 + 0x18))(plVar29,&local_570);
      (**(code **)(plVar29[3] + 0x5e0))(plVar29[1],PTR_DAT_04bb2da0,0);
      FUN_03d7dd80(lVar22);
    }
    local_540._0_4_ = (uint)(uint3)local_540;
    local_568 = (undefined8 *)local_55c;
    local_560 = 0x20;
    local_570 = puVar4 + 0x10;
    local_55c[0] = 0;
    if (*puVar30 != 0) {
      cVar23 = *puVar2;
      do {
        if (cVar23 == '\0') {
          cVar23 = '\x01';
          *(undefined8 *)puVar3 = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
          *puVar2 = 1;
          *(undefined4 *)(puVar3 + 0x50) = 0xffffffff;
          *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x48) = 0xffffffffffffffff;
        }
        else {
          uVar12 = *(uint *)(puVar3 + 0x3c);
          if (-1 < (int)uVar12) {
            if ((undefined2 *)((ulong)uVar12 + (long)puVar30) != (undefined2 *)0x0) {
              uVar17 = *(undefined2 *)((ulong)uVar12 + (long)puVar30);
              goto LAB_0312ad1c;
            }
            break;
          }
          if (uVar12 != 0xffffffff) break;
        }
        puVar26 = (uint *)(ulong)*puVar30;
        uVar17 = 0;
        if ((*puVar30 == 0) || (puVar30 == puVar26)) goto LAB_0312ad1c;
        lVar28 = 0xc;
        if (*(char *)((long)puVar30 + (10 - (long)puVar26)) != '\0') {
          lVar28 = 0x1c;
        }
        lVar28 = (long)puVar30 + (lVar28 - (long)puVar26);
        if (lVar28 == 0) break;
        uVar24 = (ulong)*(ushort *)((long)puVar30 + (8 - (long)puVar26));
        *(undefined4 *)(puVar3 + 0x3c) = 0xfffffffe;
        if (uVar24 == 0) break;
        piVar27 = (int *)(lVar28 + 4);
        while (piVar27[-1] != 0x54706054) {
          piVar27 = piVar27 + 2;
          uVar24 = uVar24 - 1;
          if (uVar24 == 0) goto LAB_0312ad18;
        }
        iVar13 = 0;
        if (*piVar27 != -1) {
          iVar13 = *piVar27;
        }
        *(int *)(puVar3 + 0x3c) = iVar13;
        if (*puVar30 == 0) break;
      } while( true );
    }
LAB_0312ad18:
    uVar17 = 0;
LAB_0312ad1c:
    FUN_038d1270(&local_570,"%03d_1",uVar17);
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    local_80 = "NookMilage_List";
    local_88 = puVar2;
    (**(code **)(local_570 + 0x18))(&local_570);
    puStack_458 = local_568;
    local_460 = puVar2;
    FUN_01bea210(&local_450,lVar22,&local_88,&local_460);
    FUN_01bea9c8(&local_450);
    FUN_01be9eb8(&local_450);
  }
  lVar22 = param_1 + 0x1f8;
  uVar11 = FUN_02798760(lVar22,&local_98);
  uVar12 = FUN_03258260(param_2);
  plVar29 = *(long **)(*(long *)(param_1 + 0x210) + 0x410);
  if (plVar29 != (long *)0x0) {
    local_450 = PTR_DAT_04bc4f00 + 0x10;
    local_448 = 0x14;
    fVar33 = 0.0;
    if (0 < (int)uVar12) {
      fVar33 = (float)(int)(uVar12 - 1);
    }
    (**(code **)(*plVar29 + 0x18))(plVar29,&local_450);
    (**(code **)(plVar29[3] + 0x158))(fVar33,plVar29[1]);
  }
  bVar9 = FUN_03256ab0(&local_98);
  *(byte *)(param_1 + 0x236) = bVar9 & 1;
  if ((bVar9 & 1) != 0) {
    *(uint *)(param_1 + 0x22c) = param_2;
    FUN_0312c050(param_1,param_2,0);
    plVar29 = *(long **)(*(long *)(param_1 + 0x210) + 0x4b0);
    if (plVar29 != (long *)0x0) {
      local_450 = PTR_DAT_04bc4e68 + 0x10;
      local_448 = 7;
      (**(code **)(*plVar29 + 0x18))(plVar29,&local_450);
      (**(code **)(plVar29[3] + 0x1c0))(plVar29[1]);
    }
    *(undefined4 *)(param_1 + 0x230) = 0xffffffff;
    puVar2 = PTR_DAT_04bc4e68;
    if ((int)uVar12 < 1) {
      return;
    }
    uVar24 = 0;
    lVar28 = 0x440;
    puVar3 = PTR_DAT_04bc4e68 + 0x10;
    do {
      uVar15 = uVar24;
      if (*(uint *)(*(long *)(param_1 + 0x210) + 0x340) <= uVar24) {
        uVar15 = 0;
      }
      if (*(long *)(*(long *)(*(long *)(param_1 + 0x210) + 0x348) + uVar15 * 8) != 0) {
        uVar15 = FUN_0279d6d0(lVar22,&local_98,uVar24 & 0xffffffff);
        if ((uVar15 & 1) == 0) {
          uVar15 = uVar24;
          if (*(uint *)(param_1 + 0x218) <= uVar24) {
            uVar15 = 0;
          }
          plVar29 = *(long **)(*(long *)(param_1 + 0x220) + uVar15 * 8);
          pcVar19 = *(code **)(*plVar29 + 0xb0);
        }
        else {
          uVar16 = FUN_0279bb10(lVar22,&local_98,uVar24 + 1 & 0xffffffff);
          uVar15 = uVar24;
          if (*(uint *)(param_1 + 0x218) <= uVar24) {
            uVar15 = 0;
          }
          plVar29 = *(long **)(*(long *)(param_1 + 0x220) + uVar15 * 8);
          if ((uVar16 & 1) != 0) {
            uVar15 = (**(code **)(*plVar29 + 0xf0))(plVar29);
            if ((uVar15 & 1) != 0) {
              *(undefined1 *)((long)plVar29 + 0x21c) = 1;
              *(undefined4 *)(plVar29 + 0x43) = 0xffffffff;
              if (*(int *)((long)plVar29 + (ulong)*(byte *)(plVar29 + 0x40) * 4 + 0x1f0) == -1) {
                *(undefined4 *)((long)plVar29 + (ulong)*(byte *)(plVar29 + 0x40) * 4 + 0x1f0) = 2;
              }
            }
            puVar30 = (uint *)FUN_0279b8c0(lVar22,&local_98,uVar24 + 1 & 0xffffffff);
            uVar18 = *puVar30;
            local_450 = (undefined *)CONCAT44(local_450._4_4_,uVar18);
            uVar15 = nn::time::IsValidDate(uVar18 & 0xffff,uVar18 >> 0x10 & 0xff,uVar18 >> 0x18);
            if ((uVar15 & 1) == 0) {
              uVar18 = (uint)*(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
              uVar15 = nn::time::IsValidDate
                                 (uVar18 & 0xffff,uVar18 >> 0x10 & 0xff,
                                  (uint)((ulong)*(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060)
                                        >> 0x18) & 0xff);
              if ((uVar15 & 1) != 0) {
                local_450 = (undefined *)CONCAT44(local_450._4_4_,uVar18);
              }
            }
            uVar15 = uVar24;
            if (*(uint *)(param_1 + 0x218) <= uVar24) {
              uVar15 = 0;
            }
            FUN_031284e0(*(undefined8 *)(*(long *)(param_1 + 0x220) + uVar15 * 8),&local_450);
            uVar15 = uVar24;
            if (*(uint *)(param_1 + 0x218) <= uVar24) {
              uVar15 = 0;
            }
            FUN_03128d70(*(undefined8 *)(*(long *)(param_1 + 0x220) + uVar15 * 8),&local_98,
                         uVar24 & 0xffffffff);
            goto LAB_0312b04c;
          }
          pcVar19 = *(code **)(*plVar29 + 0xb0);
        }
        (*pcVar19)(plVar29);
      }
LAB_0312b04c:
      puVar20 = (undefined8 *)(*(long *)(param_1 + 0x210) + lVar28);
      if (0xe < uVar24) {
        puVar20 = (undefined8 *)(*(long *)(param_1 + 0x210) + 0x408);
      }
      plVar29 = (long *)*puVar20;
      if (plVar29 != (long *)0x0) {
        uVar15 = FUN_0279d6d0(lVar22,&local_98,uVar24 & 0xffffffff);
        if (((uVar15 & 1) == 0) ||
           (uVar15 = FUN_0279bb10(lVar22,&local_98,(int)uVar24 + 1), (uVar15 & 1) != 0)) {
          local_450 = puVar2 + 0x10;
          local_448 = 6;
          (**(code **)(*plVar29 + 0x18))(plVar29,&local_450);
          puVar20 = (undefined8 *)(plVar29[3] + 0x1b8);
        }
        else {
          local_448 = 7;
          local_450 = puVar3;
          (**(code **)(*plVar29 + 0x18))(plVar29,&local_450);
          puVar20 = (undefined8 *)(plVar29[3] + 0x1c0);
        }
        (*(code *)*puVar20)(plVar29[1]);
      }
      uVar24 = uVar24 + 1;
      lVar28 = lVar28 + 8;
      if (uVar12 == uVar24) {
        return;
      }
    } while( true );
  }
  iVar13 = FUN_02798b88(lVar22,&local_98,uVar11);
  if (iVar13 < 1) {
    uVar18 = 0;
  }
  else {
    iVar31 = 0;
    uVar18 = 0;
    do {
      iVar31 = iVar31 + 1;
      uVar14 = FUN_0279bb10(lVar22,&local_98,iVar31);
      uVar18 = uVar18 + (uVar14 & 1);
    } while (iVar13 != iVar31);
  }
  *(uint *)(param_1 + 0x22c) = param_2;
  if (5 < (int)uVar18) {
    uVar18 = 6;
  }
  uVar24 = FUN_0312c050(param_1,param_2,0);
  lVar28 = *(long *)(param_1 + 0x210);
  lVar32 = *(long *)(lVar28 + 0x4c0);
  if (lVar32 == 0) goto LAB_0312b558;
  local_448 = CONCAT22(local_448._2_2_,0x100);
  local_444 = 0;
  local_43c = 0;
  local_428 = 0;
  local_424 = 0;
  local_410 = 0xffffffff;
  local_3f8 = 0x40;
  local_3b5 = 0;
  local_3f4[0] = 0;
  local_420 = 0xffffffff;
  uStack_418 = 0xffffffff00000000;
  puStack_400 = local_3f4;
  puVar2 = PTR_DAT_04bb2bc0 + 0x10;
  local_3a0 = 0x40;
  local_35d = 0;
  local_39c[0] = 0;
  local_3a8 = local_39c;
  local_438 = PTR_DAT_04bb2e00 + 0x10;
  local_348 = 0;
  local_340 = 0;
  local_2c0 = local_2b4;
  local_2b4[0] = 0;
  local_318 = local_30c;
  local_30c[0] = 0;
  local_1d8 = local_1cc;
  local_1cc[0] = 0;
  local_230 = local_224;
  local_224[0] = 0;
  local_33c = 0;
  local_338 = 0xffffffff;
  local_330 = 0xffffffff00000000;
  local_328 = 0xffffffff;
  local_310 = 0x40;
  local_2cd = 0;
  local_2b8 = 0x40;
  local_275 = 0;
  local_358 = 0;
  local_260 = 0;
  local_258 = 0;
  local_254 = 0;
  local_250 = 0xffffffff;
  local_248 = 0xffffffff00000000;
  local_240 = 0xffffffff;
  local_228 = 0x40;
  local_1e5 = 0;
  local_1d0 = 0x40;
  local_18d = 0;
  local_270 = 0;
  local_178 = 0;
  local_180 = 0;
  local_188 = 0;
  local_160 = 0x40;
  local_11d = 0;
  local_108 = 0x40;
  local_c5 = 0;
  uStack_430 = 0;
  local_168 = local_15c;
  local_15c[0] = 0;
  local_110 = local_104;
  local_104[0] = 0;
  local_b8 = *(int *)PTR_DAT_04bc0b30;
  local_b4 = 0;
  *(int *)PTR_DAT_04bc0b30 = local_b8 + 1;
  local_c0 = PTR_DAT_04bc0a78 + 0x10;
  local_b0 = 0;
  local_450 = PTR_DAT_04bc0bf0 + 0x10;
  local_a8 = 0;
  local_a0 = 0;
  plVar29 = *(long **)(lVar32 + 0x48);
  local_408 = puVar2;
  local_3b0 = puVar2;
  local_350 = local_438;
  local_320 = puVar2;
  local_2c8 = puVar2;
  local_268 = local_438;
  local_238 = puVar2;
  local_1e0 = puVar2;
  local_170 = puVar2;
  local_118 = puVar2;
  if (plVar29[1] != 0) {
    local_570 = PTR_DAT_04bc0878 + 0x10;
    local_568 = (undefined8 *)CONCAT44(local_568._4_4_,9);
    (**(code **)(*plVar29 + 0x18))(plVar29,&local_570);
    (**(code **)(plVar29[3] + 0x5e0))(plVar29[1],PTR_DAT_04bb2da0,0);
    FUN_03d7dd80(lVar32);
  }
  local_55c[0] = 0;
  local_560 = 0x13;
  local_568 = &local_490;
  local_558 = 0xffffffff;
  uStack_550 = 0xffffffff00000000;
  local_548 = 0xffffffff;
  puStack_538 = local_52c;
  local_530 = 0x40;
  local_4ed = 0;
  local_52c[0] = 0;
  local_4d8 = 0x40;
  local_495 = 0;
  local_4d4[0] = 0;
  puStack_4e0 = local_4d4;
  local_570 = PTR_DAT_04bc0bc0 + 0x10;
  local_490 = 0;
  uStack_488 = 0;
  uStack_470 = 0;
  puVar7 = auStack_46a;
  if (auStack_46a <= (undefined1 *)((long)&local_490 + 2U)) {
    puVar7 = (undefined1 *)((long)&local_490 + 2U);
  }
  local_480 = 0;
  uStack_478 = 0;
  local_472 = 0;
  local_540 = puVar2;
  local_4e8 = puVar2;
  memset(local_568,0,(ulong)(puVar7 + (-0xe1 - (long)&local_570)) & 0xfffffffffffffffc | 2);
  local_468 = 0;
  (**(code **)(local_98 + 0x18))(&local_98);
  (**(code **)(local_98 + 0x18))(&local_98);
  if (local_90 == "HowmuchSellKabu") {
LAB_0312b4d8:
    iVar31 = **(int **)PTR_DAT_04bb3448;
    uVar34 = 3;
    if (iVar31 != 8) {
      uVar34 = 0;
    }
  }
  else {
    uVar15 = 0;
    bVar8 = true;
    do {
      if (local_90[uVar15] != "HowmuchSellKabu"[uVar15]) break;
      if (local_90[uVar15] == '\0') {
        if (bVar8) goto LAB_0312b4d8;
        break;
      }
      bVar8 = uVar15 < 0x80000;
      uVar15 = uVar15 + 1;
    } while (uVar15 != 0x80001);
    (**(code **)(local_98 + 0x18))(&local_98);
    (**(code **)(local_98 + 0x18))(&local_98);
    if (local_90 == "HowmuchBuyItem") goto LAB_0312b4d8;
    if (*local_90 == 'H') {
      uVar15 = 0;
      do {
        uVar16 = uVar15;
        if ((uVar16 == 0x80000) || (local_90[uVar16 + 1] != "HowmuchBuyItem"[uVar16 + 1]))
        goto LAB_0312b504;
        uVar15 = uVar16 + 1;
      } while (local_90[uVar16 + 1] != '\0');
      if (uVar16 >> 0x13 == 0) goto LAB_0312b4d8;
    }
LAB_0312b504:
    uVar34 = 0;
    iVar31 = **(int **)PTR_DAT_04bb3448;
  }
  FUN_01be4af0(&local_570,iVar31,uVar11,10,uVar34,0);
  local_468 = uVar11;
  FUN_01bea4e8(&local_450,lVar32,&local_570);
  FUN_01bea9c8(&local_450);
  FUN_01be9eb8(&local_450);
  lVar28 = *(long *)(param_1 + 0x210);
  uVar24 = uVar24 & 0xffffffff;
LAB_0312b558:
  plVar29 = *(long **)(lVar28 + 0x4a0);
  if (plVar29 != (long *)0x0) {
    local_450 = PTR_DAT_04bc4e68 + 0x10;
    if ((uVar24 & 1) == 0) {
      local_448 = 6;
      (**(code **)(*plVar29 + 0x18))(plVar29,&local_450);
      puVar20 = (undefined8 *)(plVar29[3] + 0x1b8);
    }
    else {
      local_448 = 7;
      (**(code **)(*plVar29 + 0x18))(plVar29,&local_450);
      puVar20 = (undefined8 *)(plVar29[3] + 0x1c0);
    }
    (*(code *)*puVar20)(plVar29[1]);
    lVar28 = *(long *)(param_1 + 0x210);
  }
  plVar29 = *(long **)(lVar28 + 0x560);
  if (plVar29 != (long *)0x0) {
    local_450 = PTR_DAT_04bc0878 + 0x10;
    local_448 = 0x15;
    (**(code **)(*plVar29 + 0x18))(plVar29,&local_450);
    (**(code **)(plVar29[3] + 0x640))(plVar29[1]);
  }
  *(undefined1 *)(param_1 + 0x234) = 1;
  puVar2 = PTR_DAT_04bc4e68;
  if ((int)uVar12 < 1) {
    if (**(long **)(*(long *)(param_1 + 0x210) + 0x348) != 0) {
      (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x220) + 0xb0))();
    }
  }
  else {
    uVar24 = 0;
    lVar28 = 0x440;
    puVar3 = PTR_DAT_04bc4e68 + 0x10;
    do {
      uVar15 = uVar24;
      if (*(uint *)(*(long *)(param_1 + 0x210) + 0x340) <= uVar24) {
        uVar15 = 0;
      }
      if (*(long *)(*(long *)(*(long *)(param_1 + 0x210) + 0x348) + uVar15 * 8) != 0) {
        uVar15 = uVar24;
        if (*(uint *)(param_1 + 0x218) <= uVar24) {
          uVar15 = 0;
        }
        plVar29 = *(long **)(*(long *)(param_1 + 0x220) + uVar15 * 8);
        if (uVar24 < uVar18) {
          uVar15 = (**(code **)(*plVar29 + 0xf0))(plVar29);
          if ((uVar15 & 1) != 0) {
            *(undefined1 *)((long)plVar29 + 0x21c) = 1;
            *(undefined4 *)(plVar29 + 0x43) = 0xffffffff;
            if (*(int *)((long)plVar29 + (ulong)*(byte *)(plVar29 + 0x40) * 4 + 0x1f0) == -1) {
              *(undefined4 *)((long)plVar29 + (ulong)*(byte *)(plVar29 + 0x40) * 4 + 0x1f0) = 2;
            }
          }
          puVar30 = (uint *)FUN_0279b8c0(lVar22,&local_98,(int)uVar24 + 1);
          uVar14 = *puVar30;
          local_450 = (undefined *)CONCAT44(local_450._4_4_,uVar14);
          uVar15 = nn::time::IsValidDate(uVar14 & 0xffff,uVar14 >> 0x10 & 0xff,uVar14 >> 0x18);
          if ((uVar15 & 1) == 0) {
            uVar14 = (uint)*(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
            uVar15 = nn::time::IsValidDate
                               (uVar14 & 0xffff,uVar14 >> 0x10 & 0xff,
                                (uint)((ulong)*(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060) >>
                                      0x18) & 0xff);
            if ((uVar15 & 1) != 0) {
              local_450 = (undefined *)CONCAT44(local_450._4_4_,uVar14);
            }
          }
          uVar15 = uVar24;
          if (*(uint *)(param_1 + 0x218) <= uVar24) {
            uVar15 = 0;
          }
          FUN_031284e0(*(undefined8 *)(*(long *)(param_1 + 0x220) + uVar15 * 8),&local_450);
          uVar15 = uVar24;
          if (*(uint *)(param_1 + 0x218) <= uVar24) {
            uVar15 = 0;
          }
          FUN_03128bd0(*(undefined8 *)(*(long *)(param_1 + 0x220) + uVar15 * 8),&local_98,iVar10);
        }
        else {
          (**(code **)(*plVar29 + 0xb0))(plVar29);
        }
      }
      *(undefined4 *)(param_1 + 0x230) = 0xffffffff;
      puVar20 = (undefined8 *)(*(long *)(param_1 + 0x210) + lVar28);
      if (0xe < uVar24) {
        puVar20 = (undefined8 *)(*(long *)(param_1 + 0x210) + 0x408);
      }
      plVar29 = (long *)*puVar20;
      if (plVar29 != (long *)0x0) {
        if (((long)uVar24 < (long)iVar13) &&
           (uVar15 = FUN_0279bb10(lVar22,&local_98,(int)uVar24 + 1), (uVar15 & 1) == 0)) {
          local_448 = 7;
          local_450 = puVar3;
          (**(code **)(*plVar29 + 0x18))(plVar29,&local_450);
          puVar20 = (undefined8 *)(plVar29[3] + 0x1c0);
        }
        else {
          local_450 = puVar2 + 0x10;
          local_448 = 6;
          (**(code **)(*plVar29 + 0x18))(plVar29,&local_450);
          puVar20 = (undefined8 *)(plVar29[3] + 0x1b8);
        }
        (*(code *)*puVar20)(plVar29[1]);
      }
      uVar24 = uVar24 + 1;
      lVar28 = lVar28 + 8;
    } while (uVar12 != uVar24);
    puVar7 = auStack_46a;
    if (auStack_46a <= (undefined1 *)((long)&local_490 + 2U)) {
      puVar7 = (undefined1 *)((long)&local_490 + 2U);
    }
    puVar2 = PTR_DAT_04bb2bc0 + 0x10;
    puVar3 = PTR_DAT_04bc0bc0 + 0x10;
    puVar4 = PTR_DAT_04bb2e00 + 0x10;
    puVar1 = PTR_DAT_04bc0a78 + 0x10;
    puVar5 = PTR_DAT_04bc0bf0 + 0x10;
    puVar6 = PTR_DAT_04bc0878 + 0x10;
    uVar24 = 0;
    do {
      uVar15 = uVar24 + 1;
      lVar22 = *(long *)PTR_DAT_04bb2208;
      (**(code **)(local_98 + 0x18))(&local_98);
      uVar11 = FUN_006bd550(local_90,0);
      local_450 = (undefined *)CONCAT44(local_450._4_4_,uVar11);
      lVar22 = FUN_01b1ee90(lVar22 + 0x1b80,&local_450);
      if (lVar22 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = FUN_027a40c0(lVar22,uVar15 & 0xffffffff);
      }
      local_55c[0] = 0;
      local_560 = 0x13;
      local_558 = 0xffffffff;
      uStack_550 = 0xffffffff00000000;
      local_548 = 0xffffffff;
      local_530 = 0x40;
      local_4ed = 0;
      local_52c[0] = 0;
      local_4d8 = 0x40;
      local_495 = 0;
      local_4d4[0] = 0;
      uStack_470 = 0;
      local_480 = 0;
      uStack_478 = 0;
      local_472 = 0;
      local_490 = 0;
      uStack_488 = 0;
      local_570 = puVar3;
      local_568 = &local_490;
      local_540 = puVar2;
      puStack_538 = local_52c;
      local_4e8 = puVar2;
      puStack_4e0 = local_4d4;
      memset(&local_490,0,(ulong)(puVar7 + (-0xe1 - (long)&local_570)) & 0xfffffffffffffffc | 2);
      local_468 = 0;
      (**(code **)(local_98 + 0x18))(&local_98);
      (**(code **)(local_98 + 0x18))(&local_98);
      if (local_90 == "HowmuchSellKabu") {
LAB_0312bb70:
        iVar10 = **(int **)PTR_DAT_04bb3448;
        uVar34 = 3;
        if (iVar10 != 8) {
          uVar34 = 0;
        }
      }
      else {
        uVar16 = 0;
        bVar8 = true;
        do {
          if (local_90[uVar16] != "HowmuchSellKabu"[uVar16]) break;
          if (local_90[uVar16] == '\0') {
            if (bVar8) goto LAB_0312bb70;
            break;
          }
          if (local_90[uVar16 + 1] != "HowmuchSellKabu"[uVar16 + 1]) break;
          if (local_90[uVar16 + 1] == '\0') goto LAB_0312bb70;
          if (local_90[uVar16 + 2] != "HowmuchSellKabu"[uVar16 + 2]) break;
          if (local_90[uVar16 + 2] == '\0') goto LAB_0312bb70;
          bVar8 = uVar16 < 0x7fffe;
          uVar16 = uVar16 + 3;
        } while (uVar16 != 0x80001);
        (**(code **)(local_98 + 0x18))(&local_98);
        (**(code **)(local_98 + 0x18))(&local_98);
        if (local_90 == "HowmuchBuyItem") goto LAB_0312bb70;
        if (*local_90 == 'H') {
          uVar16 = 0;
          do {
            uVar21 = uVar16;
            if (local_90[uVar21 + 1] != "HowmuchBuyItem"[uVar21 + 1]) goto LAB_0312bbb0;
            if (local_90[uVar21 + 1] == '\0') goto joined_r0x0312bba4;
            if (local_90[uVar21 + 2] != "HowmuchBuyItem"[uVar21 + 2]) goto LAB_0312bbb0;
            if (local_90[uVar21 + 2] == '\0') {
              uVar21 = uVar21 + 1;
              goto joined_r0x0312bba4;
            }
            if ((uVar21 == 0x7fffe) || (local_90[uVar21 + 3] != "HowmuchBuyItem"[uVar21 + 3]))
            goto LAB_0312bbb0;
            uVar16 = uVar21 + 3;
          } while (local_90[uVar21 + 3] != '\0');
          uVar21 = uVar21 + 2;
joined_r0x0312bba4:
          if (uVar21 >> 0x13 == 0) goto LAB_0312bb70;
        }
LAB_0312bbb0:
        uVar34 = 0;
        iVar10 = **(int **)PTR_DAT_04bb3448;
      }
      FUN_01be4af0(&local_570,iVar10,uVar11,10,uVar34,0);
      lVar22 = *(long *)(param_1 + 0x210);
      plVar29 = (long *)(lVar22 + 0x4b8) + uVar24 + 8;
      if (0xb < uVar24) {
        plVar29 = (long *)(lVar22 + 0x4b8);
      }
      lVar28 = *plVar29;
      local_468 = uVar11;
      if (lVar28 != 0) {
        local_43c = 0;
        local_448 = CONCAT22(local_448._2_2_,0x100);
        local_428 = 0;
        local_444 = 0;
        local_424 = 0;
        local_3f8 = 0x40;
        local_3b5 = 0;
        local_3f4[0] = 0;
        local_420 = 0xffffffff;
        uStack_418 = 0xffffffff00000000;
        local_408 = PTR_DAT_04bb2bc0 + 0x10;
        local_3a0 = 0x40;
        local_35d = 0;
        local_39c[0] = 0;
        local_438 = PTR_DAT_04bb2e00 + 0x10;
        local_348 = 0;
        local_340 = 0;
        local_33c = 0;
        local_338 = 0xffffffff;
        local_330 = 0xffffffff00000000;
        local_328 = 0xffffffff;
        local_310 = 0x40;
        local_2cd = 0;
        local_30c[0] = 0;
        local_2b8 = 0x40;
        local_275 = 0;
        local_2b4[0] = 0;
        local_358 = 0;
        local_260 = 0;
        local_258 = 0;
        local_254 = 0;
        local_250 = 0xffffffff;
        local_248 = 0xffffffff00000000;
        local_240 = 0xffffffff;
        local_228 = 0x40;
        local_1e5 = 0;
        local_224[0] = 0;
        local_1d0 = 0x40;
        local_18d = 0;
        local_1cc[0] = 0;
        local_270 = 0;
        local_188 = 0;
        local_160 = 0x40;
        local_11d = 0;
        local_15c[0] = 0;
        local_108 = 0x40;
        local_c5 = 0;
        local_104[0] = 0;
        uStack_430 = 0;
        local_180 = 0;
        local_178 = 0;
        local_b8 = *(int *)PTR_DAT_04bc0b30;
        local_b4 = 0;
        *(int *)PTR_DAT_04bc0b30 = local_b8 + 1;
        local_c0 = PTR_DAT_04bc0a78 + 0x10;
        local_b0 = 0;
        local_a8 = 0;
        local_a0 = 0;
        plVar29 = *(long **)(lVar28 + 0x48);
        local_450 = PTR_DAT_04bc0bf0 + 0x10;
        local_410 = 0xffffffff;
        puStack_400 = local_3f4;
        local_3b0 = local_408;
        local_3a8 = local_39c;
        local_350 = local_438;
        local_320 = local_408;
        local_318 = local_30c;
        local_2c8 = local_408;
        local_2c0 = local_2b4;
        local_268 = local_438;
        local_238 = local_408;
        local_230 = local_224;
        local_1e0 = local_408;
        local_1d8 = local_1cc;
        local_170 = local_408;
        local_168 = local_15c;
        local_118 = local_408;
        local_110 = local_104;
        if (plVar29[1] != 0) {
          local_88 = PTR_DAT_04bc0878 + 0x10;
          local_80 = (char *)CONCAT44(local_80._4_4_,9);
          (**(code **)(*plVar29 + 0x18))(plVar29,&local_88);
          (**(code **)(plVar29[3] + 0x5e0))(plVar29[1],PTR_DAT_04bb2da0,0);
          FUN_03d7dd80(lVar28);
        }
        FUN_01bea4e8(&local_450,lVar28,&local_570);
        FUN_01bea9c8(&local_450);
        FUN_01be9eb8(&local_450);
        lVar22 = *(long *)(param_1 + 0x210);
      }
      plVar29 = (long *)(lVar22 + 0x4b8) + uVar24 + 0xe;
      if (5 < uVar24) {
        plVar29 = (long *)(lVar22 + 0x4b8);
      }
      lVar22 = *plVar29;
      if (lVar22 != 0) {
        local_43c = 0;
        local_428 = 0;
        local_448 = CONCAT22(local_448._2_2_,0x100);
        local_424 = 0;
        local_444 = 0;
        local_3f8 = 0x40;
        local_3b5 = 0;
        local_3f4[0] = 0;
        local_410 = 0xffffffff;
        local_420 = 0xffffffff;
        uStack_418 = 0xffffffff00000000;
        local_408 = PTR_DAT_04bb2bc0 + 0x10;
        local_338 = 0xffffffff;
        local_328 = 0xffffffff;
        local_250 = 0xffffffff;
        local_240 = 0xffffffff;
        local_3a0 = 0x40;
        local_35d = 0;
        local_39c[0] = 0;
        local_348 = 0;
        local_340 = 0;
        local_33c = 0;
        local_330 = 0xffffffff00000000;
        local_310 = 0x40;
        local_2cd = 0;
        local_30c[0] = 0;
        local_2b8 = 0x40;
        local_275 = 0;
        local_2b4[0] = 0;
        local_358 = 0;
        local_260 = 0;
        local_258 = 0;
        local_254 = 0;
        local_248 = 0xffffffff00000000;
        local_228 = 0x40;
        local_1e5 = 0;
        local_224[0] = 0;
        local_1d0 = 0x40;
        local_18d = 0;
        local_1cc[0] = 0;
        local_270 = 0;
        local_188 = 0;
        local_160 = 0x40;
        local_11d = 0;
        local_15c[0] = 0;
        local_108 = 0x40;
        local_c5 = 0;
        local_104[0] = 0;
        uStack_430 = 0;
        local_180 = 0;
        local_178 = 0;
        local_b8 = *(int *)PTR_DAT_04bc0b30;
        local_b4 = 0;
        local_b0 = 0;
        local_a8 = 0;
        *(int *)PTR_DAT_04bc0b30 = local_b8 + 1;
        local_a0 = 0;
        plVar29 = *(long **)(lVar22 + 0x48);
        local_450 = puVar5;
        local_438 = puVar4;
        puStack_400 = local_3f4;
        local_3b0 = local_408;
        local_3a8 = local_39c;
        local_350 = puVar4;
        local_320 = local_408;
        local_318 = local_30c;
        local_2c8 = local_408;
        local_2c0 = local_2b4;
        local_268 = puVar4;
        local_238 = local_408;
        local_230 = local_224;
        local_1e0 = local_408;
        local_1d8 = local_1cc;
        local_170 = local_408;
        local_168 = local_15c;
        local_118 = local_408;
        local_110 = local_104;
        local_c0 = puVar1;
        if (plVar29[1] != 0) {
          local_80 = (char *)CONCAT44(local_80._4_4_,9);
          local_88 = puVar6;
          (**(code **)(*plVar29 + 0x18))(plVar29,&local_88);
          (**(code **)(plVar29[3] + 0x5e0))(plVar29[1],PTR_DAT_04bb2da0,0);
          FUN_03d7dd80(lVar22);
        }
        FUN_01bea4e8(&local_450,lVar22,&local_570);
        FUN_01bea9c8(&local_450);
        FUN_01be9eb8(&local_450);
      }
      uVar24 = uVar15;
    } while (uVar15 != uVar12);
  }
  return;
}

