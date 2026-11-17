
void FUN_02fcddf0(long *param_1,long param_2,long param_3,char *param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  byte bVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  uint *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  byte *pbVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined **local_4e8;
  undefined **ppuStack_4e0;
  undefined *local_4c8;
  undefined *puStack_4c0;
  undefined *local_4b8;
  char *pcStack_4b0;
  undefined *local_4a8;
  undefined1 *local_4a0;
  undefined4 local_498;
  undefined1 local_494 [63];
  undefined1 local_455;
  long local_450;
  undefined *local_448;
  undefined4 local_440;
  undefined4 local_43c;
  undefined *local_438;
  undefined1 *puStack_430;
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
  undefined1 *puStack_3a8;
  undefined4 local_3a0;
  undefined1 local_39c [63];
  undefined1 local_35d;
  undefined1 local_358 [8];
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
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
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined *local_258;
  undefined8 *local_250;
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
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 auStack_78 [8];
  
  if (param_2 == 0) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  if (*param_4 == '\0') {
    if (*(short *)(param_2 + 0x282) == 0) {
      return;
    }
    *(undefined2 *)(param_2 + 0x282) = 0;
    FUN_0344865c(param_2 + 0x290,0);
    FUN_031044f0(param_2);
    return;
  }
  if (*(short *)(param_2 + 0x282) != *(short *)(param_4 + 0x36e)) {
    *(short *)(param_2 + 0x282) = *(short *)(param_4 + 0x36e);
    FUN_0344865c(param_2 + 0x290);
    FUN_031044f0(param_2);
  }
  FUN_03103ca8(param_2,param_4);
  pbVar15 = PTR_DAT_04bc4e60;
  puVar10 = PTR_DAT_04bb43c0;
  puVar12 = (uint *)(param_4 + 0xc0);
  local_440 = *puVar12;
  local_4e8 = *(undefined ***)puVar12;
  if ((short)*puVar12 == -2) {
    puVar13 = (undefined8 *)**(long **)(param_3 + 0x3f8);
    if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    uVar7 = (**(code **)*puVar13)(puVar13,PTR_DAT_04bc4e58);
    if ((uVar7 & 1) == 0) {
      puVar13 = (undefined8 *)0x0;
    }
    lVar9 = 0x28;
    if (*(uint *)(puVar13 + 0x44) < 6) {
      lVar9 = 0;
    }
    plVar14 = *(long **)(puVar13[0x45] + lVar9);
    local_448 = PTR_DAT_04bc4e68 + 0x10;
    local_440 = 7;
    (**(code **)(*plVar14 + 0x18))(plVar14,&local_448);
    (**(code **)(plVar14[3] + 0x1c0))(plVar14[1]);
    goto LAB_02fcdf20;
  }
  local_448 = PTR_DAT_04bc0510 + 0x10;
  local_438 = (undefined *)0x0;
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  local_43c = *(undefined4 *)(param_4 + 0xc4);
  uVar4 = FUN_0277d6c4(&local_440);
  if (*(long *)puVar10 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar9 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(&local_4e8);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if (uVar4 < *(uint *)(lVar9 + 0x1d8)) {
        puVar10 = *(undefined **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8);
        if (puVar10 != (undefined *)0x0) {
          local_438 = puVar10;
        }
      }
    }
  }
  uVar7 = FUN_01b032d0(&local_448);
  uVar4 = local_440 >> 0x18 & 3;
  if ((uVar7 & 1) == 0) {
    uVar4 = 0;
  }
  local_4a8 = (undefined *)CONCAT44(local_4a8._4_4_,uVar4);
  uVar7 = FUN_01b032d0(&local_448);
  bVar8 = local_440._3_1_ >> 2 & 0xf;
  if ((uVar7 & 1) == 0) {
    bVar8 = 1;
  }
  if ((int)local_4a8 == 3) {
    if (bVar8 == 0xf) {
      iVar6 = 1;
      goto LAB_02fce4cc;
    }
    iVar6 = FUN_01b03610(bVar8);
    local_4b8 = (undefined *)CONCAT44(local_4b8._4_4_,iVar6);
    if (iVar6 == 0) {
      iVar5 = 6;
      if (bVar8 != 10) {
        iVar5 = 3;
      }
      iVar6 = 5;
      if (bVar8 != 0xb) {
        iVar6 = iVar5;
      }
      goto LAB_02fce4cc;
    }
    local_4c8 = (undefined *)CONCAT44(local_4c8._4_4_,4);
    uVar7 = FUN_01b032d0(&local_448);
    if ((uVar7 & 1) == 0) {
      iVar5 = 0;
    }
    else {
      uVar7 = FUN_01b032d0(&local_448);
      iVar5 = 0;
      if (((uVar7 & 1) != 0) && ((local_440._3_1_ & 3) == 3)) {
        uVar7 = FUN_01b032d0(&local_448);
        bVar8 = local_440._3_1_ >> 2 & 0xf;
        if ((uVar7 & 1) == 0) {
          bVar8 = 1;
        }
        iVar5 = FUN_01b03610(bVar8);
      }
    }
  }
  else {
    if (((int)local_4a8 == 2) || (iVar6 = 0, (int)local_4a8 == 1)) {
      iVar6 = (int)local_4a8;
    }
LAB_02fce4cc:
    iVar5 = 0;
    local_4c8 = (undefined *)CONCAT44(local_4c8._4_4_,iVar6);
  }
  puVar13 = (undefined8 *)**(long **)(param_3 + 0x3f8);
  if (((*pbVar15 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar6 != 0)) {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  puVar10 = PTR_DAT_04bc4e58;
  uVar7 = (**(code **)*puVar13)(puVar13,PTR_DAT_04bc4e58);
  if ((uVar7 & 1) == 0) {
    puVar13 = (undefined8 *)0x0;
  }
  lVar9 = 0x30;
  if (*(uint *)(puVar13 + 0x44) < 7) {
    lVar9 = 0;
  }
  plVar14 = *(long **)(puVar13[0x45] + lVar9);
  if (plVar14 == (long *)0x0) {
LAB_02fce5c0:
    if ((uint)local_4c8 == 1) {
      uVar4 = FUN_01b036fc(&local_448);
      plVar14 = (long *)**(undefined8 **)(*(long *)(param_3 + 0x5a0) + 0x230);
      if ((plVar14 != (long *)0x0) && (uVar4 < 0x11)) {
        local_4b8 = (undefined *)CONCAT44(local_4b8._4_4_,uVar4);
        local_4a8 = PTR_DAT_04bc4f00 + 0x10;
        local_4a0 = (undefined1 *)CONCAT44(local_4a0._4_4_,0x14);
        (**(code **)(*plVar14 + 0x18))(plVar14,&local_4a8);
        (**(code **)(plVar14[3] + 0x158))((float)(int)uVar4,plVar14[1]);
      }
    }
  }
  else {
    uVar17 = 0;
    if (6 < (uint)local_4c8) {
LAB_02fce57c:
      local_4a8 = PTR_DAT_04bc4f00 + 0x10;
      local_4a0 = (undefined1 *)CONCAT44(local_4a0._4_4_,0x14);
      (**(code **)(*plVar14 + 0x18))(plVar14,&local_4a8);
      (**(code **)(plVar14[3] + 0x158))(uVar17,plVar14[1]);
      goto LAB_02fce5c0;
    }
    if ((uint)local_4c8 == 1) {
      uVar17 = 0x3f800000;
      goto LAB_02fce57c;
    }
    if ((uint)local_4c8 != 4) goto LAB_02fce57c;
    if (iVar5 - 1U < 3) {
      uVar16 = 0x40400000;
      if (iVar5 != 1) {
        uVar16 = 0x40800000;
      }
      uVar17 = 0x40000000;
      if (iVar5 != 2) {
        uVar17 = uVar16;
      }
      goto LAB_02fce57c;
    }
  }
  puVar13 = (undefined8 *)**(undefined8 **)(param_3 + 0x3f8);
  if ((short)*puVar12 == -2) {
    if (((*pbVar15 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar6 != 0)) {
      *(undefined **)puVar10 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    if ((puVar13 == (undefined8 *)0x0) ||
       (uVar7 = (**(code **)*puVar13)(puVar13,PTR_DAT_04bc4e58), (uVar7 & 1) == 0))
    goto LAB_02fcdf20;
    lVar11 = puVar13[0x45];
    lVar9 = 0x28;
    if (*(uint *)(puVar13 + 0x44) < 6) {
      lVar9 = 0;
    }
  }
  else {
    if (((*pbVar15 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar6 != 0)) {
      *(undefined **)puVar10 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    if ((puVar13 == (undefined8 *)0x0) ||
       (uVar7 = (**(code **)*puVar13)(puVar13,PTR_DAT_04bc4e58), (uVar7 & 1) == 0))
    goto LAB_02fcdf20;
    lVar11 = puVar13[0x45];
    lVar9 = (ulong)(4 < *(uint *)(puVar13 + 0x44)) << 5;
  }
  plVar14 = *(long **)(lVar11 + lVar9);
  if ((plVar14 != (long *)0x0) && (plVar14[1] != 0)) {
    local_4a8 = PTR_DAT_04bc4e68 + 0x10;
    local_4a0 = (undefined1 *)CONCAT44(local_4a0._4_4_,1);
    (**(code **)(*plVar14 + 0x18))(plVar14,&local_4a8);
    (**(code **)(plVar14[3] + 400))(0x3f800000,plVar14[1]);
  }
LAB_02fcdf20:
  if ((short)*puVar12 != -2) {
    local_440 = 0;
    local_424 = 0;
    local_428 = 0x80;
    puStack_400 = local_3f4;
    local_420 = 0xffffffff;
    uStack_418 = 0xffffffff00000000;
    local_448 = PTR_DAT_04bc0ce0 + 0x10;
    puStack_430 = local_358;
    local_410 = 0xffffffff;
    local_3f8 = 0x40;
    local_3b5 = 0;
    local_3f4[0] = 0;
    puVar10 = PTR_DAT_04bb2bc0 + 0x10;
    puStack_3a8 = local_39c;
    local_3a0 = 0x40;
    local_35d = 0;
    local_39c[0] = 0;
    puVar1 = PTR_DAT_04bb6b38 + 0x10;
    ppuVar2 = &local_258;
    if (&local_258 <= local_358 + 2) {
      ppuVar2 = (undefined **)(local_358 + 2);
    }
    local_260 = 0;
    local_268 = 0;
    local_270 = 0;
    local_278 = 0;
    local_280 = 0;
    local_288 = 0;
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
    local_2f8 = 0;
    uStack_2f0 = 0;
    local_308 = 0;
    uStack_300 = 0;
    local_318 = 0;
    uStack_310 = 0;
    local_328 = 0;
    uStack_320 = 0;
    local_338 = 0;
    uStack_330 = 0;
    local_348 = 0;
    uStack_340 = 0;
    local_358 = (undefined1  [8])0x0;
    uStack_350 = 0;
    local_438 = puVar1;
    local_408 = puVar10;
    local_3b0 = puVar10;
    memset(puStack_430,0,(long)ppuVar2 + (-0xe0 - (long)&local_438));
    pbVar15 = PTR_DAT_04bc4e60;
    local_244 = 0;
    local_248 = 0x80;
    local_250 = &local_178;
    local_220 = local_214;
    local_214[0] = 0;
    local_1c8 = local_1bc;
    local_1bc[0] = 0;
    local_240 = 0xffffffff;
    puVar3 = auStack_78;
    if (auStack_78 <= (undefined1 *)((long)&local_178 + 2U)) {
      puVar3 = (undefined1 *)((long)&local_178 + 2U);
    }
    local_238 = 0xffffffff00000000;
    local_230 = 0xffffffff;
    local_218 = 0x40;
    local_1d5 = 0;
    local_1c0 = 0x40;
    local_17d = 0;
    local_80 = 0;
    local_88 = 0;
    local_90 = 0;
    local_98 = 0;
    local_a0 = 0;
    local_a8 = 0;
    local_b0 = 0;
    local_b8 = 0;
    local_c0 = 0;
    local_c8 = 0;
    local_d0 = 0;
    local_d8 = 0;
    local_e0 = 0;
    local_e8 = 0;
    local_f0 = 0;
    local_f8 = 0;
    local_100 = 0;
    local_108 = 0;
    local_110 = 0;
    local_118 = 0;
    local_120 = 0;
    local_128 = 0;
    local_130 = 0;
    local_138 = 0;
    local_140 = 0;
    local_148 = 0;
    local_150 = 0;
    local_158 = 0;
    local_160 = 0;
    local_168 = 0;
    local_170 = 0;
    local_178 = 0;
    local_258 = puVar1;
    local_228 = puVar10;
    local_1d0 = puVar10;
    memset(local_250,0,(size_t)(puVar3 + (-0xe0 - (long)&local_258)));
    FUN_01c0bafc(&local_448,puVar12,PTR_DAT_04bb2df0);
    puVar13 = (undefined8 *)**(long **)(param_3 + 0x3f8);
    if (((*pbVar15 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    uVar7 = (**(code **)*puVar13)(puVar13,PTR_DAT_04bc4e58);
    if ((uVar7 & 1) == 0) {
      puVar13 = (undefined8 *)0x0;
    }
    lVar9 = *(long *)(puVar13[0x43] + (ulong)(1 < *(uint *)(puVar13 + 0x42)) * 8);
    if (lVar9 != 0) {
      local_455 = 0;
      local_494[0] = 0;
      local_4a0 = local_494;
      local_498 = 0x40;
      local_4a8 = PTR_DAT_04bb2bc0 + 0x10;
      local_4c8 = PTR_DAT_04bb2020 + 0x10;
      pcStack_4b0 = "MsgCardView";
      puStack_4c0 = &DAT_040715bc;
      ppuStack_4e0 = &local_448;
      local_4e8 = &PTR_LAB_04aee098;
      local_4b8 = local_4c8;
      local_450 = lVar9;
      FUN_034630a0(&local_4a8,&local_4b8,&local_4c8,&local_4e8);
    }
  }
  puVar13 = (undefined8 *)**(undefined8 **)(param_3 + 0x3f8);
  if (((*pbVar15 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar6 != 0)) {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  if ((((puVar13 != (undefined8 *)0x0) &&
       (uVar7 = (**(code **)*puVar13)(puVar13,PTR_DAT_04bc4e58), (uVar7 & 1) != 0)) &&
      (plVar14 = *(long **)(puVar13[0x45] + (ulong)(8 < *(uint *)(puVar13 + 0x44)) * 0x40),
      plVar14 != (long *)0x0)) && (plVar14[1] != 0)) {
    local_448 = PTR_DAT_04bc4f00 + 0x10;
    local_440 = 0x14;
    (**(code **)(*plVar14 + 0x18))(plVar14,&local_448);
    (**(code **)(plVar14[3] + 0x158))(0,plVar14[1]);
  }
  (**(code **)(*param_1 + 0x10))(param_1,param_3,param_4);
  return;
}

