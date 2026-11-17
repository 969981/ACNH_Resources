
void FUN_02f5abac(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  undefined *local_418;
  undefined *puStack_410;
  undefined *local_408;
  undefined4 local_400;
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
  undefined8 uStack_300;
  undefined4 local_2f8;
  undefined1 local_2f4;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined4 local_2e0;
  undefined *local_2d8;
  undefined1 *puStack_2d0;
  undefined4 local_2c8;
  undefined1 local_2c4 [63];
  undefined1 local_285;
  undefined *local_280;
  undefined1 *puStack_278;
  undefined4 local_270;
  undefined1 local_26c [63];
  undefined1 local_22d;
  undefined8 local_228;
  undefined *puStack_220;
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
  undefined *local_50;
  char *pcStack_48;
  
  puVar7 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x210) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  uVar5 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4e58);
  if ((uVar5 & 1) == 0) {
    puVar7 = (undefined8 *)0x0;
  }
  lVar8 = *(long *)puVar7[0x43];
  if (lVar8 == 0) {
    return;
  }
  uVar3 = FUN_02f5a2f0(**(undefined4 **)(*(long *)(param_1 + 0x230) + (param_2 & 0xffffffff) * 8));
  if ((int)uVar3 < 0) {
    plVar9 = *(long **)(lVar8 + 0x48);
    if (plVar9[1] == 0) {
      return;
    }
    local_408 = PTR_DAT_04bc0878 + 0x10;
    local_400 = 9;
    (**(code **)(*plVar9 + 0x18))(plVar9,&local_408);
    (**(code **)(plVar9[3] + 0x5e0))(plVar9[1],PTR_DAT_04bb2da0,0);
    FUN_03d7dd80(lVar8);
    return;
  }
  local_3fc = 0;
  local_400 = CONCAT22(local_400._2_2_,0x100);
  local_3f4 = 0;
  local_3e0 = 0;
  puStack_3b8 = local_3ac;
  local_3dc = 0;
  local_3d8 = 0xffffffff;
  uStack_3d0 = 0xffffffff00000000;
  local_3c8 = 0xffffffff;
  local_3b0 = 0x40;
  local_36d = 0;
  local_3c0 = PTR_DAT_04bb2bc0 + 0x10;
  local_3ac[0] = 0;
  local_358 = 0x40;
  local_315 = 0;
  local_354[0] = 0;
  puStack_360 = local_354;
  local_3f0 = PTR_DAT_04bb2e00 + 0x10;
  puStack_278 = local_26c;
  local_26c[0] = 0;
  puStack_2d0 = local_2c4;
  local_2c4[0] = 0;
  local_2e0 = 0xffffffff;
  local_208 = 0xffffffff;
  local_1f8 = 0xffffffff;
  local_200 = 0xffffffff00000000;
  local_2f8 = 0;
  local_2f4 = 0;
  local_2c8 = 0x40;
  local_285 = 0;
  local_270 = 0x40;
  local_22d = 0;
  local_310 = 0;
  local_218 = 0;
  local_210 = 0;
  local_20c = 0;
  local_1e0 = 0x40;
  local_19d = 0;
  local_188 = 0x40;
  local_145 = 0;
  local_130 = 0;
  local_138 = 0;
  local_140 = 0;
  local_118 = 0x40;
  local_d5 = 0;
  local_c0 = 0x40;
  local_7d = 0;
  local_2f0 = 0xffffffff;
  uStack_2e8 = 0xffffffff00000000;
  local_120 = local_114;
  local_114[0] = 0;
  local_c8 = local_bc;
  local_bc[0] = 0;
  local_1e8 = local_1dc;
  local_1dc[0] = 0;
  local_190 = local_184;
  local_184[0] = 0;
  uStack_3e8 = 0;
  uStack_300 = 0;
  local_228 = 0;
  local_70 = *(int *)PTR_DAT_04bc0b30;
  local_6c = 0;
  local_78 = PTR_DAT_04bc0a78 + 0x10;
  *(int *)PTR_DAT_04bc0b30 = local_70 + 1;
  puVar2 = PTR_DAT_04bb2020;
  local_408 = PTR_DAT_04bc0bf0 + 0x10;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_368 = local_3c0;
  local_308 = local_3f0;
  local_2d8 = local_3c0;
  local_280 = local_3c0;
  puStack_220 = local_3f0;
  local_1f0 = local_3c0;
  local_198 = local_3c0;
  local_128 = local_3c0;
  local_d0 = local_3c0;
  if (**(int **)(*(long *)(param_1 + 0x230) + (param_2 & 0xffffffff) * 8) == 8) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_48 = "MainmenuCamera1stPersonView";
    local_50 = puVar1;
    iVar4 = FUN_0274bce0(param_1 + 0x1f8,&local_50);
    if (iVar4 != 0) {
      puStack_410 = &DAT_0408de78;
      ppuVar6 = &local_418;
      local_418 = puVar1;
      goto LAB_02f5ae4c;
    }
  }
  ppuVar6 = (undefined **)(&DAT_056c6820 + (ulong)uVar3 * 7);
LAB_02f5ae4c:
  pcStack_48 = "MenuDevice";
  local_50 = puVar2 + 0x10;
  FUN_01bea210(&local_408,lVar8,&local_50,ppuVar6);
  FUN_01bea9c8(&local_408);
  FUN_01be9eb8(&local_408);
  return;
}

