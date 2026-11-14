
void FUN_01c0c818(long *param_1,undefined2 param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  ulong uVar3;
  undefined *puVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  undefined *local_298;
  long local_290 [2];
  undefined *local_280 [4];
  undefined8 local_260;
  undefined8 uStack_258;
  undefined *local_250;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined *local_220;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined *local_1f0;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined *local_1c0;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined *local_190;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined *local_160;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined *local_130;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined *local_100;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined *local_d0;
  uint local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined1 local_94;
  undefined4 local_92;
  undefined1 local_88 [56];
  
  FUN_006d8678(&local_298,"LifeSupport_%s");
  FUN_006d8678(local_88,&DAT_0405bf91,param_2);
  FUN_006f50a0(param_1,&local_298,local_88,0);
  *(undefined4 *)(param_1 + 0x9c) = 0;
  memset(local_290,0,0x1e0);
  puVar4 = PTR_DAT_04bb2d80;
  local_b0 = 0xffffffff;
  local_98 = 0;
  local_260 = 0;
  uStack_258 = 0;
  local_280[0] = PTR_DAT_04bb2d80 + 0x10;
  local_230 = 0;
  uStack_228 = 0;
  local_298 = &DAT_04a3f920;
  local_94 = 0;
  local_92 = 0;
  local_200 = 0;
  uStack_1f8 = 0;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_250 = local_280[0];
  local_220 = local_280[0];
  local_1f0 = local_280[0];
  local_1c0 = local_280[0];
  local_190 = local_280[0];
  local_160 = local_280[0];
  local_130 = local_280[0];
  local_100 = local_280[0];
  local_d0 = local_280[0];
  FUN_006f1750(&local_298);
  local_94 = 0;
  local_92 = 0;
  local_b0 = 0xffffffff;
  local_98 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  lVar6 = (**(code **)(*param_1 + 0x18))(param_1);
  lVar7 = (**(code **)(*param_1 + 0x18))(param_1);
  if (((lVar7 != 0) && (uVar8 = (**(code **)(*param_1 + 0x20))(param_1), lVar6 != 0)) &&
     ((int)local_b0 < 9)) {
    local_b0 = local_b0 + 1;
    uVar3 = (ulong)local_b0;
    bVar5 = 9 < local_b0;
    plVar1 = local_290 + uVar3 * 6;
    if (bVar5) {
      plVar1 = local_290;
    }
    *plVar1 = lVar6;
    plVar1 = local_290 + uVar3 * 6 + 1;
    if (bVar5) {
      plVar1 = local_290 + 1;
    }
    *plVar1 = lVar7 + (uVar8 & 0xffffffff) * 2;
    ppuVar2 = local_280 + uVar3 * 6;
    if (bVar5) {
      ppuVar2 = local_280;
    }
    *ppuVar2 = puVar4 + 0x10;
  }
  (**(code **)(local_298 + 0x18))(&local_298);
  FUN_006f1490(&local_298);
  *(uint *)(param_1 + 0x9c) = local_92 & 0xffff;
  uVar9 = 0x1a4;
  if (local_92._2_2_ < 2) {
    uVar9 = 0x14a;
  }
  if ((local_92 & 0xffff) <= uVar9 && uVar9 != (local_92 & 0xffff)) {
    *(uint *)(param_1 + 0x9c) = uVar9;
  }
  return;
}

