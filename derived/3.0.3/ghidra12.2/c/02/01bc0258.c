
undefined8 FUN_01bc0258(long param_1,undefined4 *param_2,long *param_3)

{
  uint uVar1;
  size_t __size;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  void *pvVar7;
  undefined *local_468;
  long local_460;
  long lStack_458;
  undefined *local_450;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined *local_420;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined *local_3f0;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined *local_3c0;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined *local_390;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined *local_360;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined *local_330;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined *local_300;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined *local_2d0;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined *local_2a0;
  undefined4 local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined4 local_268;
  long *local_260;
  undefined *local_258;
  long local_250;
  long local_248;
  undefined *local_240;
  undefined8 local_220;
  undefined8 local_218;
  undefined *local_210;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined *local_1e0;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined *local_1b0;
  undefined8 local_190;
  undefined8 local_188;
  undefined *local_180;
  undefined8 local_160;
  undefined8 local_158;
  undefined *local_150;
  undefined8 local_130;
  undefined8 local_128;
  undefined *local_120;
  undefined8 local_100;
  undefined8 local_f8;
  undefined *local_f0;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined8 local_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  int local_54;
  
  *(undefined4 *)(param_1 + 0x18) = *param_2;
  *(undefined4 *)(param_1 + 0x1c) = param_2[1];
  *(undefined4 *)(param_1 + 0x20) = param_2[2];
  memset(&local_250,0,0x1e0);
  puVar2 = PTR_DAT_04bb2d80;
  local_220 = 0;
  local_218 = 0;
  local_1f0 = 0;
  local_240 = PTR_DAT_04bb2d80 + 0x10;
  local_1e8 = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_190 = 0;
  local_188 = 0;
  local_160 = 0;
  local_158 = 0;
  local_130 = 0;
  local_128 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_258 = PTR_DAT_04bb2d48 + 0x10;
  local_54 = 0;
  local_210 = local_240;
  local_1e0 = local_240;
  local_1b0 = local_240;
  local_180 = local_240;
  local_150 = local_240;
  local_120 = local_240;
  local_f0 = local_240;
  local_c0 = local_240;
  local_90 = local_240;
  FUN_006f1750(&local_258);
  local_68 = 0;
  local_70 = 0xffffffff;
  local_60 = 0;
  local_58 = 0;
  lVar3 = (**(code **)(*param_3 + 0x18))(param_3);
  lVar4 = (**(code **)(*param_3 + 0x18))(param_3);
  if ((lVar4 != 0) && (uVar5 = (**(code **)(*param_3 + 0x20))(param_3), lVar3 != 0)) {
    local_248 = lVar4 + (uVar5 & 0xffffffff) * 2;
    local_70 = 0;
    local_240 = puVar2 + 0x10;
    local_250 = lVar3;
  }
  (**(code **)(local_258 + 0x18))(&local_258);
  FUN_006f1490(&local_258);
  uVar1 = local_54 + 1;
  __size = (ulong)uVar1 << 1;
  lVar3 = *(long *)PTR_DAT_04bb2698;
  if (lVar3 == 0) {
    pvVar7 = malloc(__size);
    if (pvVar7 == (void *)0x0) {
      return 0;
    }
  }
  else {
    plVar6 = *(long **)PTR_DAT_04bc08b0;
    if (plVar6 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar6 = (long *)(lVar3 + 8);
      if (lVar4 != 0) {
        plVar6 = (long *)(lVar4 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        return 0;
      }
    }
    pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,__size,8);
    if (pvVar7 == (void *)0x0) {
      return 0;
    }
  }
  *(void **)(param_1 + 0x110) = pvVar7;
  *(void **)(param_1 + 0x38) = pvVar7;
  plVar6 = (long *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x40) = uVar1;
  (**(code **)(*(long *)(param_1 + 0x30) + 0x38))(plVar6);
  (**(code **)(*(long *)(param_1 + 0x30) + 0x28))(plVar6,param_3);
  (**(code **)(*(long *)(param_1 + 0x30) + 0x30))(plVar6,param_3);
  memset(&local_460,0,0x1e0);
  local_450 = puVar2 + 0x10;
  local_430 = 0;
  uStack_428 = 0;
  local_468 = PTR_DAT_04bc0778 + 0x10;
  local_400 = 0;
  uStack_3f8 = 0;
  local_3d0 = 0;
  uStack_3c8 = 0;
  local_3a0 = 0;
  uStack_398 = 0;
  local_370 = 0;
  uStack_368 = 0;
  local_340 = 0;
  uStack_338 = 0;
  local_310 = 0;
  uStack_308 = 0;
  local_2e0 = 0;
  uStack_2d8 = 0;
  local_2b0 = 0;
  uStack_2a8 = 0;
  local_420 = local_450;
  local_3f0 = local_450;
  local_3c0 = local_450;
  local_390 = local_450;
  local_360 = local_450;
  local_330 = local_450;
  local_300 = local_450;
  local_2d0 = local_450;
  local_2a0 = local_450;
  local_260 = plVar6;
  FUN_006f1750(&local_468);
  plVar6 = local_260;
  local_280 = 0xffffffff;
  local_268 = 0;
  local_278 = 0;
  uStack_270 = 0;
  lVar3 = (**(code **)(*local_260 + 0x18))(local_260);
  lVar4 = (**(code **)(*plVar6 + 0x18))(plVar6);
  if ((lVar4 != 0) && (uVar5 = (**(code **)(*plVar6 + 0x20))(plVar6), lVar3 != 0)) {
    lStack_458 = lVar4 + (uVar5 & 0xffffffff) * 2;
    local_280 = 0;
    local_450 = puVar2 + 0x10;
    local_460 = lVar3;
  }
  (**(code **)(local_468 + 0x18))(&local_468);
  FUN_006f1490(&local_468);
  return 1;
}

