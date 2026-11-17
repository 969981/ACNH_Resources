
void FUN_02e5f850(long param_1,short *param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined *local_530;
  undefined8 *local_528;
  undefined4 local_520;
  undefined1 local_51c;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined4 local_508;
  undefined *local_500;
  undefined1 *puStack_4f8;
  undefined4 local_4f0;
  undefined1 local_4ec [63];
  undefined1 local_4ad;
  undefined *local_4a8;
  undefined1 *puStack_4a0;
  undefined4 local_498;
  undefined1 local_494 [63];
  undefined1 local_455;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined6 uStack_438;
  undefined2 local_432;
  undefined6 uStack_430;
  undefined1 auStack_42a [2];
  int local_428;
  undefined *local_420;
  undefined4 local_418;
  undefined4 local_414;
  long local_410;
  undefined *local_408;
  undefined2 local_400;
  undefined8 local_3fc;
  undefined4 local_3f4;
  undefined *local_3f0;
  undefined8 uStack_3e8;
  undefined4 local_3e0;
  undefined1 local_3dc;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined4 local_3c8;
  undefined *local_3c0;
  undefined1 *puStack_3b8;
  undefined4 local_3b0;
  undefined1 local_3ac [63];
  undefined1 local_36d;
  undefined *local_368;
  undefined1 *puStack_360;
  undefined4 local_358;
  undefined1 local_354 [63];
  undefined1 local_315;
  undefined8 local_310;
  undefined *local_308;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined1 local_2f4;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined *local_2d8;
  undefined1 *local_2d0;
  undefined4 local_2c8;
  undefined1 local_2c4 [63];
  undefined1 local_285;
  undefined *local_280;
  undefined1 *local_278;
  undefined4 local_270;
  undefined1 local_26c [63];
  undefined1 local_22d;
  undefined8 local_228;
  undefined *local_220;
  undefined8 local_218;
  undefined4 local_210;
  undefined1 local_20c;
  undefined8 local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined *local_1f0;
  undefined1 *local_1e8;
  undefined4 local_1e0;
  undefined1 local_1dc [63];
  undefined1 local_19d;
  undefined *local_198;
  undefined1 *local_190;
  undefined4 local_188;
  undefined1 local_184 [63];
  undefined1 local_145;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined *local_128;
  undefined1 *local_120;
  undefined4 local_118;
  undefined1 local_114 [63];
  undefined1 local_d5;
  undefined *local_d0;
  undefined1 *local_c8;
  undefined4 local_c0;
  undefined1 local_bc [63];
  undefined1 local_7d;
  undefined *local_78;
  int local_70;
  undefined1 local_6c;
  undefined8 local_68;
  undefined2 local_60;
  undefined8 local_58;
  
  if (*param_2 != -2) {
    puVar7 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x218) + 0x3f8);
    if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    if (((puVar7 != (undefined8 *)0x0) &&
        (uVar6 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4e58), local_78 = PTR_DAT_04bc0a78,
        puVar2 = PTR_DAT_04bb2bc0, (uVar6 & 1) != 0)) && (lVar8 = *(long *)puVar7[0x43], lVar8 != 0)
       ) {
      local_3f4 = 0;
      local_3fc = 0;
      local_400 = 0x100;
      local_3e0 = 0;
      puStack_3b8 = local_3ac;
      local_3dc = 0;
      local_3d8 = 0xffffffff;
      uStack_3d0 = 0xffffffff00000000;
      local_3c8 = 0xffffffff;
      local_3b0 = 0x40;
      local_36d = 0;
      local_3ac[0] = 0;
      local_3c0 = PTR_DAT_04bb2bc0 + 0x10;
      local_358 = 0x40;
      local_315 = 0;
      local_354[0] = 0;
      puStack_360 = local_354;
      local_3f0 = PTR_DAT_04bb2e00 + 0x10;
      local_2e8 = 0xffffffff00000000;
      local_278 = local_26c;
      local_26c[0] = 0;
      local_200 = 0xffffffff00000000;
      local_300 = 0;
      local_2f8 = 0;
      local_1e8 = local_1dc;
      local_1dc[0] = 0;
      local_2d0 = local_2c4;
      local_2c4[0] = 0;
      local_114[0] = 0;
      local_190 = local_184;
      local_184[0] = 0;
      local_2f4 = 0;
      local_2f0 = 0xffffffff;
      local_2e0 = 0xffffffff;
      local_2c8 = 0x40;
      local_285 = 0;
      local_270 = 0x40;
      local_22d = 0;
      local_310 = 0;
      local_218 = 0;
      local_210 = 0;
      local_20c = 0;
      local_208 = 0xffffffff;
      local_1f8 = 0xffffffff;
      local_1e0 = 0x40;
      local_19d = 0;
      local_188 = 0x40;
      local_145 = 0;
      local_228 = 0;
      local_130 = 0;
      local_138 = 0;
      local_140 = 0;
      local_118 = 0x40;
      local_d5 = 0;
      local_c0 = 0x40;
      local_7d = 0;
      local_bc[0] = 0;
      uStack_3e8 = 0;
      local_120 = local_114;
      local_c8 = local_bc;
      local_70 = *(int *)PTR_DAT_04bc0b30;
      local_6c = 0;
      *(int *)PTR_DAT_04bc0b30 = local_70 + 1;
      local_78 = local_78 + 0x10;
      local_68 = 0;
      local_408 = PTR_DAT_04bc0bf0 + 0x10;
      local_60 = 0;
      local_58 = 0;
      plVar9 = *(long **)(lVar8 + 0x48);
      local_368 = local_3c0;
      local_308 = local_3f0;
      local_2d8 = local_3c0;
      local_280 = local_3c0;
      local_220 = local_3f0;
      local_1f0 = local_3c0;
      local_198 = local_3c0;
      local_128 = local_3c0;
      local_d0 = local_3c0;
      if (plVar9[1] != 0) {
        local_530 = PTR_DAT_04bc0878 + 0x10;
        local_528 = (undefined8 *)CONCAT44(local_528._4_4_,9);
        (**(code **)(*plVar9 + 0x18))(plVar9,&local_530);
        (**(code **)(plVar9[3] + 0x5e0))(plVar9[1],PTR_DAT_04bb2da0,0);
        FUN_03d7dd80(lVar8);
      }
      puVar3 = PTR_DAT_04bb43c0;
      local_410 = 0;
      local_420 = PTR_DAT_04bc0510 + 0x10;
      local_418 = *(undefined4 *)param_2;
      local_414 = *(undefined4 *)(param_2 + 2);
      lVar10 = *(long *)PTR_DAT_04bb43c0;
      uVar4 = FUN_0277d6c4(&local_418);
      if (*(long *)puVar3 != 0) {
        lVar10 = *(long *)(lVar10 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
          lVar10 = *(long *)PTR_DAT_04bc0428;
          uVar4 = FUN_0277d6c4(param_2);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
             (lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8), lVar10 != 0)) {
            local_410 = lVar10;
          }
        }
      }
      local_51c = 0;
      local_520 = 0x13;
      puStack_4f8 = local_4ec;
      local_500 = puVar2 + 0x10;
      local_518 = 0xffffffff;
      uStack_510 = 0xffffffff00000000;
      local_528 = &local_450;
      puStack_4a0 = local_494;
      local_508 = 0xffffffff;
      local_4f0 = 0x40;
      local_4ad = 0;
      local_4ec[0] = 0;
      local_498 = 0x40;
      local_455 = 0;
      local_494[0] = 0;
      local_530 = PTR_DAT_04bc0bc0 + 0x10;
      uStack_430 = 0;
      puVar1 = auStack_42a;
      if (auStack_42a <= (undefined1 *)((long)&local_450 + 2U)) {
        puVar1 = (undefined1 *)((long)&local_450 + 2U);
      }
      local_440 = 0;
      uStack_438 = 0;
      local_432 = 0;
      local_450 = 0;
      uStack_448 = 0;
      local_4a8 = local_500;
      memset(local_528,0,(ulong)(puVar1 + (-0xe1 - (long)&local_530)) & 0xfffffffffffffffc | 2);
      local_428 = 0;
      iVar5 = FUN_01aed730(&local_420);
      FUN_01be4af0(&local_530,**(undefined4 **)PTR_DAT_04bb3448,iVar5 / 100,10,0,0);
      local_428 = iVar5 / 100;
      FUN_01bea4e8(&local_408,lVar8,&local_530);
      FUN_01bea9c8(&local_408);
      FUN_01be9eb8(&local_408);
    }
  }
  return;
}

