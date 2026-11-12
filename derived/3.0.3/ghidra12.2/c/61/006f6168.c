
void FUN_006f6168(undefined8 param_1,long *param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  ulong uVar3;
  undefined *puVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined **local_260;
  long local_258 [2];
  undefined *local_248 [4];
  undefined8 local_228;
  undefined8 uStack_220;
  undefined *local_218;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined *local_1e8;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined *local_1b8;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined *local_188;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined *local_158;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined *local_128;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined *local_f8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined *local_c8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined *local_98;
  uint local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined8 local_58;
  
  memset(local_258,0,0x1e0);
  puVar4 = PTR_DAT_04bb2d80;
  local_78 = 0xffffffff;
  local_228 = 0;
  uStack_220 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_248[0] = PTR_DAT_04bb2d80 + 0x10;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_60 = 0;
  local_260 = &PTR_LAB_048fc908;
  local_198 = 0;
  uStack_190 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_218 = local_248[0];
  local_1e8 = local_248[0];
  local_1b8 = local_248[0];
  local_188 = local_248[0];
  local_158 = local_248[0];
  local_128 = local_248[0];
  local_f8 = local_248[0];
  local_c8 = local_248[0];
  local_98 = local_248[0];
  local_58 = param_1;
  FUN_006f1750(&local_260);
  local_78 = 0xffffffff;
  local_60 = 0;
  local_70 = 0;
  uStack_68 = 0;
  lVar6 = (**(code **)(*param_2 + 0x18))(param_2);
  lVar7 = (**(code **)(*param_2 + 0x18))(param_2);
  if (((lVar7 != 0) && (uVar8 = (**(code **)(*param_2 + 0x20))(param_2), lVar6 != 0)) &&
     ((int)local_78 < 9)) {
    local_78 = local_78 + 1;
    uVar3 = (ulong)local_78;
    bVar5 = 9 < local_78;
    plVar1 = local_258 + uVar3 * 6;
    if (bVar5) {
      plVar1 = local_258;
    }
    *plVar1 = lVar6;
    plVar1 = local_258 + uVar3 * 6 + 1;
    if (bVar5) {
      plVar1 = local_258 + 1;
    }
    *plVar1 = lVar7 + (uVar8 & 0xffffffff) * 2;
    ppuVar2 = local_248 + uVar3 * 6;
    if (bVar5) {
      ppuVar2 = local_248;
    }
    *ppuVar2 = puVar4 + 0x10;
  }
  (*(code *)local_260[3])(&local_260);
  FUN_006f1490(&local_260);
  return;
}

