
void FUN_01be3980(int *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  undefined2 *puVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined2 uVar8;
  long lVar9;
  uint uVar10;
  char cVar11;
  uint *puVar12;
  uint *puVar13;
  ulong uVar14;
  int *piVar15;
  int iVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  uint uVar22;
  uint local_57c;
  undefined1 auStack_568 [2];
  undefined2 local_566;
  uint local_564;
  uint local_560;
  byte local_55c;
  undefined *local_558;
  undefined8 *puStack_550;
  undefined4 local_548;
  undefined4 local_540;
  undefined8 local_534;
  undefined *local_528;
  undefined1 *puStack_520;
  undefined4 local_518;
  undefined1 auStack_514 [68];
  undefined *local_4d0;
  undefined1 *puStack_4c8;
  undefined4 local_4c0;
  undefined1 auStack_4bc [68];
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 local_420;
  undefined8 local_418;
  undefined8 local_410;
  undefined8 local_408;
  undefined8 local_400;
  undefined2 local_3f8;
  undefined2 uStack_3f6;
  uint uStack_3f4;
  undefined4 uStack_3f0;
  byte bStack_3ec;
  undefined *local_3e8;
  undefined1 *local_3e0;
  undefined4 local_3d8;
  undefined1 local_3d4;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined4 local_3c0;
  undefined *local_3b8;
  undefined1 *local_3b0;
  undefined4 local_3a8;
  undefined1 local_3a4 [63];
  undefined1 local_365;
  undefined *local_360;
  undefined1 *local_358;
  undefined4 local_350;
  undefined1 local_34c [63];
  undefined1 local_30d;
  undefined1 local_308 [8];
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined *local_288;
  undefined *local_280;
  undefined *local_278;
  undefined1 auStack_270 [16];
  undefined *local_260;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined *local_230;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined *local_200;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined *local_1d0;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined *local_1a0;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined *local_170;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined *local_140;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined *local_110;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined *local_e0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined *local_b0;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined1 local_6c;
  
  lVar18 = *(long *)PTR_DAT_04bb2208;
  memset(auStack_568,0,0x260);
  local_548 = 0x40;
  local_540 = 0xffffffff;
  puStack_520 = auStack_514;
  local_534 = 0xffffffffffffffff;
  puStack_4c8 = auStack_4bc;
  local_518 = 0x40;
  local_4c0 = 0x40;
  local_3b8 = PTR_DAT_04bb2bc0 + 0x10;
  local_3e8 = PTR_DAT_04bb6b18 + 0x10;
  local_478 = 0;
  uStack_470 = 0;
  local_428 = 0;
  local_468 = 0;
  uStack_460 = 0;
  puVar5 = &local_3f8;
  if (&local_3f8 <= (undefined2 *)((long)&local_478 + 2U)) {
    puVar5 = (undefined2 *)((long)&local_478 + 2U);
  }
  local_420 = 0;
  local_458 = 0;
  uStack_450 = 0;
  local_418 = 0;
  local_410 = 0;
  local_408 = 0;
  local_400 = 0;
  local_448 = 0;
  uStack_440 = 0;
  local_438 = 0;
  uStack_430 = 0;
  local_558 = local_3e8;
  puStack_550 = &local_478;
  local_528 = local_3b8;
  local_4d0 = local_3b8;
  memset(&local_478,0,(long)puVar5 + (-0xe0 - (long)&local_558));
  local_3c8 = 0xffffffff00000000;
  local_3e0 = local_308;
  local_3b0 = local_3a4;
  local_3a4[0] = 0;
  local_358 = local_34c;
  local_34c[0] = 0;
  ppuVar6 = &local_288;
  if (&local_288 <= local_308 + 2) {
    ppuVar6 = (undefined **)(local_308 + 2);
  }
  uStack_3f0 = 0;
  bStack_3ec = 0;
  local_3d8 = 0x40;
  local_3d4 = 0;
  local_3d0 = 0xffffffff;
  local_3c0 = 0xffffffff;
  local_3a8 = 0x40;
  local_365 = 0;
  local_350 = 0x40;
  local_30d = 0;
  local_3f8 = 0;
  uStack_3f6 = 0;
  uStack_3f4 = 0;
  local_290 = 0;
  local_298 = 0;
  local_2a0 = 0;
  local_2a8 = 0;
  local_2b0 = 0;
  local_2b8 = 0;
  local_2c0 = 0;
  local_2c8 = 0;
  local_2d0 = 0;
  local_2d8 = 0;
  local_2e0 = 0;
  local_2e8 = 0;
  local_2f0 = 0;
  local_2f8 = 0;
  local_300 = 0;
  local_308 = (undefined1  [8])0x0;
  local_360 = local_3b8;
  memset(local_3e0,0,(long)ppuVar6 + (-0xe0 - (long)&local_3e8));
  uVar17 = *(uint *)(lVar18 + 0x1d40);
  if (((int)uVar17 < 1) &&
     (((*(long *)(lVar18 + 0x1c30) == 0 ||
       (puVar12 = *(uint **)(*(long *)(lVar18 + 0x1c30) + 8), puVar12 == (uint *)0x0)) ||
      (uVar17 = *puVar12, uVar17 == 0)))) {
    return;
  }
  uVar19 = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  puVar2 = PTR_DAT_04bb2d80 + 0x10;
  puVar3 = PTR_DAT_04bc07e8 + 0x10;
  puVar21 = (undefined8 *)PTR_DAT_04bb6448;
LAB_01be3c0c:
  if ((int)*(uint *)(lVar18 + 0x1d40) < 1) {
    if (((((*(long *)(lVar18 + 0x1c30) != 0) &&
          (puVar12 = *(uint **)(*(long *)(lVar18 + 0x1c30) + 8), puVar12 != (uint *)0x0)) &&
         ((*(uint *)(lVar18 + 0x1c48) <= uVar19 ||
          (*(char *)(*(long *)(lVar18 + 0x1c50) + (long)(int)uVar19) != '\0')))) &&
        ((uVar19 < *puVar12 && (puVar12[1] != 0)))) && ((ushort)puVar12[2] != 0)) {
      iVar16 = 0xc;
      if (*(char *)((long)puVar12 + 10) != '\0') {
        iVar16 = 0x1c;
      }
      puVar12 = (uint *)((ulong)(puVar12[1] * uVar19 + (uint)(ushort)puVar12[2] * 8 + iVar16) +
                        (long)puVar12);
      goto joined_r0x01be3d9c;
    }
  }
  else if (uVar19 < *(uint *)(lVar18 + 0x1d40)) {
    uVar22 = uVar19;
    if (*(uint *)(lVar18 + 0x1d30) <= uVar19) {
      uVar22 = 0;
    }
    puVar12 = *(uint **)(*(long *)(lVar18 + 0x1d38) + (ulong)uVar22 * 8);
joined_r0x01be3d9c:
    if ((puVar12 != (uint *)0x0) && (*puVar12 != 0)) {
      cVar11 = *PTR_DAT_04bb6440;
      do {
        if (cVar11 != '\0') {
          uVar22 = *(uint *)((long)puVar21 + 0x3c);
          if ((int)uVar22 < 0) {
            if (uVar22 == 0xffffffff) goto LAB_01be3ca0;
          }
          else if ((undefined2 *)((ulong)uVar22 + (long)puVar12) != (undefined2 *)0x0) {
            uVar8 = *(undefined2 *)((ulong)uVar22 + (long)puVar12);
            goto LAB_01be3dbc;
          }
          goto LAB_01be3db8;
        }
        cVar11 = '\x01';
        *PTR_DAT_04bb6440 = 1;
        *puVar21 = 0xffffffffffffffff;
        puVar21[1] = 0xffffffffffffffff;
        *(undefined4 *)(puVar21 + 10) = 0xffffffff;
        puVar21[2] = 0xffffffffffffffff;
        puVar21[3] = 0xffffffffffffffff;
        puVar21[4] = 0xffffffffffffffff;
        puVar21[5] = 0xffffffffffffffff;
        puVar21[6] = 0xffffffffffffffff;
        puVar21[7] = 0xffffffffffffffff;
        puVar21[8] = 0xffffffffffffffff;
        puVar21[9] = 0xffffffffffffffff;
LAB_01be3ca0:
        puVar13 = (uint *)(ulong)*puVar12;
        uVar8 = 0;
        if ((*puVar12 == 0) || (puVar12 == puVar13)) {
LAB_01be3dbc:
          uVar22 = *puVar12;
          if (uVar22 != 0) {
            uVar14 = (ulong)*(uint *)((long)puVar21 + 0x4c);
            goto LAB_01be3dc8;
          }
          break;
        }
        lVar9 = 0xc;
        if (*(char *)((long)puVar12 + (10 - (long)puVar13)) != '\0') {
          lVar9 = 0x1c;
        }
        lVar9 = (long)puVar12 + (lVar9 - (long)puVar13);
        if (lVar9 == 0) {
LAB_01be3db8:
          uVar8 = 0;
          goto LAB_01be3dbc;
        }
        uVar14 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar13));
        *(undefined4 *)((long)puVar21 + 0x3c) = 0xfffffffe;
        if (uVar14 == 0) goto LAB_01be3db8;
        piVar15 = (int *)(lVar9 + 4);
        while (piVar15[-1] != 0x54706054) {
          piVar15 = piVar15 + 2;
          uVar14 = uVar14 - 1;
          if (uVar14 == 0) goto LAB_01be3db8;
        }
        iVar16 = 0;
        if (*piVar15 != -1) {
          iVar16 = *piVar15;
        }
        *(int *)((long)puVar21 + 0x3c) = iVar16;
      } while (*puVar12 != 0);
    }
  }
  goto LAB_01be3c00;
