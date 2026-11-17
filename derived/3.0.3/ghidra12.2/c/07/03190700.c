
void FUN_03190700(long param_1,long param_2,ulong param_3)

{
  uint *puVar1;
  long lVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  undefined *local_3e8;
  undefined2 local_3e0;
  undefined2 uStack_3de;
  undefined4 local_3dc;
  undefined4 uStack_3d8;
  undefined4 local_3d4;
  undefined *local_3d0;
  undefined8 uStack_3c8;
  undefined4 local_3c0;
  undefined1 local_3bc;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined4 local_3a8;
  undefined *local_3a0;
  undefined1 *puStack_398;
  undefined4 local_390;
  undefined1 local_38c [63];
  undefined1 local_34d;
  undefined *local_348;
  undefined1 *puStack_340;
  undefined4 local_338;
  undefined1 local_334 [63];
  undefined1 local_2f5;
  undefined8 local_2f0;
  undefined *local_2e8;
  undefined8 uStack_2e0;
  undefined4 local_2d8;
  undefined1 local_2d4;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined4 local_2c0;
  undefined *local_2b8;
  undefined1 *puStack_2b0;
  undefined4 local_2a8;
  undefined1 local_2a4 [63];
  undefined1 local_265;
  undefined *local_260;
  undefined1 *puStack_258;
  undefined4 local_250;
  undefined1 local_24c [63];
  undefined1 local_20d;
  undefined8 local_208;
  undefined *local_200;
  undefined8 uStack_1f8;
  undefined4 local_1f0;
  undefined1 local_1ec;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined *local_1d0;
  undefined1 *local_1c8;
  undefined4 local_1c0;
  undefined1 local_1bc [63];
  undefined1 local_17d;
  undefined *local_178;
  undefined1 *local_170;
  undefined4 local_168;
  undefined1 local_164 [63];
  undefined1 local_125;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined *local_108;
  undefined1 *local_100;
  undefined4 local_f8;
  undefined1 local_f4 [63];
  undefined1 local_b5;
  undefined *local_b0;
  undefined1 *local_a8;
  undefined4 local_a0;
  undefined1 local_9c [63];
  undefined1 local_5d;
  undefined *local_58;
  int local_50;
  undefined1 local_4c;
  undefined8 local_48;
  undefined2 local_40;
  undefined8 local_38;
  
  if (param_1 == 0) {
    return;
  }
  if (((param_3 & 1) == 0) && (*(char *)(param_1 + 0x2a0) == '\0')) {
    return;
  }
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
    if (0xff < (uint)(int)sVar3) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x19 & 1) != 0) {
      local_3e8 = PTR_DAT_04bb2020 + 0x10;
      local_3e0 = 0x5fdb;
      uStack_3de = 0x409;
      local_3dc = 0;
      iVar5 = FUN_02758850(&local_3e8);
      if (iVar5 != 0) {
        if (*(long *)(param_2 + 0x700) == 0) {
          return;
        }
        lVar6 = **(long **)(*(long *)(param_2 + 0x700) + 0x220);
        if (lVar6 == 0) {
          return;
        }
        local_b0 = PTR_DAT_04bb2bc0 + 0x10;
        local_200 = PTR_DAT_04bb2e00 + 0x10;
        local_50 = *(int *)PTR_DAT_04bc0b30;
        local_58 = PTR_DAT_04bc0a78 + 0x10;
        local_3e8 = PTR_DAT_04bc0bf0 + 0x10;
        iVar5 = *(int *)(param_1 + 0x260);
        *(int *)PTR_DAT_04bc0b30 = local_50 + 1;
        lVar7 = *(long *)PTR_DAT_04bb28f8;
        if (**(int **)PTR_DAT_04bb3448 == 0xc) {
          iVar4 = iVar5 % 10;
          iVar5 = iVar5 % 100;
          if ((iVar4 == 1) && (iVar5 != 0xb)) {
            uVar9 = 0x44;
          }
          else if ((((iVar4 == 2) && (iVar5 != 0xc)) || ((iVar4 == 3 && (iVar5 != 0xd)))) ||
                  ((uVar9 = 0x46, iVar4 == 4 && (iVar5 != 0xe)))) {
            uVar9 = 0x45;
          }
        }
        else {
          uVar8 = 0x44;
          if (iVar5 != 0) {
            uVar8 = 0x46;
          }
          uVar9 = 0x45;
          if (iVar5 != 1) {
            uVar9 = uVar8;
          }
        }
        goto LAB_03190ca0;
      }
    }
  }
  if (*(long *)(param_2 + 0x6e0) == 0) {
    return;
  }
  lVar6 = **(long **)(*(long *)(param_2 + 0x6e0) + 0x2e0);
  if (lVar6 == 0) {
    return;
  }
  local_b0 = PTR_DAT_04bb2bc0 + 0x10;
  local_200 = PTR_DAT_04bb2e00 + 0x10;
  local_50 = *(int *)PTR_DAT_04bc0b30;
  local_58 = PTR_DAT_04bc0a78 + 0x10;
  local_3e8 = PTR_DAT_04bc0bf0 + 0x10;
  iVar5 = *(int *)(param_1 + 0x260);
  *(int *)PTR_DAT_04bc0b30 = local_50 + 1;
  lVar7 = *(long *)PTR_DAT_04bb28f8;
  if (**(int **)PTR_DAT_04bb3448 == 0xc) {
    iVar4 = iVar5 % 10;
    iVar5 = iVar5 % 100;
    if ((iVar4 == 1) && (iVar5 != 0xb)) {
      uVar9 = 1;
    }
    else if ((((iVar4 == 2) && (iVar5 != 0xc)) || ((iVar4 == 3 && (iVar5 != 0xd)))) ||
            ((uVar9 = 3, iVar4 == 4 && (iVar5 != 0xe)))) {
      uVar9 = 2;
    }
  }
  else {
    uVar8 = 3;
    if (iVar5 == 0) {
      uVar8 = 1;
    }
    uVar9 = 2;
    if (iVar5 != 1) {
      uVar9 = uVar8;
    }
  }
