
undefined4 FUN_006f4a64(long *param_1)

{
  long *plVar1;
  undefined **ppuVar2;
  ulong uVar3;
  undefined *puVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined *local_258;
  long local_250 [2];
  undefined *local_240 [4];
  undefined8 local_220;
  undefined8 uStack_218;
  undefined *local_210;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined *local_1e0;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined *local_1b0;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined *local_180;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined *local_150;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined *local_120;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined *local_f0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined *local_c0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  uint local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  memset(local_250,0,0x1e0);
  puVar4 = PTR_DAT_04bb2d80;
  local_220 = 0;
  uStack_218 = 0;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_240[0] = PTR_DAT_04bb2d80 + 0x10;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_70 = 0xffffffff;
  local_58 = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_258 = PTR_DAT_04bb2d48 + 0x10;
  local_210 = local_240[0];
  local_1e0 = local_240[0];
  local_1b0 = local_240[0];
  local_180 = local_240[0];
  local_150 = local_240[0];
  local_120 = local_240[0];
  local_f0 = local_240[0];
  local_c0 = local_240[0];
  local_90 = local_240[0];
  FUN_006f1750(&local_258);
  local_70 = 0xffffffff;
  local_58 = local_58 & 0xffffffff00000000;
  local_68 = 0;
  uStack_60 = 0;
  lVar6 = (**(code **)(*param_1 + 0x18))(param_1);
  lVar7 = (**(code **)(*param_1 + 0x18))(param_1);
  if (((lVar7 != 0) && (uVar8 = (**(code **)(*param_1 + 0x20))(param_1), lVar6 != 0)) &&
     ((int)local_70 < 9)) {
    local_70 = local_70 + 1;
    uVar3 = (ulong)local_70;
    bVar5 = 9 < local_70;
    plVar1 = local_250 + uVar3 * 6;
    if (bVar5) {
      plVar1 = local_250;
    }
    *plVar1 = lVar6;
    plVar1 = local_250 + uVar3 * 6 + 1;
    if (bVar5) {
      plVar1 = local_250 + 1;
    }
    *plVar1 = lVar7 + (uVar8 & 0xffffffff) * 2;
    ppuVar2 = local_240 + uVar3 * 6;
    if (bVar5) {
      ppuVar2 = local_240;
    }
    *ppuVar2 = puVar4 + 0x10;
  }
  (**(code **)(local_258 + 0x18))(&local_258);
  FUN_006f1490(&local_258);
  return local_58._4_4_;
}