LAB_01be3dc8:
  do {
    if (-1 < (int)uVar14) {
      if ((byte *)(uVar14 + (long)puVar12) == (byte *)0x0) goto LAB_01be3e74;
      local_57c = (uint)*(byte *)(uVar14 + (long)puVar12);
LAB_01be3e78:
      uVar22 = *puVar12;
      if (uVar22 == 0) goto LAB_01be3f08;
      iVar16 = *(int *)(puVar21 + 9);
      goto LAB_01be3e84;
    }
    if ((uVar14 != 0xffffffff) || (lVar9 = (long)puVar12 - (ulong)uVar22, lVar9 == 0)) {
LAB_01be3e74:
      local_57c = 0;
      goto LAB_01be3e78;
    }
    lVar7 = 0xc;
    if (*(char *)(lVar9 + 10) != '\0') {
      lVar7 = 0x1c;
    }
    if (lVar7 + lVar9 == 0) goto LAB_01be3e74;
    uVar14 = (ulong)*(ushort *)(lVar9 + 8);
    *(undefined4 *)((long)puVar21 + 0x4c) = 0xfffffffe;
    if (uVar14 == 0) goto LAB_01be3e74;
    puVar13 = (uint *)(lVar7 + lVar9 + 4);
    while (puVar13[-1] != 0x1be772f0) {
      puVar13 = puVar13 + 2;
      uVar14 = uVar14 - 1;
      if (uVar14 == 0) goto LAB_01be3e74;
    }
    uVar14 = 0;
    if (*puVar13 != 0xffffffff) {
      uVar14 = (ulong)*puVar13;
    }
    *(int *)((long)puVar21 + 0x4c) = (int)uVar14;
    uVar22 = *puVar12;
  } while (uVar22 != 0);
  goto LAB_01be3c00;
