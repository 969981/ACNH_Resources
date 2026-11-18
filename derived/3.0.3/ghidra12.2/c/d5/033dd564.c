
void FUN_033dd564(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  float *pfVar10;
  long lVar11;
  float *pfVar12;
  undefined8 *puVar13;
  long *plVar14;
  float fVar15;
  undefined4 uVar16;
  undefined *local_440;
  undefined *puStack_438;
  undefined *local_430;
  undefined4 local_428;
  undefined8 local_424;
  undefined4 local_41c;
  undefined *local_418;
  undefined8 uStack_410;
  undefined4 local_408;
  undefined1 local_404;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined4 local_3f0;
  undefined *local_3e8;
  undefined1 *puStack_3e0;
  undefined4 local_3d8;
  undefined1 local_3d4 [63];
  undefined1 local_395;
  undefined *local_390;
  undefined1 *puStack_388;
  undefined4 local_380;
  undefined1 local_37c [63];
  undefined1 local_33d;
  undefined8 local_338;
  undefined *local_330;
  undefined8 uStack_328;
  undefined4 local_320;
  undefined1 local_31c;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined4 local_308;
  undefined *local_300;
  undefined1 *puStack_2f8;
  undefined4 local_2f0;
  undefined1 local_2ec [63];
  undefined1 local_2ad;
  undefined *local_2a8;
  undefined1 *puStack_2a0;
  undefined4 local_298;
  undefined1 local_294 [63];
  undefined1 local_255;
  undefined8 local_250;
  undefined *local_248;
  undefined8 uStack_240;
  undefined4 local_238;
  undefined1 local_234;
  undefined8 local_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined *local_218;
  undefined1 *local_210;
  undefined4 local_208;
  undefined1 local_204 [63];
  undefined1 local_1c5;
  undefined *local_1c0;
  undefined1 *local_1b8;
  undefined4 local_1b0;
  undefined1 local_1ac [63];
  undefined1 local_16d;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined *local_150;
  undefined1 *local_148;
  undefined4 local_140;
  undefined1 local_13c [63];
  undefined1 local_fd;
  undefined *local_f8;
  undefined1 *local_f0;
  undefined4 local_e8;
  undefined1 local_e4 [63];
  undefined1 local_a5;
  undefined *local_a0;
  int local_98;
  undefined1 local_94;
  undefined8 local_90;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 local_78;
  char *pcStack_70;
  
  puVar7 = PTR_DAT_04bc4e60;
  puVar13 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x210) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar8 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  puVar3 = PTR_DAT_04bc4e58;
  uVar9 = (**(code **)*puVar13)(puVar13,PTR_DAT_04bc4e58);
  if ((uVar9 & 1) == 0) {
    puVar13 = (undefined8 *)0x0;
  }
  if ((*(long *)puVar13[0x43] != 0) &&
     (plVar14 = *(long **)(*(long *)puVar13[0x43] + 0x48), plVar14 != (long *)0x0)) {
    puVar1 = PTR_DAT_04bc0cb8 + 0x10;
    local_428 = 0xb;
    local_430 = puVar1;
    (**(code **)(*plVar14 + 0x20))(plVar14,&local_430);
    puVar13 = (undefined8 *)(**(code **)(plVar14[3] + 0xd0))(plVar14[1]);
    local_428 = 0xb;
    local_78 = (undefined *)CONCAT44((int)((ulong)*puVar13 >> 0x20),0x451c4000);
    local_430 = puVar1;
    (**(code **)(*plVar14 + 0x18))(plVar14,&local_430);
    (**(code **)(plVar14[3] + 200))(plVar14[1],&local_78);
  }
  puVar13 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x210) + 0x3f8);
  if (((*puVar7 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar8 != 0)) {
    *(undefined **)puVar3 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  uVar9 = (**(code **)*puVar13)(puVar13,PTR_DAT_04bc4e58);
  puVar6 = PTR_DAT_04bc0bf0;
  puVar5 = PTR_DAT_04bc0b30;
  puVar4 = PTR_DAT_04bc0a78;
  puVar1 = PTR_DAT_04bb2e00;
  puVar3 = PTR_DAT_04bb2bc0;
  if ((uVar9 & 1) == 0) {
    puVar13 = (undefined8 *)0x0;
  }
  lVar11 = *(long *)puVar13[0x43];
  if (lVar11 != 0) {
    local_3e8 = PTR_DAT_04bb2bc0 + 0x10;
    local_424 = 0;
    local_428 = CONCAT22(local_428._2_2_,0x100);
    local_400 = 0xffffffff;
    uStack_3f8 = 0xffffffff00000000;
    puStack_3e0 = local_3d4;
    puStack_2a0 = local_294;
    local_294[0] = 0;
    local_318 = 0xffffffff;
    uStack_310 = 0xffffffff00000000;
    local_228 = 0xffffffff00000000;
    local_41c = 0;
    local_408 = 0;
    local_210 = local_204;
    local_204[0] = 0;
    local_13c[0] = 0;
    puStack_2f8 = local_2ec;
    local_2ec[0] = 0;
    local_1b8 = local_1ac;
    local_1ac[0] = 0;
    local_404 = 0;
    local_3f0 = 0xffffffff;
    local_3d8 = 0x40;
    local_395 = 0;
    local_3d4[0] = 0;
    local_380 = 0x40;
    local_33d = 0;
    local_37c[0] = 0;
    local_320 = 0;
    local_31c = 0;
    local_308 = 0xffffffff;
    local_2f0 = 0x40;
    local_2ad = 0;
    local_298 = 0x40;
    local_255 = 0;
    local_338 = 0;
    local_238 = 0;
    local_234 = 0;
    local_230 = 0xffffffff;
    local_220 = 0xffffffff;
    local_208 = 0x40;
    local_1c5 = 0;
    local_1b0 = 0x40;
    local_16d = 0;
    local_250 = 0;
    local_158 = 0;
    local_160 = 0;
    local_168 = 0;
    local_140 = 0x40;
    local_fd = 0;
    local_e8 = 0x40;
    local_a5 = 0;
    local_94 = 0;
    local_90 = 0;
    local_88 = 0;
    local_80 = 0;
    puStack_388 = local_37c;
    local_e4[0] = 0;
    local_418 = PTR_DAT_04bb2e00 + 0x10;
    uStack_410 = 0;
    uStack_328 = 0;
    uStack_240 = 0;
    local_148 = local_13c;
    local_f0 = local_e4;
    local_98 = *(int *)PTR_DAT_04bc0b30;
    *(int *)PTR_DAT_04bc0b30 = local_98 + 1;
    local_a0 = puVar4 + 0x10;
    local_430 = puVar6 + 0x10;
    local_390 = local_3e8;
    local_330 = local_418;
    local_300 = local_3e8;
    local_2a8 = local_3e8;
    local_248 = local_418;
    local_218 = local_3e8;
    local_1c0 = local_3e8;
    local_150 = local_3e8;
    local_f8 = local_3e8;
    FUN_01bea210(&local_430,lVar11,param_2,param_3);
    puVar13 = (undefined8 *)(param_1 + 0x2d8);
    uVar9 = (**(code **)(*(long *)(param_1 + 0x2d8) + 0x10))(puVar13);
    if ((uVar9 & 1) != 0) {
      (**(code **)*puVar13)(puVar13,&local_430);
    }
    FUN_01bea9c8(&local_430);
    FUN_01be9eb8(&local_430);
  }
  local_424 = 0;
  local_428 = CONCAT22(local_428._2_2_,0x100);
  local_3e8 = puVar3 + 0x10;
  local_400 = 0xffffffff;
  uStack_3f8 = 0xffffffff00000000;
  puStack_2a0 = local_294;
  local_294[0] = 0;
  puStack_3e0 = local_3d4;
  local_318 = 0xffffffff;
  uStack_310 = 0xffffffff00000000;
  local_78 = PTR_DAT_04bb2020 + 0x10;
  local_228 = 0xffffffff00000000;
  local_1c5 = 0;
  local_210 = local_204;
  local_204[0] = 0;
  local_13c[0] = 0;
  local_1b8 = local_1ac;
  local_1ac[0] = 0;
  local_16d = 0;
  local_158 = 0;
  local_160 = 0;
  local_168 = 0;
  local_fd = 0;
  local_a5 = 0;
  local_94 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  puStack_2f8 = local_2ec;
  local_2ec[0] = 0;
  local_41c = 0;
  local_408 = 0;
  local_404 = 0;
  local_3f0 = 0xffffffff;
  local_395 = 0;
  local_3d4[0] = 0;
  local_33d = 0;
  local_37c[0] = 0;
  local_320 = 0;
  local_31c = 0;
  local_308 = 0xffffffff;
  local_2ad = 0;
  local_255 = 0;
  local_338 = 0;
  local_238 = 0;
  local_234 = 0;
  local_230 = 0xffffffff;
  local_220 = 0xffffffff;
  local_250 = 0;
  puStack_388 = local_37c;
  local_e4[0] = 0;
  local_418 = puVar1 + 0x10;
  uStack_410 = 0;
  uStack_328 = 0;
  uStack_240 = 0;
  local_148 = local_13c;
  local_f0 = local_e4;
  local_a0 = puVar4 + 0x10;
  lVar11 = *(long *)(*(long *)(param_1 + 0x210) + 0x570);
  pcStack_70 = "Telop";
  local_3d8 = 0x40;
  local_380 = 0x40;
  local_2f0 = 0x40;
  local_298 = 0x40;
  local_208 = 0x40;
  local_1b0 = 0x40;
  local_140 = 0x40;
  local_e8 = 0x40;
  local_98 = *(int *)puVar5;
  uVar2 = *(uint *)(lVar11 + 0x218);
  lVar11 = *(long *)(lVar11 + 0x220);
  *(int *)puVar5 = local_98 + 1;
  local_430 = puVar6 + 0x10;
  lVar11 = *(long *)(lVar11 + (ulong)(1 < uVar2) * 8);
  local_390 = local_3e8;
  local_330 = local_418;
  local_300 = local_3e8;
  local_2a8 = local_3e8;
  local_248 = local_418;
  local_218 = local_3e8;
  local_1c0 = local_3e8;
  local_150 = local_3e8;
  local_f8 = local_3e8;
  if (lVar11 != 0) {
    puStack_438 = &DAT_040ff1b7;
    local_440 = local_78;
    FUN_01bea210(&local_430,lVar11,&local_78,&local_440);
    FUN_01bea9c8(&local_430);
  }
  FUN_01be9eb8(&local_430);
  puVar3 = PTR_DAT_04bc0cb8;
  puVar13 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x210) + 0x3f8);
  if (((*puVar7 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar8 != 0)) {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  uVar9 = (**(code **)*puVar13)(puVar13,PTR_DAT_04bc4e58);
  if ((uVar9 & 1) == 0) {
    puVar13 = (undefined8 *)0x0;
  }
  if (*(long *)puVar13[0x43] == 0) {
    fVar15 = 0.0;
  }
  else {
    plVar14 = *(long **)(*(long *)puVar13[0x43] + 0x48);
    local_430 = puVar3 + 0x10;
    local_428 = 0xb;
    (**(code **)(*plVar14 + 0x20))(plVar14,&local_430);
    pfVar10 = (float *)(**(code **)(plVar14[3] + 0xd0))(plVar14[1]);
    pfVar12 = (float *)PTR_DAT_04bc9b50;
    if ((*(long *)PTR_DAT_04bb2908 != 0) &&
       (pfVar12 = (float *)PTR_DAT_04bc9b58, *(char *)(*(long *)PTR_DAT_04bb2908 + 0x78) != '\0')) {
      pfVar12 = (float *)PTR_DAT_04bc9b50;
    }
    fVar15 = *pfVar10 * 0.5 + *pfVar12 * 0.5;
  }
  *(float *)(param_1 + 0x300) = -fVar15;
  uVar16 = FUN_033ddd00(0x3e4ccccd,param_1);
  *(undefined4 *)(param_1 + 0x2fc) = uVar16;
  uVar16 = FUN_033ddd00(0x3e800000,param_1);
  *(undefined4 *)(param_1 + 0x304) = uVar16;
  FUN_033ddc00(param_1);
  return;
}

