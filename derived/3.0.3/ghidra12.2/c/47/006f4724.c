
undefined8 FUN_006f4724(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined *puVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  void *__s1;
  void *__s2;
  undefined *local_270;
  long local_268 [2];
  undefined *local_258 [4];
  undefined8 local_238;
  undefined8 uStack_230;
  undefined *local_228;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined *local_1f8;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined *local_1c8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined *local_198;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined *local_168;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined *local_138;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined *local_108;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined *local_d8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined *local_a8;
  uint local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if (param_1 == param_2) {
    return 1;
  }
  memset(local_268,0,0x1e0);
  puVar6 = PTR_DAT_04bb2d80;
  local_238 = 0;
  uStack_230 = 0;
  local_208 = 0;
  uStack_200 = 0;
  puVar1 = PTR_DAT_04bb2d80 + 0x10;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_88 = 0xffffffff;
  local_70 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_80 = 0;
  uStack_78 = 0;
  puVar2 = PTR_DAT_04bb2d48 + 0x10;
  local_270 = puVar2;
  local_258[0] = puVar1;
  local_228 = puVar1;
  local_1f8 = puVar1;
  local_1c8 = puVar1;
  local_198 = puVar1;
  local_168 = puVar1;
  local_138 = puVar1;
  local_108 = puVar1;
  local_d8 = puVar1;
  local_a8 = puVar1;
  FUN_006f1750(&local_270);
  local_88 = 0xffffffff;
  local_70 = local_70 & 0xffffffff00000000;
  local_80 = 0;
  uStack_78 = 0;
  lVar10 = (**(code **)(*param_1 + 0x18))(param_1);
  lVar11 = (**(code **)(*param_1 + 0x18))(param_1);
  if (((lVar11 != 0) && (uVar12 = (**(code **)(*param_1 + 0x20))(param_1), lVar10 != 0)) &&
     ((int)local_88 < 9)) {
    local_88 = local_88 + 1;
    uVar13 = (ulong)local_88;
    bVar8 = 9 < local_88;
    plVar3 = local_268 + uVar13 * 6;
    if (bVar8) {
      plVar3 = local_268;
    }
    *plVar3 = lVar10;
    plVar3 = local_268 + uVar13 * 6 + 1;
    if (bVar8) {
      plVar3 = local_268 + 1;
    }
    *plVar3 = lVar11 + (uVar12 & 0xffffffff) * 2;
    ppuVar4 = local_258 + uVar13 * 6;
    if (bVar8) {
      ppuVar4 = local_258;
    }
    *ppuVar4 = puVar6 + 0x10;
  }
  (**(code **)(local_270 + 0x18))(&local_270);
  FUN_006f1490(&local_270);
  uVar7 = local_70._4_4_;
  uVar12 = (ulong)local_70._4_4_;
  memset(local_268,0,0x1e0);
  local_238 = 0;
  uStack_230 = 0;
  local_88 = 0xffffffff;
  local_70 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_270 = puVar2;
  local_258[0] = puVar1;
  local_228 = puVar1;
  local_1f8 = puVar1;
  local_1c8 = puVar1;
  local_198 = puVar1;
  local_168 = puVar1;
  local_138 = puVar1;
  local_108 = puVar1;
  local_d8 = puVar1;
  local_a8 = puVar1;
  FUN_006f1750(&local_270);
  local_88 = 0xffffffff;
  local_70 = local_70 & 0xffffffff00000000;
  local_80 = 0;
  uStack_78 = 0;
  lVar10 = (**(code **)(*param_2 + 0x18))(param_2);
  lVar11 = (**(code **)(*param_2 + 0x18))(param_2);
  if (((lVar11 != 0) && (uVar13 = (**(code **)(*param_2 + 0x20))(param_2), lVar10 != 0)) &&
     ((int)local_88 < 9)) {
    local_88 = local_88 + 1;
    uVar5 = (ulong)local_88;
    bVar8 = 9 < local_88;
    plVar3 = local_268 + uVar5 * 6;
    if (bVar8) {
      plVar3 = local_268;
    }
    *plVar3 = lVar10;
    plVar3 = local_268 + uVar5 * 6 + 1;
    if (bVar8) {
      plVar3 = local_268 + 1;
    }
    *plVar3 = lVar11 + (uVar13 & 0xffffffff) * 2;
    ppuVar4 = local_258 + uVar5 * 6;
    if (bVar8) {
      ppuVar4 = local_258;
    }
    *ppuVar4 = PTR_DAT_04bb2d80 + 0x10;
  }
  (**(code **)(local_270 + 0x18))(&local_270);
  FUN_006f1490(&local_270);
  if (uVar7 == local_70._4_4_) {
    __s1 = (void *)(**(code **)(*param_1 + 0x18))(param_1);
    __s2 = (void *)(**(code **)(*param_2 + 0x18))(param_2);
    if ((__s1 == __s2) || (iVar9 = memcmp(__s1,__s2,uVar12 << 1), iVar9 != 0)) {
      return 1;
    }
  }
  return 0;
}