LAB_01be3e84:
  if ((iVar16 != -1) || (lVar9 = (long)puVar12 - (ulong)uVar22, lVar9 == 0)) goto LAB_01be3f08;
  lVar7 = 0xc;
  if (*(char *)(lVar9 + 10) != '\0') {
    lVar7 = 0x1c;
  }
  if (lVar7 + lVar9 == 0) goto LAB_01be3f08;
  uVar14 = (ulong)*(ushort *)(lVar9 + 8);
  *(undefined4 *)(puVar21 + 9) = 0xfffffffe;
  if (uVar14 == 0) goto LAB_01be3f08;
  piVar15 = (int *)(lVar7 + lVar9 + 4);
  while (piVar15[-1] != 0x45f320f2) {
    piVar15 = piVar15 + 2;
    uVar14 = uVar14 - 1;
    if (uVar14 == 0) goto LAB_01be3f08;
  }
  iVar16 = 0;
  if (*piVar15 != -1) {
    iVar16 = *piVar15;
  }
  *(int *)(puVar21 + 9) = iVar16;
  uVar22 = *puVar12;
  if (uVar22 == 0) goto LAB_01be3f08;
  goto LAB_01be3e84;
LAB_01be3f08:
  if (local_57c != 0) {
    uVar22 = 1;
    do {
      uVar14 = FUN_0279be70(param_2,puVar12,uVar22);
      if ((uVar14 & 1) != 0) {
        local_280 = PTR_s_NookMilage_Keyword_Noun_04c485f8;
        local_566 = uVar8;
        local_564 = uVar22;
        local_288 = puVar1;
        FUN_006d8678(&local_278,"%03d_%02d_0",uVar8,uVar22 - 1);
        FUN_006f50a0(&local_558,&local_288,&local_278,0);
        local_280 = PTR_s_NookMilage_Keyword_Noun_04c485f8;
        uStack_3f6 = uVar8;
        uStack_3f4 = uVar22;
        local_288 = puVar1;
        FUN_006d8678(&local_278,"%03d_%02d_1",uVar8,uVar22 - 1);
        FUN_006f50a0(&local_3e8,&local_288,&local_278,0);
        memset(auStack_270,0,0x1e0);
        local_240 = 0;
        uStack_238 = 0;
        local_210 = 0;
        uStack_208 = 0;
        local_1e0 = 0;
        uStack_1d8 = 0;
        local_1b0 = 0;
        uStack_1a8 = 0;
        local_180 = 0;
        uStack_178 = 0;
        local_150 = 0;
        uStack_148 = 0;
        local_120 = 0;
        uStack_118 = 0;
        local_f0 = 0;
        uStack_e8 = 0;
        local_c0 = 0;
        uStack_b8 = 0;
        local_90 = 0xffffffff;
        local_78 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_74 = 0;
        local_6c = 0;
        local_278 = puVar3;
        local_260 = puVar2;
        local_230 = puVar2;
        local_200 = puVar2;
        local_1d0 = puVar2;
        local_1a0 = puVar2;
        local_170 = puVar2;
        local_140 = puVar2;
        local_110 = puVar2;
        local_e0 = puVar2;
        local_b0 = puVar2;
        uVar10 = FUN_01ba3894(&local_278,0x55,4,&local_3e8);
        bVar4 = (uVar10 & 1) == 0;
        if (bVar4) {
          local_55c = FUN_01c072d0(&local_558,&local_3e8);
          local_55c = local_55c & 1;
          uStack_3f0 = 2;
        }
        else {
          local_55c = 0;
          uStack_3f0 = 0;
        }
        puVar21 = (undefined8 *)PTR_DAT_04bb6448;
        local_560 = (uint)bVar4;
        bStack_3ec = local_55c;
        if (param_1[1] <= *param_1) break;
        puVar20 = *(undefined8 **)(param_1 + 4);
        if (puVar20 != (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 4) = *puVar20;
        }
        FUN_01be1c1c(puVar20,auStack_568);
        iVar16 = *param_1;
        if (iVar16 < param_1[1]) {
          *(undefined8 **)(*(long *)(param_1 + 2) + (long)iVar16 * 8) = puVar20;
          iVar16 = *param_1 + 1;
          *param_1 = iVar16;
        }
        if (puVar20 == (undefined8 *)0x0) break;
        if ((uVar10 & 1) == 0) {
          if (param_1[1] <= iVar16) break;
          puVar20 = *(undefined8 **)(param_1 + 4);
          if (puVar20 != (undefined8 *)0x0) {
            *(undefined8 *)(param_1 + 4) = *puVar20;
          }
          FUN_01be1c1c(puVar20,&local_3f8);
          if (*param_1 < param_1[1]) {
            *(undefined8 **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar20;
            *param_1 = *param_1 + 1;
          }
          if (puVar20 == (undefined8 *)0x0) break;
        }
      }
      if (local_57c <= uVar22) break;
      uVar22 = uVar22 + 1;
    } while( true );
  }
LAB_01be3c00:
  uVar19 = uVar19 + 1;
  if (uVar19 == uVar17) {
    return;
  }
  goto LAB_01be3c0c;
}