LAB_03190ca0:
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_4c = 0;
  local_5d = 0;
  local_9c[0] = 0;
  local_a0 = 0x40;
  local_a8 = local_9c;
  local_b5 = 0;
  local_f4[0] = 0;
  local_f8 = 0x40;
  local_100 = local_f4;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  local_125 = 0;
  local_164[0] = 0;
  local_168 = 0x40;
  local_170 = local_164;
  local_17d = 0;
  local_1bc[0] = 0;
  local_1c0 = 0x40;
  local_1c8 = local_1bc;
  local_1d8 = 0xffffffff;
  local_1e0 = 0xffffffff00000000;
  local_1e8 = 0xffffffff;
  local_1ec = 0;
  local_1f0 = 0;
  uStack_1f8 = 0;
  local_208 = 0;
  local_20d = 0;
  local_24c[0] = 0;
  local_250 = 0x40;
  puStack_258 = local_24c;
  local_265 = 0;
  local_2a4[0] = 0;
  local_2a8 = 0x40;
  puStack_2b0 = local_2a4;
  local_2c0 = 0xffffffff;
  uStack_2c8 = 0xffffffff00000000;
  local_2d0 = 0xffffffff;
  local_2d4 = 0;
  local_2d8 = 0;
  uStack_2e0 = 0;
  local_2f0 = 0;
  local_2f5 = 0;
  local_334[0] = 0;
  local_338 = 0x40;
  puStack_340 = local_334;
  local_34d = 0;
  local_38c[0] = 0;
  local_390 = 0x40;
  puStack_398 = local_38c;
  local_3a8 = 0xffffffff;
  uStack_3b0 = 0xffffffff00000000;
  local_3b8 = 0xffffffff;
  local_3bc = 0;
  local_3c0 = 0;
  uStack_3c8 = 0;
  local_3d4 = 0;
  uStack_3d8 = 0;
  local_3dc = 0;
  local_3e0 = 0x100;
  lVar2 = lVar7 + 0x29f8 + (ulong)uVar9 * 0x128;
  if (0x50 < uVar9) {
    lVar2 = lVar7 + 0x29f8;
  }
  local_3d0 = local_200;
  local_3a0 = local_b0;
  local_348 = local_b0;
  local_2e8 = local_200;
  local_2b8 = local_b0;
  local_260 = local_b0;
  local_1d0 = local_b0;
  local_178 = local_b0;
  local_108 = local_b0;
  FUN_01bea4e8(&local_3e8,lVar6,lVar2);
  FUN_01bea9c8(&local_3e8);
  FUN_01be9eb8(&local_3e8);
  return;
}

