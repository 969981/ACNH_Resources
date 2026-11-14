
void FUN_01be1e04(long param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  undefined **ppuVar7;
  char local_350 [8];
  undefined1 auStack_348 [2];
  undefined2 local_346;
  undefined4 local_344;
  undefined4 local_340;
  undefined1 local_33c [4];
  undefined *local_338;
  undefined8 *puStack_330;
  undefined4 local_328;
  undefined4 local_320;
  undefined8 local_314;
  undefined **local_308;
  undefined1 *puStack_300;
  undefined4 local_2f8;
  undefined1 auStack_2f4 [68];
  undefined **local_2b0;
  undefined1 *puStack_2a8;
  undefined4 local_2a0;
  undefined1 auStack_29c [68];
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
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined1 auStack_1d8 [4];
  undefined4 uStack_1d4;
  undefined1 auStack_1d0 [8];
  undefined *local_1c8;
  undefined8 *puStack_1c0;
  undefined4 local_1b8;
  undefined1 local_1b4;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined4 local_1a0;
  undefined **local_198;
  undefined1 *puStack_190;
  undefined4 local_188;
  undefined1 local_184 [63];
  undefined1 local_145;
  undefined **local_140;
  undefined1 *local_138;
  undefined4 local_130;
  undefined1 local_12c [63];
  undefined1 local_ed;
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
  undefined8 local_70;
  undefined1 auStack_68 [8];
  
  local_350[0] = '\x01';
  memset(auStack_348,0,0x260);
  local_328 = 0x40;
  local_320 = 0xffffffff;
  puStack_300 = auStack_2f4;
  local_314 = 0xffffffffffffffff;
  puStack_2a8 = auStack_29c;
  local_2f8 = 0x40;
  local_2a0 = 0x40;
  local_308 = &PTR_LAB_048fb9f8;
  local_2b0 = &PTR_LAB_048fb9f8;
  local_1c8 = PTR_DAT_04bb6b18 + 0x10;
  puVar3 = auStack_1d8;
  if (auStack_1d8 <= (undefined1 *)((long)&local_258 + 2U)) {
    puVar3 = (undefined1 *)((long)&local_258 + 2U);
  }
  local_258 = 0;
  uStack_250 = 0;
  local_248 = 0;
  uStack_240 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_338 = local_1c8;
  puStack_330 = &local_258;
  memset(&local_258,0,(size_t)(puVar3 + (-0xe0 - (long)&local_338)));
  auStack_1d0._0_5_ = 0;
  local_1b0 = 0xffffffff;
  uStack_1a8 = 0xffffffff00000000;
  puStack_1c0 = &local_e8;
  puStack_190 = local_184;
  local_184[0] = 0;
  local_198 = &PTR_LAB_048fb9f8;
  puVar3 = auStack_68;
  if (auStack_68 <= (undefined1 *)((long)&local_e8 + 2U)) {
    puVar3 = (undefined1 *)((long)&local_e8 + 2U);
  }
  local_138 = local_12c;
  local_12c[0] = 0;
  local_1b8 = 0x40;
  local_1b4 = 0;
  local_1a0 = 0xffffffff;
  local_188 = 0x40;
  local_145 = 0;
  local_130 = 0x40;
  local_ed = 0;
  local_140 = &PTR_LAB_048fb9f8;
  _auStack_1d8 = 0;
  uStack_1d4._1_3_ = 0;
  local_70 = 0;
  local_78 = 0;
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
  memset(puStack_1c0,0,(size_t)(puVar3 + (-0xe0 - (long)&local_1c8)));
  FUN_01be2094(local_350,param_2,param_3);
  if ((param_4 == 1) || ((param_4 == 0 && ((param_5 & 1) != 0)))) {
    *(undefined2 *)(param_1 + 2) = local_346;
    *(undefined4 *)(param_1 + 4) = local_344;
    *(undefined4 *)(param_1 + 8) = local_340;
    *(undefined1 *)(param_1 + 0xc) = local_33c[0];
    pcVar5 = *(code **)(*(long *)(param_1 + 0x10) + 0x28);
    ppuVar7 = &local_338;
  }
  else {
    bVar4 = local_350[0] != '\0';
    puVar1 = (undefined2 *)(auStack_1d8 + 2);
    if (bVar4) {
      puVar1 = &local_346;
    }
    ppuVar7 = &local_1c8;
    if (bVar4) {
      ppuVar7 = &local_338;
    }
    *(undefined2 *)(param_1 + 2) = *puVar1;
    puVar2 = &uStack_1d4;
    if (bVar4) {
      puVar2 = &local_344;
    }
    *(undefined4 *)(param_1 + 4) = *puVar2;
    puVar2 = (undefined4 *)auStack_1d0;
    if (bVar4) {
      puVar2 = &local_340;
    }
    *(undefined4 *)(param_1 + 8) = *puVar2;
    puVar3 = auStack_1d0 + 4;
    if (bVar4) {
      puVar3 = local_33c;
    }
    *(undefined1 *)(param_1 + 0xc) = *puVar3;
    pcVar5 = *(code **)(*(long *)(param_1 + 0x10) + 0x28);
  }
  plVar6 = (long *)(param_1 + 0x10);
  (*pcVar5)(plVar6,ppuVar7);
  (**(code **)(*plVar6 + 0x30))(plVar6,ppuVar7);
  return;
}

