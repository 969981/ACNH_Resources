
void FUN_02eb90d4(long param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 local_528;
  undefined2 local_520;
  undefined2 uStack_51e;
  undefined4 uStack_51c;
  undefined4 uStack_518;
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
  undefined8 uStack_338;
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
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  puVar1 = PTR_DAT_04bc4e60;
  puVar9 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x12d8) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  if ((((puVar9 != (undefined8 *)0x0) &&
       (uVar5 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bc4e58), (uVar5 & 1) != 0)) &&
      (plVar10 = *(long **)(puVar9[0x45] + (ulong)(1 < *(uint *)(puVar9 + 0x44)) * 8),
      plVar10 != (long *)0x0)) && (plVar10[1] != 0)) {
    if ((*(uint *)(param_1 + 0x1360) < 10) &&
       ((1 << (ulong)(*(uint *)(param_1 + 0x1360) & 0x1f) & 0x345U) != 0)) {
      local_528 = PTR_DAT_04bc4f00 + 0x10;
      local_520 = 0x14;
      uStack_51e = 0;
      (**(code **)(*plVar10 + 0x18))(plVar10,&local_528);
      uVar12 = 0;
    }
    else {
      local_528 = PTR_DAT_04bc4f00 + 0x10;
      local_520 = 0x14;
      uStack_51e = 0;
      (**(code **)(*plVar10 + 0x18))(plVar10,&local_528);
      uVar12 = 0x3f800000;
    }
    (**(code **)(plVar10[3] + 0x158))(uVar12,plVar10[1]);
  }
  if ((9 < *(uint *)(param_1 + 0x1360)) ||
     ((1 << (ulong)(*(uint *)(param_1 + 0x1360) & 0x1f) & 0x345U) == 0)) {
    puVar9 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x12d8) + 0x3f8);
    if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    uVar5 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bc4e58);
    local_198 = PTR_DAT_04bc0a78;
    local_340 = PTR_DAT_04bb2e00;
    if ((uVar5 & 1) == 0) {
      puVar9 = (undefined8 *)0x0;
    }
    lVar11 = *(long *)(puVar9[0x43] + (ulong)(8 < *(uint *)(puVar9 + 0x42)) * 0x40);
    if (lVar11 == 0) {
      return;
    }
    local_1f0 = PTR_DAT_04bb2bc0 + 0x10;
    local_190 = *(int *)PTR_DAT_04bc0b30;
    *(int *)PTR_DAT_04bc0b30 = local_190 + 1;
    ppuVar7 = (undefined **)(param_1 + 0x2cb50);
    goto LAB_02eb970c;
  }
  puVar9 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x12d8) + 0x3f8);
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar4 != 0)) {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  uVar5 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bc4e58);
  if ((uVar5 & 1) == 0) {
    puVar9 = (undefined8 *)0x0;
  }
  lVar11 = *(long *)(puVar9[0x43] + (ulong)(1 < *(uint *)(puVar9 + 0x42)) * 8);
  if (lVar11 == 0) {
    return;
  }
  local_15c = 0;
  local_160 = 0x20;
  local_158 = 0xffffffff;
  local_150 = 0xffffffff00000000;
  local_138 = local_12c;
  local_168 = &local_90;
  local_148 = 0xffffffff;
  local_130 = 0x40;
  local_ed = 0;
  local_12c[0] = 0;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  local_e0 = local_d4;
  local_d8 = 0x40;
  local_95 = 0;
  local_d4[0] = 0;
  local_170 = PTR_DAT_04bb4e10 + 0x10;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  puVar2 = local_d4 + 0x84;
  if (local_d4 + 0x84 <= (undefined1 *)((long)&local_90 + 2)) {
    puVar2 = (undefined1 *)((long)&local_90 + 2);
  }
  local_90 = 0;
  local_140 = puVar1;
  local_e8 = puVar1;
  memset(local_168,0,(size_t)(puVar2 + (-0xe0 - (long)&local_170)));
  switch(*(undefined4 *)(param_1 + 0x1360)) {
  case 0:
    uVar5 = *(ulong *)(param_1 + 0x1718);
    puVar6 = &DAT_041692fe;
    break;
  default:
    goto switchD_02eb92fc_caseD_1;
  case 2:
    uVar5 = *(ulong *)(param_1 + 0x17e8);
    if (uVar5 != 0) {
      puVar6 = &DAT_04169b28;
      break;
    }
LAB_02eb958c:
    FUN_0080e7dc(&local_170);
    goto switchD_02eb92fc_caseD_1;
  case 6:
    uVar5 = *(ulong *)(param_1 + 0x2c758);
    if (uVar5 == 0) goto LAB_02eb958c;
    puVar6 = &DAT_041693ce;
    break;
  case 8:
    uVar5 = *(ulong *)(param_1 + 0x1398);
    if (uVar5 == 0) goto LAB_02eb958c;
    puVar6 = &DAT_04169568;
    local_528 = (undefined *)((ulong)local_528._4_4_ << 0x20);
    uVar8 = DAT_04c88ec8;
    goto LAB_02eb9570;
  case 9:
    uVar5 = *(ulong *)(param_1 + 0x1398);
    if (uVar5 == 0) goto LAB_02eb958c;
    puVar6 = &DAT_04168ffe;
  }
  local_528 = (undefined *)CONCAT44(local_528._4_4_,1);
  uVar8 = DAT_04c88ed0;
