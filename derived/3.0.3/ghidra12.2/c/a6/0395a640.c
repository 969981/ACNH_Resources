
void FUN_0395a640(long param_1,long param_2)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 extraout_x1;
  long lVar9;
  int iVar10;
  undefined4 uVar11;
  long lVar12;
  int aiStack_384 [3];
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
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
  undefined1 *puStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined1 *puStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined1 *puStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined1 *local_170;
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
  undefined1 *local_f0;
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
  undefined8 local_78;
  undefined1 *local_70;
  
  lVar7 = param_2;
  if (param_2 == 0) {
    lVar12 = *(long *)PTR_DAT_04bb2698;
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),0,0);
    plVar1 = (long *)(lVar12 + 8);
    if (lVar7 != 0) {
      plVar1 = (long *)(lVar7 + 0xa8);
    }
    lVar7 = *plVar1;
  }
  *(undefined8 *)(param_1 + 0x548) = 0;
  *(undefined8 *)(param_1 + 0x520) = 0;
  *(undefined8 *)(param_1 + 0x528) = 0;
  *(undefined8 *)(param_1 + 0x530) = 0;
  plVar1 = (long *)(param_1 + 0x520);
  *(undefined8 *)(param_1 + 0x538) = 0;
  puVar6 = PTR_DAT_04bd0fa8;
  uVar8 = *(undefined8 *)PTR_DAT_04bd0fa8;
  *(byte *)(param_1 + 0x540) = *(byte *)(param_1 + 0x540) & 0xfe;
  *(undefined2 *)(param_1 + 0x542) = 0;
  FUN_038f8590(uVar8,param_1 + 0x518,lVar7,0x300,8,0);
  *(undefined2 *)(param_1 + 0x542) = 0;
  puVar5 = PTR_DAT_04bb2cd8;
  local_150 = 0;
  local_d0 = 0;
  local_168 = 0x3f000000bf000000;
  local_128 = 0xbf000000bf000000;
  local_148 = 0x3f0000003f000000;
  local_108 = 0xbf0000003f000000;
  local_368 = 0x3f000000bf000000;
  local_360 = 0xbf8000003f000000;
  local_348 = 0x3f000000bf000000;
  uStack_340 = 0xbf800000bf000000;
  lVar7 = 0x1c;
  local_178 = 0x3f800000;
  local_160 = 0xbf000000;
  local_140 = 0xbf000000;
  local_130 = 0x3f800000;
  local_120 = 0xbf000000;
  local_100 = 0xbf000000;
  local_e8 = 0x3f0000003f000000;
  local_c8 = 0x3f000000bf000000;
  local_b0 = 0x3f800000;
  local_a8 = 0xbf0000003f000000;
  local_88 = 0xbf000000bf000000;
  local_328 = 0xbf000000bf000000;
  uStack_320 = 0xbf8000003f000000;
  local_110 = 0x3f80000000000000;
  local_d8 = 0x3f80000000000000;
  local_b8 = 0x3f80000000000000;
  local_98 = 0x3f80000000000000;
  local_90 = 0x3f80000000000000;
  local_78 = 0x3f80000000000000;
  local_308 = 0xbf000000bf000000;
  uStack_300 = 0xbf800000bf000000;
  local_170 = &DAT_3f8000003f800000;
  local_f0 = &DAT_3f8000003f800000;
  local_2c8 = 0x3f0000003f000000;
  uStack_2c0 = 0x3f8000003f000000;
  local_288 = 0xbf0000003f000000;
  uStack_280 = 0x3f8000003f000000;
  local_2e8 = 0x3f0000003f000000;
  uStack_2e0 = 0x3f800000bf000000;
  local_2a8 = 0xbf0000003f000000;
  uStack_2a0 = 0x3f800000bf000000;
  local_e0 = 0x3f000000;
  local_c0 = 0x3f000000;
  local_a0 = 0x3f000000;
  local_80 = 0x3f000000;
  local_258 = 0xbf800000;
  uStack_250 = 0;
  local_238 = 0xbf800000;
  uStack_230 = 0x3f800000;
  local_218 = 0xbf800000;
  uStack_210 = 0x3f80000000000000;
  local_1f8 = 0xbf800000;
  puStack_1f0 = &DAT_3f8000003f800000;
  local_158 = 0xbf80000000000000;
  local_138 = 0xbf80000000000000;
  local_118 = 0xbf80000000000000;
  local_f8 = 0xbf80000000000000;
  local_358 = 0;
  local_350 = 0;
  local_338 = 0;
  uStack_330 = 0x3f800000;
  local_318 = 0;
  uStack_310 = 0x3f80000000000000;
  local_2f8 = 0;
  puStack_2f0 = &DAT_3f8000003f800000;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2b8 = 0;
  uStack_2b0 = 0x3f800000;
  local_298 = 0;
  uStack_290 = 0x3f80000000000000;
  local_278 = 0;
  puStack_270 = &DAT_3f8000003f800000;
  local_268 = 0xbf0000003f000000;
  uStack_260 = 0x3f000000;
  local_248 = 0xbf000000bf000000;
  uStack_240 = 0x3f000000;
  local_228 = 0xbf0000003f000000;
  uStack_220 = 0xbf000000;
  local_208 = 0xbf000000bf000000;
  uStack_200 = 0xbf000000;
  local_1e8 = 0x3f0000003f000000;
  uStack_1e0 = 0x3f000000;
  local_1d8 = 0x3f800000;
  uStack_1d0 = 0;
  local_1c8 = 0x3f0000003f000000;
  uStack_1c0 = 0xbf000000;
  local_1b8 = 0x3f800000;
  uStack_1b0 = 0x3f800000;
  local_1a8 = 0x3f000000bf000000;
  uStack_1a0 = 0x3f000000;
  local_198 = 0x3f800000;
  uStack_190 = 0x3f80000000000000;
  local_188 = 0x3f000000bf000000;
  uStack_180 = 0xbf000000;
  local_70 = &DAT_3f8000003f800000;
  do {
    lVar12 = (**(code **)puVar5)(*(undefined8 *)(param_1 + 0x530));
    lVar9 = 0;
    if (*(long *)(param_1 + 0x538) != 0) {
      lVar9 = *plVar1 - *(long *)(*(long *)(param_1 + 0x538) + 0x10);
    }
    lVar12 = lVar12 + lVar9 + lVar7;
    *(undefined4 *)(lVar12 + -0x1c) = *(undefined4 *)((long)aiStack_384 + lVar7);
    *(undefined4 *)(lVar12 + -0x18) = *(undefined4 *)((long)aiStack_384 + lVar7 + 4);
    *(undefined4 *)(lVar12 + -0x14) = *(undefined4 *)((long)aiStack_384 + lVar7 + 8);
    lVar12 = (**(code **)puVar5)(*(undefined8 *)(param_1 + 0x530));
    lVar9 = 0;
    if (*(long *)(param_1 + 0x538) != 0) {
      lVar9 = *plVar1 - *(long *)(*(long *)(param_1 + 0x538) + 0x10);
    }
    lVar12 = lVar12 + lVar9 + lVar7;
    *(undefined4 *)(lVar12 + -0x10) = *(undefined4 *)((long)aiStack_384 + lVar7 + 0xc);
    *(undefined4 *)(lVar12 + -0xc) = *(undefined4 *)((long)aiStack_384 + lVar7 + 0x10);
    *(undefined4 *)(lVar12 + -8) = *(undefined4 *)((long)&uStack_370 + lVar7);
    lVar9 = (**(code **)puVar5)(*(undefined8 *)(param_1 + 0x530));
    lVar12 = 0;
    if (*(long *)(param_1 + 0x538) != 0) {
      lVar12 = *plVar1 - *(long *)(*(long *)(param_1 + 0x538) + 0x10);
    }
    puVar2 = (undefined4 *)(lVar9 + lVar12 + lVar7);
    puVar2[-1] = *(undefined4 *)((long)&uStack_370 + lVar7 + 4);
    puVar4 = (undefined4 *)((long)&local_368 + lVar7);
    lVar7 = lVar7 + 0x20;
    *puVar2 = *puVar4;
  } while (lVar7 != 0x31c);
  local_378 = *(long *)(param_1 + 0x530);
  aiStack_384[1] = 0;
  if (*(long *)(param_1 + 0x538) != 0) {
    aiStack_384[1] = *(int *)plVar1 - *(int *)(*(long *)(param_1 + 0x538) + 0x10);
  }
  aiStack_384[2] = 0;
  if (local_378 != 0) {
    aiStack_384[2] = *(undefined4 *)(local_378 + 0x104);
  }
  uStack_370 = param_1 + 0x518;
  FUN_0390ebc0(param_1 + 0x5c0,aiStack_384 + 1,0x20,0x300);
  *(undefined8 *)(param_1 + 0x5f8) = 0x22;
  *(undefined8 *)(param_1 + 0x604) = 0xc00000022;
  *(undefined2 *)(param_1 + 0x600) = 1;
  *(undefined2 *)(param_1 + 0x60c) = 1;
  *(undefined8 *)(param_1 + 0x610) = 0x1800000016;
  *(undefined2 *)(param_1 + 0x618) = 1;
  lVar7 = param_2;
  if (param_2 == 0) {
    lVar12 = *(long *)PTR_DAT_04bb2698;
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),extraout_x1,0);
    plVar1 = (long *)(lVar12 + 8);
    if (lVar7 != 0) {
      plVar1 = (long *)(lVar7 + 0xa8);
    }
    lVar7 = *plVar1;
  }
  uVar8 = *(undefined8 *)puVar6;
  *(undefined8 *)(param_1 + 0x580) = 0;
  *(undefined8 *)(param_1 + 0x558) = 0;
  *(undefined8 *)(param_1 + 0x560) = 0;
  *(undefined8 *)(param_1 + 0x568) = 0;
  *(undefined8 *)(param_1 + 0x570) = 0;
  *(undefined2 *)(param_1 + 0x57a) = 0;
  *(byte *)(param_1 + 0x578) = *(byte *)(param_1 + 0x578) & 0xfe;
  FUN_038f8590(uVar8,param_1 + 0x550,lVar7,0x48,4,0);
  lVar7 = 0;
  *(undefined2 *)(param_1 + 0x57a) = 0;
  do {
    uVar3 = *(undefined2 *)((long)&DAT_041b3bba + lVar7);
    lVar9 = (**(code **)puVar5)(*(undefined8 *)(param_1 + 0x568));
    lVar12 = 0;
    if (*(long *)(param_1 + 0x570) != 0) {
      lVar12 = *(long *)(param_1 + 0x558) - *(long *)(*(long *)(param_1 + 0x570) + 0x10);
    }
    *(undefined2 *)(lVar9 + lVar12 + lVar7) = uVar3;
    lVar7 = lVar7 + 2;
  } while (lVar7 != 0x48);
  local_360 = *(long *)(param_1 + 0x568);
  iVar10 = 0;
  if (*(long *)(param_1 + 0x570) != 0) {
    iVar10 = *(int *)(param_1 + 0x558) - *(int *)(*(long *)(param_1 + 0x570) + 0x10);
  }
  if (local_360 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined4 *)(local_360 + 0x104);
  }
  local_368 = CONCAT44(uVar11,iVar10);
  local_358 = param_1 + 0x550;
  FUN_03901480(param_1 + 0x6e0,&local_368,1,0x24);
  if (param_2 == 0) {
    lVar12 = *(long *)PTR_DAT_04bb2698;
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar1 = (long *)(lVar12 + 8);
    if (lVar7 != 0) {
      plVar1 = (long *)(lVar7 + 0xa8);
    }
    param_2 = *plVar1;
  }
  uVar8 = *(undefined8 *)puVar6;
  *(undefined8 *)(param_1 + 0x5b8) = 0;
  *(undefined8 *)(param_1 + 0x590) = 0;
  *(undefined8 *)(param_1 + 0x598) = 0;
  *(undefined8 *)(param_1 + 0x5a0) = 0;
  *(undefined8 *)(param_1 + 0x5a8) = 0;
  *(undefined2 *)(param_1 + 0x5b2) = 0;
  *(byte *)(param_1 + 0x5b0) = *(byte *)(param_1 + 0x5b0) & 0xfe;
  FUN_038f8590(uVar8,param_1 + 0x588,param_2,0x60,4,0);
  lVar7 = 0;
  *(undefined2 *)(param_1 + 0x5b2) = 0;
  do {
    uVar3 = *(undefined2 *)((long)&DAT_041b3c02 + lVar7);
    lVar9 = (**(code **)puVar5)(*(undefined8 *)(param_1 + 0x5a0));
    lVar12 = 0;
    if (*(long *)(param_1 + 0x5a8) != 0) {
      lVar12 = *(long *)(param_1 + 0x590) - *(long *)(*(long *)(param_1 + 0x5a8) + 0x10);
    }
    *(undefined2 *)(lVar9 + lVar12 + lVar7) = uVar3;
    lVar7 = lVar7 + 2;
  } while (lVar7 != 0x60);
  local_360 = *(long *)(param_1 + 0x5a0);
  iVar10 = 0;
  if (*(long *)(param_1 + 0x5a8) != 0) {
    iVar10 = *(int *)(param_1 + 0x590) - *(int *)(*(long *)(param_1 + 0x5a8) + 0x10);
  }
  if (local_360 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined4 *)(local_360 + 0x104);
  }
  local_368 = CONCAT44(uVar11,iVar10);
  local_358 = param_1 + 0x588;
  FUN_03901480(param_1 + 0x740,&local_368,1,0x30);
  *(undefined4 *)(param_1 + 0x74c) = 1;
  return;
}

