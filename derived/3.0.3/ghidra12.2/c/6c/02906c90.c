
void FUN_02906c90(uint *param_1,long *param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  uint uVar3;
  undefined *puVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined **local_268;
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
  uint *local_60;
  undefined4 local_58;
  undefined2 local_54;
  char local_52;
  
  uVar3 = *param_1;
  if (0 < (int)uVar3) {
    uVar7 = (ulong)uVar3 & 3;
    if (uVar3 < 4) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      do {
        lVar9 = uVar8 * 2;
        uVar8 = uVar8 + 4;
        *(undefined2 *)(*(long *)(param_1 + 2) + lVar9) = 0;
        *(undefined2 *)(*(long *)(param_1 + 2) + lVar9 + 2) = 0;
        *(undefined2 *)(*(long *)(param_1 + 2) + lVar9 + 4) = 0;
        *(undefined2 *)(*(long *)(param_1 + 2) + lVar9 + 6) = 0;
      } while (((ulong)uVar3 & 0xfffffffc) != uVar8);
    }
    if ((uVar3 & 3) != 0) {
      lVar9 = uVar8 << 1;
      do {
        uVar7 = uVar7 - 1;
        *(undefined2 *)(*(long *)(param_1 + 2) + lVar9) = 0;
        lVar9 = lVar9 + 2;
      } while (uVar7 != 0);
    }
  }
  memset(local_260,0,0x1e0);
  puVar4 = PTR_DAT_04bb2d80;
  local_80 = 0xffffffff;
  local_230 = 0;
  uStack_228 = 0;
  local_200 = 0;
  uStack_1f8 = 0;
  local_250[0] = PTR_DAT_04bb2d80 + 0x10;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_68 = 0;
  local_268 = &PTR_LAB_04a92818;
  local_58 = 0;
  local_54 = 0x100;
  local_52 = '\x01';
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
  local_220 = local_250[0];
  local_1f0 = local_250[0];
  local_1c0 = local_250[0];
  local_190 = local_250[0];
  local_160 = local_250[0];
  local_130 = local_250[0];
  local_100 = local_250[0];
  local_d0 = local_250[0];
  local_a0 = local_250[0];
  local_60 = param_1;
  FUN_006f1750(&local_268);
  local_80 = 0xffffffff;
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  lVar9 = (**(code **)(*param_2 + 0x18))(param_2);
  lVar6 = (**(code **)(*param_2 + 0x18))(param_2);
  if (((lVar6 != 0) && (uVar7 = (**(code **)(*param_2 + 0x20))(param_2), lVar9 != 0)) &&
     ((int)local_80 < 9)) {
    local_80 = local_80 + 1;
    uVar8 = (ulong)local_80;
    bVar5 = 9 < local_80;
    plVar1 = local_260 + uVar8 * 6;
    if (bVar5) {
      plVar1 = local_260;
    }
    *plVar1 = lVar9;
    plVar1 = local_260 + uVar8 * 6 + 1;
    if (bVar5) {
      plVar1 = local_260 + 1;
    }
    *plVar1 = lVar6 + (uVar7 & 0xffffffff) * 2;
    ppuVar2 = local_250 + uVar8 * 6;
    if (bVar5) {
      ppuVar2 = local_250;
    }
    *ppuVar2 = puVar4 + 0x10;
  }
  (*(code *)local_268[3])(&local_268);
  FUN_006f1490(&local_268);
  if ((((char)local_54 != '\0' || local_54._1_1_ != '\0') || (local_52 != '\0')) &&
     (lVar9 = (**(code **)(*param_2 + 0x60))(param_2), **(char **)(lVar9 + 8) == '\0')) {
    (**(code **)(*param_2 + 0x68))(param_2);
  }
  return;
}

