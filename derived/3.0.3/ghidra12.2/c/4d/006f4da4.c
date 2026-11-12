
void FUN_006f4da4(long *param_1,long param_2,undefined1 param_3)

{
  long *plVar1;
  undefined **ppuVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined *local_268;
  long local_260 [2];
  undefined *local_250 [4];
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
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  uint local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  long local_60;
  undefined1 local_58;
  undefined1 local_57;
  
  memset(local_260,0,0x1e0);
  puVar5 = PTR_DAT_04bb2d80;
  puVar4 = PTR_DAT_04bb2d78;
  local_230 = 0;
  uStack_228 = 0;
  local_200 = 0;
  uStack_1f8 = 0;
  local_250[0] = PTR_DAT_04bb2d80 + 0x10;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_80 = 0xffffffff;
  local_68 = 0;
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
  local_b0 = 0;
  uStack_a8 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_268 = PTR_DAT_04bb2d78 + 0x10;
  **(undefined2 **)(param_2 + 8) = 0;
  local_58 = 0;
  local_220 = local_250[0];
  local_1f0 = local_250[0];
  local_1c0 = local_250[0];
  local_190 = local_250[0];
  local_160 = local_250[0];
  local_130 = local_250[0];
  local_100 = local_250[0];
  local_d0 = local_250[0];
  local_a0 = local_250[0];
  local_60 = param_2;
  local_57 = param_3;
  (**(code **)(puVar4 + 0x20))(&local_268);
  local_80 = 0xffffffff;
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  lVar7 = (**(code **)(*param_1 + 0x18))(param_1);
  lVar8 = (**(code **)(*param_1 + 0x18))(param_1);
  if (((lVar8 != 0) && (uVar9 = (**(code **)(*param_1 + 0x20))(param_1), lVar7 != 0)) &&
     ((int)local_80 < 9)) {
    local_80 = local_80 + 1;
    uVar3 = (ulong)local_80;
    bVar6 = 9 < local_80;
    plVar1 = local_260 + uVar3 * 6;
    if (bVar6) {
      plVar1 = local_260;
    }
    *plVar1 = lVar7;
    plVar1 = local_260 + uVar3 * 6 + 1;
    if (bVar6) {
      plVar1 = local_260 + 1;
    }
    *plVar1 = lVar8 + (uVar9 & 0xffffffff) * 2;
    ppuVar2 = local_250 + uVar3 * 6;
    if (bVar6) {
      ppuVar2 = local_250;
    }
    *ppuVar2 = puVar5 + 0x10;
  }
  (**(code **)(local_268 + 0x18))(&local_268);
  FUN_006f1490(&local_268);
  return;
}