LAB_02eb9570:
  uVar3 = 0;
  if (uVar5 <= uVar8) {
    uVar3 = uVar5;
  }
  local_520 = (undefined2)uVar3;
  uStack_51e = (undefined2)(uVar3 >> 0x10);
  uStack_51c = (undefined4)(uVar3 >> 0x20);
  FUN_01c15060(&local_170,&local_528,puVar6);
switchD_02eb92fc_caseD_1:
  local_340 = PTR_DAT_04bb2e00;
  ppuVar7 = &local_170;
  local_190 = *(int *)PTR_DAT_04bc0b30;
  *(int *)PTR_DAT_04bc0b30 = local_190 + 1;
  local_1f0 = puVar1;
  local_198 = PTR_DAT_04bc0a78;
LAB_02eb970c:
  local_340 = local_340 + 0x10;
  local_198 = local_198 + 0x10;
  local_180 = 0;
  local_188 = 0;
  local_18c = 0;
  local_19d = 0;
  local_1dc[0] = 0;
  local_1e0 = 0x40;
  local_1e8 = local_1dc;
  local_1f5 = 0;
  local_234[0] = 0;
  local_238 = 0x40;
  local_240 = local_234;
  local_250 = 0;
  local_258 = 0;
  local_260 = 0;
  local_265 = 0;
  local_2a4[0] = 0;
  local_2a8 = 0x40;
  local_2b0 = local_2a4;
  local_2bd = 0;
  local_2fc[0] = 0;
  local_300 = 0x40;
  local_308 = local_2fc;
  local_318 = 0xffffffff;
  local_320 = 0xffffffff00000000;
  local_328 = 0xffffffff;
  local_32c = 0;
  local_330 = 0;
  uStack_338 = 0;
  local_348 = 0;
  local_34d = 0;
  local_38c[0] = 0;
  local_390 = 0x40;
  puStack_398 = local_38c;
  local_3a5 = 0;
  local_3e4[0] = 0;
  local_3e8 = 0x40;
  puStack_3f0 = local_3e4;
  local_400 = 0xffffffff;
  uStack_408 = 0xffffffff00000000;
  local_410 = 0xffffffff;
  local_414 = 0;
  local_418 = 0;
  uStack_420 = 0;
  local_430 = 0;
  local_435 = 0;
  local_474[0] = 0;
  local_478 = 0x40;
  puStack_480 = local_474;
  local_48d = 0;
  local_4cc[0] = 0;
  local_4d0 = 0x40;
  puStack_4d8 = local_4cc;
  local_4e8 = 0xffffffff;
  uStack_4f0 = 0xffffffff00000000;
  local_4f8 = 0xffffffff;
  local_4fc = 0;
  local_500 = 0;
  uStack_508 = 0;
  local_514 = 0;
  uStack_518 = 0;
  uStack_51c = 0;
  local_520 = 0x100;
  local_528 = PTR_DAT_04bc0bf0 + 0x10;
  local_178 = 0;
  local_510 = local_340;
  local_4e0 = local_1f0;
  local_488 = local_1f0;
  local_428 = local_340;
  local_3f8 = local_1f0;
  local_3a0 = local_1f0;
  local_310 = local_1f0;
  local_2b8 = local_1f0;
  local_248 = local_1f0;
  FUN_01bea4e8(&local_528,lVar11,ppuVar7);
  FUN_01bea9c8(&local_528);
  FUN_01be9eb8(&local_528);
  return;
}

