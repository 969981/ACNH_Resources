
void FUN_030a0204(long param_1,short *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined *local_588;
  undefined8 *local_580;
  undefined4 local_578;
  undefined1 local_574;
  undefined8 local_570;
  undefined8 uStack_568;
  undefined4 local_560;
  undefined *local_558;
  undefined1 *puStack_550;
  undefined4 local_548;
  undefined1 local_544 [63];
  undefined1 local_505;
  undefined *local_500;
  undefined1 *puStack_4f8;
  undefined4 local_4f0;
  undefined1 local_4ec [63];
  undefined1 local_4ad;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined6 uStack_490;
  undefined2 local_48a;
  undefined6 uStack_488;
  undefined1 auStack_482 [2];
  int local_480;
  undefined *local_478;
  short local_470;
  short local_46e;
  undefined4 local_46c;
  long local_468;
  undefined *local_460;
  undefined1 *puStack_458;
  undefined4 local_450;
  undefined1 local_44c [63];
  undefined1 local_40d;
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
  undefined1 *local_360;
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
  
  puVar3 = PTR_DAT_04bb2bc0;
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
  local_460 = PTR_DAT_04bb2bc0 + 0x10;
  local_3ac[0] = 0;
  local_358 = 0x40;
  local_315 = 0;
  local_354[0] = 0;
  local_360 = local_354;
  local_3f0 = PTR_DAT_04bb2e00 + 0x10;
  local_2e8 = 0xffffffff00000000;
  local_278 = local_26c;
  local_26c[0] = 0;
  local_2d0 = local_2c4;
  local_2c4[0] = 0;
  local_200 = 0xffffffff00000000;
  local_1e8 = local_1dc;
  local_1dc[0] = 0;
  local_190 = local_184;
  local_184[0] = 0;
  local_114[0] = 0;
  local_300 = 0;
  local_2f8 = 0;
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
  local_78 = PTR_DAT_04bc0a78 + 0x10;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_408 = PTR_DAT_04bc0bf0 + 0x10;
  puStack_458 = local_44c;
  local_450 = 0x40;
  local_40d = 0;
  local_44c[0] = 0;
  local_3c0 = local_460;
  local_368 = local_460;
  local_308 = local_3f0;
  local_2d8 = local_460;
  local_280 = local_460;
  local_220 = local_3f0;
  local_1f0 = local_460;
  local_198 = local_460;
  local_128 = local_460;
  local_d0 = local_460;
  FUN_038d1270(&local_460,&DAT_0409e973,"NatteeCatalog");
  puVar10 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x220) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar6 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  if (((puVar10 != (undefined8 *)0x0) &&
      (uVar7 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bc4e58), (uVar7 & 1) != 0)) &&
     (lVar11 = *(long *)puVar10[0x43], lVar11 != 0)) {
    plVar12 = *(long **)(lVar11 + 0x48);
    if (plVar12[1] != 0) {
      local_588 = PTR_DAT_04bc0878 + 0x10;
      local_580 = (undefined8 *)CONCAT44(local_580._4_4_,9);
      (**(code **)(*plVar12 + 0x18))(plVar12,&local_588);
      (**(code **)(plVar12[3] + 0x5e0))(plVar12[1],PTR_DAT_04bb2da0,0);
      FUN_03d7dd80(lVar11);
    }
    puVar4 = PTR_DAT_04bb43c0;
    if (*param_2 != -2) {
      local_46e = param_2[1];
      local_468 = 0;
      local_46c = *(undefined4 *)(param_2 + 2);
      local_478 = PTR_DAT_04bc0510 + 0x10;
      lVar13 = *(long *)PTR_DAT_04bb43c0;
      local_470 = *param_2;
      uVar5 = FUN_0277d6c4(&local_470);
      if (*(long *)puVar4 != 0) {
        lVar13 = *(long *)(lVar13 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar13 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          lVar13 = *(long *)PTR_DAT_04bc0428;
          uVar5 = FUN_0277d6c4(param_2);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
          if (uVar5 < *(uint *)(lVar13 + 0x1d8)) {
            lVar13 = *(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar5 * 8);
            if (lVar13 != 0) {
              local_468 = lVar13;
            }
          }
        }
      }
      local_574 = 0;
      local_578 = 0x13;
      puStack_550 = local_544;
      local_558 = puVar3 + 0x10;
      local_570 = 0xffffffff;
      uStack_568 = 0xffffffff00000000;
      local_580 = &local_4a8;
      puStack_4f8 = local_4ec;
      local_560 = 0xffffffff;
      local_548 = 0x40;
      local_505 = 0;
      local_544[0] = 0;
      local_4f0 = 0x40;
      local_4ad = 0;
      local_4ec[0] = 0;
      local_588 = PTR_DAT_04bc0bc0 + 0x10;
      uStack_488 = 0;
      puVar1 = auStack_482;
      if (auStack_482 <= (undefined1 *)((long)&local_4a8 + 2U)) {
        puVar1 = (undefined1 *)((long)&local_4a8 + 2U);
      }
      local_498 = 0;
      uStack_490 = 0;
      local_48a = 0;
      local_4a8 = 0;
      uStack_4a0 = 0;
      local_500 = local_558;
      memset(local_580,0,(ulong)(puVar1 + (-0xe1 - (long)&local_588)) & 0xfffffffffffffffc | 2);
      local_480 = 0;
      iVar6 = FUN_01aed730(&local_478);
      uVar7 = (ulong)(long)(iVar6 * 0x5a) / 100;
      iVar6 = (int)uVar7;
      if (iVar6 < 1000) {
        iVar2 = (iVar6 / 10) * 10;
        iVar9 = iVar2 + 10;
        if (iVar6 % 10 < 5) {
          iVar9 = iVar2;
        }
      }
      else {
        iVar8 = (int)((uVar7 & 0xffffffff) / 100);
        iVar2 = iVar8 * 100;
        iVar9 = iVar2 + 100;
        if ((uint)(iVar6 + iVar8 * -100) < 0x32) {
          iVar9 = iVar2;
        }
      }
      FUN_01be4af0(&local_588,**(undefined4 **)PTR_DAT_04bb3448,iVar9,10,0,0);
      local_480 = iVar9;
      FUN_01bea4e8(&local_408,lVar11,&local_588);
      FUN_01bea9c8(&local_408);
    }
  }
  FUN_01be9eb8(&local_408);
  return;
}

