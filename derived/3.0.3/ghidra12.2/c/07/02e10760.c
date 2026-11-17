
void FUN_02e10760(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined1 *puVar3;
  long *plVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  byte bVar10;
  uint uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined *local_538;
  char *local_530;
  undefined *local_528;
  undefined2 local_520;
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
  undefined *puStack_340;
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
  undefined8 local_88;
  undefined8 local_80;
  undefined6 uStack_78;
  undefined2 local_72;
  undefined6 uStack_70;
  undefined1 auStack_6a [2];
  int local_68;
  
  if (*(long *)(param_1 + 0x220) != 0) {
    puVar12 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x220) + 0x3f8);
    if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    if (((puVar12 != (undefined8 *)0x0) &&
        (uVar7 = (**(code **)*puVar12)(puVar12,PTR_DAT_04bc4e58), (uVar7 & 1) != 0)) &&
       (lVar13 = *(long *)(puVar12[0x43] + (ulong)(1 < *(uint *)(puVar12 + 0x42)) * 8), lVar13 != 0)
       ) {
      local_15c = 0;
      local_160 = 0x13;
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
      local_170 = PTR_DAT_04bc0bc0 + 0x10;
      local_80 = 0;
      local_88 = 0;
      local_90 = 0;
      uStack_70 = 0;
      puVar3 = auStack_6a;
      if (auStack_6a <= (undefined1 *)((long)&local_90 + 2U)) {
        puVar3 = (undefined1 *)((long)&local_90 + 2U);
      }
      uStack_78 = 0;
      local_72 = 0;
      local_140 = puVar1;
      local_e8 = puVar1;
      memset(local_168,0,(ulong)(puVar3 + (-0xe1 - (long)&local_170)) & 0xfffffffffffffffc | 2);
      bVar10 = *(byte *)(param_1 + 0x1f8);
      local_68 = 0;
      if (7 < bVar10) {
        bVar10 = 0xff;
      }
      local_528 = (undefined *)CONCAT71(local_528._1_7_,bVar10);
      lVar8 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_528,1);
      if (lVar8 == 0) {
        iVar6 = 0;
      }
      else {
        lVar9 = lVar8 + 0x194b0;
        if (*(long *)(lVar8 + 0x194b8) == 0) {
          lVar9 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
        }
        if ((*(long **)(lVar9 + 0x2ae98) == (long *)0x0) ||
           (puVar12 = (undefined8 *)**(long **)(lVar9 + 0x2ae98), puVar12 == (undefined8 *)0x0)) {
          uVar5 = 1;
        }
        else {
          uVar5 = (**(code **)*puVar12)();
          uVar5 = uVar5 ^ 1;
        }
        iVar6 = 0;
        plVar2 = (long *)(*(long *)(lVar9 + 0x2ae80) + *(long *)(lVar9 + 0x2ae78));
        lVar8 = 0x44c;
        do {
          uVar11 = *(uint *)((long)plVar2 + lVar8 * 4);
          plVar4 = plVar2 + (ulong)uVar11 * 0xb;
          if (0x31 < uVar11) {
            plVar4 = plVar2;
          }
          if (*plVar4 == 0) {
            uVar11 = 0;
          }
          else {
            uVar11 = (uint)(*(int *)((long)plVar4 + 0x24) != 0 && (int)plVar4[1] != 0);
          }
          lVar8 = lVar8 + 1;
          iVar6 = iVar6 + uVar11;
        } while (lVar8 != 0x47e);
        if ((((uVar5 & 1) == 0) && (*(long *)(lVar9 + 0x2ae98) != 0)) &&
           (puVar12 = *(undefined8 **)(*(long *)(lVar9 + 0x2ae98) + 8), puVar12 != (undefined8 *)0x0
           )) {
          (**(code **)*puVar12)();
        }
      }
      FUN_01be4af0(&local_170,**(undefined4 **)PTR_DAT_04bb3448,iVar6,2,0,0);
      local_520 = 0x100;
      puStack_4d8 = local_4cc;
      puStack_480 = local_474;
      local_51c = 0;
      local_514 = 0;
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
      local_318 = 0xffffffff;
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
      local_19d = 0;
      uStack_508 = 0;
      uStack_420 = 0;
      local_2b0 = local_2a4;
      local_2a4[0] = 0;
      local_348 = 0;
      local_240 = local_234;
      local_234[0] = 0;
      local_1e8 = local_1dc;
      local_308 = local_2fc;
      local_2fc[0] = 0;
      local_1dc[0] = 0;
      local_410 = 0xffffffff;
      uStack_408 = 0xffffffff00000000;
      local_190 = *(int *)PTR_DAT_04bc0b30;
      local_18c = 0;
      *(int *)PTR_DAT_04bc0b30 = local_190 + 1;
      local_198 = PTR_DAT_04bc0a78 + 0x10;
      local_188 = 0;
      local_180 = 0;
      local_178 = 0;
      local_528 = PTR_DAT_04bc0bf0 + 0x10;
      local_538 = PTR_DAT_04bb2020 + 0x10;
      local_530 = "DreamFavorite";
      local_4e0 = puVar1;
      local_488 = puVar1;
      local_428 = local_510;
      local_3f8 = puVar1;
      local_3a0 = puVar1;
      puStack_340 = local_510;
      local_310 = puVar1;
      local_2b8 = puVar1;
      local_248 = puVar1;
      local_1f0 = puVar1;
      local_68 = iVar6;
      FUN_01bea210(&local_528,lVar13,&local_538,&DAT_056922b0);
      if (((*PTR_DAT_04bc0a88 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar6 != 0)) {
        FUN_01bb25c8(PTR_DAT_04bc0a80);
        __cxa_guard_release(PTR_DAT_04bc0a88);
      }
      if (0 < (int)*(uint *)PTR_DAT_04bc0a80) {
        uVar7 = 0;
        do {
          if (*(int *)(*(long *)(PTR_DAT_04bc0a80 + 8) + uVar7 * 4) == 0x5a) goto LAB_02e10bcc;
          uVar7 = uVar7 + 1;
        } while (*(uint *)PTR_DAT_04bc0a80 != uVar7);
      }
      uVar7 = 0;
LAB_02e10bcc:
      local_538 = (undefined *)CONCAT44(local_538._4_4_,(int)uVar7);
      FUN_01bafc20(&local_198,&local_170,0,&local_538,0);
      FUN_01bea9c8(&local_528);
      FUN_01be9eb8(&local_528);
    }
  }
  return;
}

