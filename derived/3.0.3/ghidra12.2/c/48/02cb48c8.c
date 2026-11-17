
/* WARNING: Removing unreachable block (ram,0x02cb4a44) */

undefined8 FUN_02cb48c8(long *param_1,ulong param_2)

{
  byte *pbVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  uint *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  byte bVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  long lVar13;
  byte bVar14;
  undefined *puVar15;
  long *plVar16;
  undefined8 *puVar17;
  long *plVar18;
  long *plVar19;
  undefined *puVar20;
  float fVar21;
  undefined8 uVar22;
  undefined *local_528;
  undefined4 local_520;
  undefined8 local_51c;
  undefined4 local_514;
  undefined *local_510;
  undefined8 uStack_508;
  undefined4 local_500;
  undefined1 local_4fc;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined4 local_4e8;
  undefined *local_4e0;
  undefined1 *puStack_4d8;
  undefined4 local_4d0;
  undefined1 local_4cc [63];
  undefined1 local_48d;
  undefined *local_488;
  undefined1 *puStack_480;
  undefined4 local_478;
  undefined1 local_474 [63];
  undefined1 local_435;
  undefined8 local_430;
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
  undefined8 local_258;
  undefined8 local_250;
  undefined *local_248;
  undefined1 *local_240;
  undefined4 local_238;
  undefined1 local_234 [63];
  undefined1 local_1f5;
  undefined *local_1f0;
  undefined1 *local_1e8;
  undefined4 local_1e0;
  undefined1 local_1dc [63];
  undefined1 local_19d;
  undefined *local_198;
  int local_190;
  undefined1 local_18c;
  undefined8 local_188;
  undefined2 local_180;
  undefined8 local_178;
  undefined *local_170;
  undefined8 *local_168;
  undefined4 local_160;
  undefined1 local_15c;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined *local_140;
  undefined1 *local_138;
  undefined4 local_130;
  undefined1 local_12c [63];
  undefined1 local_ed;
  undefined *local_e8;
  undefined1 *local_e0;
  undefined4 local_d8;
  undefined1 local_d4 [63];
  undefined1 local_95;
  undefined8 local_90;
  undefined6 uStack_88;
  undefined2 local_82;
  undefined6 uStack_80;
  undefined1 auStack_7a [10];
  
  plVar19 = (long *)PTR_DAT_04bb39b0;
  pbVar11 = PTR_DAT_04bb32e0;
  if (((int)param_1[0x60] == 7) && ((*(uint *)(param_1[0x5b] + 0x50) & 0xfffffffd) != 0)) {
    return 0;
  }
  pbVar1 = (byte *)((long)param_1 + 0x2f4);
  lVar13 = *(long *)PTR_DAT_04bb39b0;
  pbVar10 = PTR_DAT_04bb32e0;
  if (lVar13 == 0) {
    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_02cb4990;
LAB_02cb49f0:
    bVar9 = *pbVar10;
    if (7 < bVar9) {
      bVar9 = 0xff;
    }
  }
  else {
    if (*(int *)(lVar13 + 0x15c) != 0) {
      pbVar10 = (byte *)(lVar13 + 0x158);
    }
    if ((*pbVar10 < 8) ||
       (((*(int *)(lVar13 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (pbVar10 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar10 < 8)))) goto LAB_02cb49f0;
LAB_02cb4990:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_02cb49e8:
      pbVar10 = PTR_DAT_04bb5038;
      goto LAB_02cb49f0;
    }
    lVar13 = **(long **)PTR_DAT_04bb27d0;
    bVar9 = *(byte *)(lVar13 + 0x473);
    pbVar10 = PTR_DAT_04bb5038;
    if ((long)(char)bVar9 != 0xffffffffffffffff) {
      puVar4 = (uint *)(lVar13 + 0x48) + ((long)(char)bVar9 & 0xffffffffU) * 0x20;
      if (7 < bVar9) {
        puVar4 = (uint *)(lVar13 + 0x48);
      }
      if ((*puVar4 & 8) != 0) {
        pbVar10 = (byte *)(lVar13 + 0x471);
      }
    }
    bVar9 = *pbVar10;
    if (7 < bVar9) goto LAB_02cb49e8;
  }
  bVar14 = *pbVar1;
  if (7 < bVar14) {
    bVar14 = 0xff;
  }
  if (7 < bVar9) {
    bVar9 = 0xff;
  }
  if (bVar14 == bVar9) {
    local_528 = (undefined *)CONCAT44(local_528._4_4_,0xd);
    puVar17 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0xa8);
    if (((*PTR_DAT_04bc73c8 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc73c8), iVar7 != 0)) {
      *(undefined **)PTR_DAT_04bc73c0 = PTR_DAT_04bb7c30 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc73c8);
    }
    if (((puVar17 != (undefined8 *)0x0) &&
        (uVar8 = (**(code **)*puVar17)(puVar17,PTR_DAT_04bc73c0), (uVar8 & 1) != 0)) &&
       (((long *)puVar17[0x4a] != (long *)0x0 &&
        (uVar8 = (**(code **)(*(long *)puVar17[0x4a] + 0xe8))(), (uVar8 & 1) == 0)))) {
      return 0;
    }
  }
  lVar13 = param_1[0x5a];
  puVar17 = *(undefined8 **)(lVar13 + 0x230);
  plVar18 = (long *)*puVar17;
  if (plVar18 != (long *)0x0) {
    local_528 = PTR_DAT_04bc4e68 + 0x10;
    local_520 = 7;
    (**(code **)(*plVar18 + 0x18))(plVar18,&local_528);
    (**(code **)(plVar18[3] + 0x1c0))(plVar18[1]);
    lVar13 = param_1[0x5a];
    puVar17 = *(undefined8 **)(lVar13 + 0x230);
  }
  puVar5 = PTR_DAT_04bc4f00;
  uVar12 = *(uint *)(lVar13 + 0x228);
  plVar18 = (long *)puVar17[1 < uVar12];
  if (plVar18 != (long *)0x0) {
    local_520 = 0x14;
    local_528 = PTR_DAT_04bc4f00 + 0x10;
    fVar21 = (float)(int)(char)*(byte *)((long)param_1 + 0x2f4);
    if (7 < *(byte *)((long)param_1 + 0x2f4)) {
      fVar21 = -1.0;
    }
    (**(code **)(*plVar18 + 0x18))(plVar18,&local_528);
    (**(code **)(plVar18[3] + 0x158))(fVar21,plVar18[1]);
    uVar12 = *(uint *)(param_1[0x5a] + 0x228);
    puVar17 = *(undefined8 **)(param_1[0x5a] + 0x230);
  }
  lVar13 = 0x18;
  if (uVar12 < 4) {
    lVar13 = 0;
  }
  plVar18 = *(long **)((long)puVar17 + lVar13);
  if (plVar18 != (long *)0x0) {
    iVar7 = (int)param_1[0x60];
    if (iVar7 == 5) {
      uVar22 = 0x40000000;
    }
    else if (iVar7 == 7) {
      uVar22 = 0x3f800000;
    }
    else {
      uVar22 = 0x40400000;
      if (iVar7 != 6) {
        uVar22 = 0;
      }
    }
    local_528 = puVar5 + 0x10;
    local_520 = 0x14;
    (**(code **)(*plVar18 + 0x18))(plVar18,&local_528);
    (**(code **)(plVar18[3] + 0x158))(uVar22,plVar18[1]);
  }
  puVar6 = PTR_DAT_04bc0b30;
  puVar5 = PTR_DAT_04bb2bc0;
  puVar15 = PTR_DAT_04bc0bf0;
  puVar20 = PTR_DAT_04bc0a78;
  if (*pbVar1 < 8) {
    local_15c = 0;
    local_160 = 0xb;
    local_138 = local_12c;
    local_158 = 0xffffffff;
    puVar2 = PTR_DAT_04bb2bc0 + 0x10;
    local_150 = 0xffffffff00000000;
    local_148 = 0xffffffff;
    local_168 = &local_90;
    local_130 = 0x40;
    local_ed = 0;
    local_12c[0] = 0;
    local_e0 = local_d4;
    local_d8 = 0x40;
    local_95 = 0;
    local_d4[0] = 0;
    local_170 = PTR_DAT_04bb5128 + 0x10;
    puVar3 = auStack_7a;
    if (auStack_7a <= (undefined1 *)((long)&local_90 + 2U)) {
      puVar3 = (undefined1 *)((long)&local_90 + 2U);
    }
    uStack_80 = 0;
    uStack_88 = 0;
    local_82 = 0;
    local_90 = 0;
    local_140 = puVar2;
    local_e8 = puVar2;
    memset(local_168,0,(ulong)(puVar3 + (-0xe1 - (long)&local_170)) & 0xfffffffffffffffc | 2);
    FUN_01c11758(&local_170,pbVar1);
    puVar15 = PTR_DAT_04bc0bf0;
    puVar20 = PTR_DAT_04bc0a78;
    plVar19 = (long *)PTR_DAT_04bb39b0;
    local_51c = 0;
    local_520 = CONCAT22(local_520._2_2_,0x100);
    puStack_4d8 = local_4cc;
    local_514 = 0;
    puStack_480 = local_474;
    local_500 = 0;
    local_4fc = 0;
    local_4e8 = 0xffffffff;
    local_4d0 = 0x40;
    local_48d = 0;
    local_4cc[0] = 0;
    local_478 = 0x40;
    local_435 = 0;
    local_474[0] = 0;
    local_4f8 = 0xffffffff;
    uStack_4f0 = 0xffffffff00000000;
    local_510 = PTR_DAT_04bb2e00 + 0x10;
    local_418 = 0;
    puStack_398 = local_38c;
    local_38c[0] = 0;
    puStack_3f0 = local_3e4;
    local_3e4[0] = 0;
    local_414 = 0;
    local_400 = 0xffffffff;
    local_3e8 = 0x40;
    local_3a5 = 0;
    local_390 = 0x40;
    local_34d = 0;
    local_430 = 0;
    local_338 = 0;
    local_330 = 0;
    local_32c = 0;
    local_328 = 0xffffffff;
    local_320 = 0xffffffff00000000;
    local_308 = local_2fc;
    local_2fc[0] = 0;
    uStack_508 = 0;
    uStack_420 = 0;
    local_410 = 0xffffffff;
    uStack_408 = 0xffffffff00000000;
    local_318 = 0xffffffff;
    local_2b0 = local_2a4;
    local_2a4[0] = 0;
    local_300 = 0x40;
    local_2bd = 0;
    local_2a8 = 0x40;
    local_265 = 0;
    local_250 = 0;
    local_258 = 0;
    local_260 = 0;
    local_238 = 0x40;
    local_1f5 = 0;
    local_1e0 = 0x40;
    local_348 = 0;
    local_240 = local_234;
    local_234[0] = 0;
    local_1e8 = local_1dc;
    local_198 = PTR_DAT_04bc0a78 + 0x10;
    local_19d = 0;
    local_1dc[0] = 0;
    local_190 = *(int *)puVar6;
    local_18c = 0;
    local_528 = PTR_DAT_04bc0bf0 + 0x10;
    local_188 = 0;
    local_180 = 0;
    local_178 = 0;
    uVar12 = *(uint *)(param_1[0x5a] + 0x218);
    lVar13 = *(long *)(param_1[0x5a] + 0x220);
    *(int *)puVar6 = local_190 + 1;
    local_4e0 = puVar2;
    local_488 = puVar2;
    local_428 = local_510;
    local_3f8 = puVar2;
    local_3a0 = puVar2;
    local_340 = local_510;
    local_310 = puVar2;
    local_2b8 = puVar2;
    local_248 = puVar2;
    local_1f0 = puVar2;
    FUN_01bea4e8(&local_528,*(undefined8 *)(lVar13 + (ulong)(1 < uVar12) * 8),&local_170);
    FUN_01bea9c8(&local_528);
    FUN_01be9eb8(&local_528);
  }
  if ((int)param_1[0x60] == 7) {
    (**(code **)(*param_1 + 0x28))(param_1,param_1 + 0x2d);
    (**(code **)(*param_1 + 0x30))(param_1,param_1 + 0x2d);
  }
  local_4e0 = puVar5 + 0x10;
  local_51c = 0;
  local_520 = CONCAT22(local_520._2_2_,0x100);
  puStack_4d8 = local_4cc;
  local_514 = 0;
  puStack_480 = local_474;
  local_500 = 0;
  local_4fc = 0;
  local_4e8 = 0xffffffff;
  local_4d0 = 0x40;
  local_48d = 0;
  local_4cc[0] = 0;
  local_478 = 0x40;
  local_435 = 0;
  local_474[0] = 0;
  local_4f8 = 0xffffffff;
  uStack_4f0 = 0xffffffff00000000;
  local_510 = PTR_DAT_04bb2e00 + 0x10;
  local_320 = 0xffffffff00000000;
  puStack_398 = local_38c;
  local_38c[0] = 0;
  puStack_3f0 = local_3e4;
  local_3e4[0] = 0;
  local_3e8 = 0x40;
  local_390 = 0x40;
  local_300 = 0x40;
  local_2a8 = 0x40;
  local_238 = 0x40;
  local_1e0 = 0x40;
  local_198 = puVar20 + 0x10;
  local_2bd = 0;
  local_265 = 0;
  local_250 = 0;
  local_258 = 0;
  local_260 = 0;
  local_1f5 = 0;
  local_19d = 0;
  local_18c = 0;
  local_528 = puVar15 + 0x10;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  local_418 = 0;
  local_414 = 0;
  local_400 = 0xffffffff;
  local_3a5 = 0;
  local_34d = 0;
  local_430 = 0;
  local_330 = 0;
  local_32c = 0;
  local_328 = 0xffffffff;
  local_318 = 0xffffffff;
  local_348 = 0;
  local_410 = 0xffffffff;
  uStack_408 = 0xffffffff00000000;
  local_308 = local_2fc;
  local_2fc[0] = 0;
  local_234[0] = 0;
  local_1dc[0] = 0;
  local_2b0 = local_2a4;
  local_2a4[0] = 0;
  uStack_508 = 0;
  uStack_420 = 0;
  local_338 = 0;
  local_240 = local_234;
  local_1e8 = local_1dc;
  local_190 = *(int *)puVar6;
  *(int *)puVar6 = local_190 + 1;
  local_488 = local_4e0;
  local_428 = local_510;
  local_3f8 = local_4e0;
  local_3a0 = local_4e0;
  local_340 = local_510;
  local_310 = local_4e0;
  local_2b8 = local_4e0;
  local_248 = local_4e0;
  local_1f0 = local_4e0;
  FUN_01bea4e8(&local_528,**(undefined8 **)(param_1[0x5a] + 0x220),param_1);
  FUN_01bea9c8(&local_528);
  FUN_01be9eb8(&local_528);
  if ((param_2 & 1) != 0) {
    lVar13 = param_1[0x5a];
    plVar18 = *(long **)(lVar13 + 0x1b0);
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 0x50))();
      plVar18 = *(long **)(lVar13 + 0x1b0);
      (**(code **)(*plVar18 + 0x20))(plVar18,0);
      plVar16 = (long *)param_1[0x5a];
      plVar18 = (long *)plVar16[0x36];
      if (plVar18 != (long *)0x0) {
        (**(code **)(*plVar18 + 0x28))(plVar18,(int)param_1[0x60] == 7);
        (**(code **)(*plVar16 + 0xa8))(plVar16);
      }
    }
  }
  param_1[0x5d] = 0x7fc000007fc00000;
  *(undefined4 *)(param_1 + 0x5e) = 0x7fc00000;
  if ((((int)param_1[0x60] != 1) && ((int)param_1[0x60] != 5)) && ((int)param_1[0x60] != 6)) {
    *(undefined4 *)(param_1 + 0x61) = 0;
  }
  lVar13 = *plVar19;
  if (lVar13 == 0) {
LAB_02cb5118:
    if (7 < *pbVar11) {
LAB_02cb5124:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar13 = **(long **)PTR_DAT_04bb27d0;
        bVar9 = *(byte *)(lVar13 + 0x473);
        pbVar11 = PTR_DAT_04bb5038;
        if ((long)(char)bVar9 != 0xffffffffffffffff) {
          puVar4 = (uint *)(lVar13 + 0x48) + ((long)(char)bVar9 & 0xffffffffU) * 0x20;
          if (7 < bVar9) {
            puVar4 = (uint *)(lVar13 + 0x48);
          }
          if ((*puVar4 & 8) != 0) {
            pbVar11 = (byte *)(lVar13 + 0x471);
          }
        }
        bVar9 = *pbVar11;
        if (bVar9 < 8) goto LAB_02cb5194;
      }
      pbVar11 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar13 + 0x15c) != 0) {
      pbVar11 = (byte *)(lVar13 + 0x158);
    }
    if (7 < *pbVar11) {
      if ((*(int *)(lVar13 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar11 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_02cb5118;
      }
      goto LAB_02cb5124;
    }
  }
  bVar9 = *pbVar11;
  if (7 < bVar9) {
    bVar9 = 0xff;
  }
LAB_02cb5194:
  bVar14 = *(byte *)((long)param_1 + 0x2f4);
  if (7 < bVar14) {
    bVar14 = 0xff;
  }
  if (7 < bVar9) {
    bVar9 = 0xff;
  }
  *(uint *)((long)param_1 + 0x304) = -(uint)(bVar14 == bVar9);
  (**(code **)(*param_1 + 0x38))(param_1);
  *(uint *)((long)param_1 + 0x30c) = *(uint *)((long)param_1 + 0x30c) & 0xfffffffb;
  return 1;
}

