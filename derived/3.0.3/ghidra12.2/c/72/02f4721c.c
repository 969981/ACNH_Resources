
void FUN_02f4721c(long param_1,uint param_2,int param_3,uint param_4)

{
  undefined *puVar1;
  undefined1 *puVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined *local_538;
  undefined2 local_530;
  undefined8 local_52c;
  undefined4 local_524;
  undefined *local_520;
  undefined8 uStack_518;
  undefined4 local_510;
  undefined1 local_50c;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined4 local_4f8;
  undefined *local_4f0;
  undefined1 *puStack_4e8;
  undefined4 local_4e0;
  undefined1 local_4dc [63];
  undefined1 local_49d;
  undefined *local_498;
  undefined1 *puStack_490;
  undefined4 local_488;
  undefined1 local_484 [63];
  undefined1 local_445;
  undefined8 local_440;
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
  undefined1 *puStack_3a8;
  undefined4 local_3a0;
  undefined1 local_39c [63];
  undefined1 local_35d;
  undefined8 local_358;
  undefined *local_350;
  undefined8 uStack_348;
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
  undefined8 local_268;
  undefined8 local_260;
  undefined *local_258;
  undefined1 *local_250;
  undefined4 local_248;
  undefined1 local_244 [63];
  undefined1 local_205;
  undefined *local_200;
  undefined1 *local_1f8;
  undefined4 local_1f0;
  undefined1 local_1ec [63];
  undefined1 local_1ad;
  undefined *local_1a8;
  int local_1a0;
  undefined1 local_19c;
  undefined8 local_198;
  undefined2 local_190;
  undefined8 local_188;
  undefined *local_180;
  undefined8 *local_178;
  undefined4 local_170;
  undefined1 local_16c;
  undefined8 local_168;
  undefined8 local_160;
  undefined4 local_158;
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
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined6 uStack_88;
  undefined2 local_82;
  undefined6 uStack_80;
  undefined1 auStack_7a [2];
  int local_78;
  undefined *local_70;
  undefined4 local_68;
  
  if ((*(uint *)(param_1 + 0x38160) < 2) &&
     (lVar6 = *(long *)(*(long *)(param_1 + 0x220) + (ulong)*(uint *)(param_1 + 0x38160) * 8 + 0x570
                       ), lVar6 != 0)) {
    local_16c = 0;
    local_170 = 0x13;
    local_168 = 0xffffffff;
    local_160 = 0xffffffff00000000;
    local_148 = local_13c;
    local_178 = &local_a0;
    local_158 = 0xffffffff;
    local_140 = 0x40;
    local_fd = 0;
    local_13c[0] = 0;
    puVar1 = PTR_DAT_04bb2bc0 + 0x10;
    local_f0 = local_e4;
    local_e8 = 0x40;
    local_a5 = 0;
    local_e4[0] = 0;
    local_180 = PTR_DAT_04bc0bc0 + 0x10;
    local_90 = 0;
    local_98 = 0;
    local_a0 = 0;
    uStack_80 = 0;
    puVar2 = auStack_7a;
    if (auStack_7a <= (undefined1 *)((long)&local_a0 + 2U)) {
      puVar2 = (undefined1 *)((long)&local_a0 + 2U);
    }
    uStack_88 = 0;
    local_82 = 0;
    local_150 = puVar1;
    local_f8 = puVar1;
    memset(local_178,0,(ulong)(puVar2 + (-0xe1 - (long)&local_180)) & 0xfffffffffffffffc | 2);
    local_78 = 0;
    local_530 = 0x100;
    plVar5 = (long *)0x0;
    puStack_4e8 = local_4dc;
    local_52c = 0;
    local_524 = 0;
    local_510 = 0;
    local_50c = 0;
    local_4f8 = 0xffffffff;
    local_4e0 = 0x40;
    local_49d = 0;
    local_4dc[0] = 0;
    local_488 = 0x40;
    local_445 = 0;
    local_484[0] = 0;
    local_508 = 0xffffffff;
    uStack_500 = 0xffffffff00000000;
    puStack_490 = local_484;
    local_428 = 0;
    local_424 = 0;
    local_410 = 0xffffffff;
    local_3f8 = 0x40;
    local_3b5 = 0;
    local_3a0 = 0x40;
    local_35d = 0;
    local_440 = 0;
    local_340 = 0;
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
    local_268 = 0;
    local_270 = 0;
    local_248 = 0x40;
    local_205 = 0;
    local_1f0 = 0x40;
    local_1ad = 0;
    local_520 = PTR_DAT_04bb2e00 + 0x10;
    puStack_3a8 = local_39c;
    local_39c[0] = 0;
    puStack_400 = local_3f4;
    local_3f4[0] = 0;
    uStack_518 = 0;
    uStack_430 = 0;
    local_2c0 = local_2b4;
    local_2b4[0] = 0;
    local_318 = local_30c;
    local_30c[0] = 0;
    uStack_348 = 0;
    local_250 = local_244;
    local_244[0] = 0;
    local_1f8 = local_1ec;
    local_1ec[0] = 0;
    local_420 = 0xffffffff;
    uStack_418 = 0xffffffff00000000;
    local_1a0 = *(int *)PTR_DAT_04bc0b30;
    local_19c = 0;
    *(int *)PTR_DAT_04bc0b30 = local_1a0 + 1;
    local_1a8 = PTR_DAT_04bc0a78 + 0x10;
    local_198 = 0;
    local_190 = 0;
    local_538 = PTR_DAT_04bc0bf0 + 0x10;
    local_188 = 0;
    if (((-1 < (int)param_2) && ((int)param_2 < (int)*(uint *)(lVar6 + 0x208))) &&
       (param_2 < *(uint *)(lVar6 + 0x208))) {
      plVar5 = *(long **)(*(long *)(lVar6 + 0x210) + (ulong)param_2 * 8);
    }
    local_4f0 = puVar1;
    local_498 = puVar1;
    local_438 = local_520;
    local_408 = puVar1;
    local_3b0 = puVar1;
    local_350 = local_520;
    local_320 = puVar1;
    local_2c8 = puVar1;
    local_258 = puVar1;
    local_200 = puVar1;
    if (((*PTR_DAT_04bc4d98 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc4d98), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bc4d90 = PTR_DAT_04bc4da0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4d98);
    }
    if ((plVar5 != (long *)0x0) &&
       (uVar4 = (**(code **)*plVar5)(plVar5,PTR_DAT_04bc4d90), (uVar4 & 1) != 0)) {
      lVar6 = *(long *)plVar5[0x5c];
      if (lVar6 != 0) {
        plVar7 = *(long **)(lVar6 + 0x48);
        if (plVar7[1] != 0) {
          local_70 = PTR_DAT_04bc0878 + 0x10;
          local_68 = 9;
          (**(code **)(*plVar7 + 0x18))(plVar7,&local_70);
          (**(code **)(plVar7[3] + 0x5e0))(plVar7[1],PTR_DAT_04bb2da0,0);
          FUN_03d7dd80(lVar6);
        }
        FUN_01be4af0(&local_180,**(undefined4 **)PTR_DAT_04bb3448,param_3 + 1,10,0,0);
        local_78 = param_3 + 1;
        FUN_01bea4e8(&local_538,lVar6,&local_180);
        FUN_01bea9c8(&local_538);
      }
      (**(code **)(*plVar5 + 0x140))(plVar5,param_4 & 1,0);
    }
    FUN_01be9eb8(&local_538);
  }
  return;
}

