
void FUN_028eac00(long param_1,uint *param_2,undefined1 *param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined1 uVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint local_260 [2];
  undefined1 local_258;
  uint local_254;
  int local_250;
  undefined2 local_24c;
  undefined2 local_24a;
  float local_248 [35];
  undefined1 auStack_1bc [140];
  undefined1 auStack_130 [144];
  undefined8 local_a0;
  undefined **local_98;
  undefined1 *puStack_90;
  undefined8 local_88;
  undefined8 *puStack_80;
  undefined1 auStack_68 [4];
  uint local_64;
  
  memset(auStack_1bc,0,0x118);
  FUN_0376c3f0(auStack_1bc,auStack_130,0,1);
  local_260[0] = 1;
  FUN_028e7b70(param_1,local_260,auStack_1bc,&local_24c);
  puVar2 = PTR_DAT_04bb3768;
  puStack_80._0_4_ = (uint)(uint3)puStack_80;
  local_a0 = (float *)CONCAT53(local_a0._3_5_,0x80023);
  puStack_90 = (undefined1 *)((long)&local_88 + 4);
  local_88 = CONCAT35(local_88._5_3_,8);
  ppuVar1 = (undefined **)(PTR_DAT_04bb3768 + 0x10);
  local_98 = ppuVar1;
  uVar4 = FUN_0376b510(&local_98,local_24c);
  if ((uVar4 & 1) != 0) {
    FUN_020fd3a0(&local_a0,&local_98);
  }
  local_98 = (undefined **)CONCAT62(CONCAT51(local_98._3_5_,local_a0._2_1_),(undefined2)local_a0);
  *param_3 = (char)local_a0;
  param_3[1] = (char)((ulong)local_a0 >> 8);
  uVar3 = FUN_020fd7d8(&local_98);
  param_3[2] = uVar3;
  puStack_90 = (undefined1 *)((long)&local_88 + 4);
  local_a0 = (float *)CONCAT53(local_a0._3_5_,0x80023);
  puStack_80._0_4_ = (uint)(uint3)puStack_80;
  local_88 = CONCAT35(local_88._5_3_,8);
  local_98 = ppuVar1;
  uVar4 = FUN_0376b510(&local_98,local_24a);
  if ((uVar4 & 1) != 0) {
    FUN_020fd3a0(&local_a0,&local_98);
  }
  local_98 = (undefined **)CONCAT62(CONCAT51(local_98._3_5_,local_a0._2_1_),(undefined2)local_a0);
  param_3[3] = (char)local_a0;
  param_3[4] = (char)((ulong)local_a0 >> 8);
  uVar3 = FUN_020fd7d8(&local_98);
  param_3[5] = uVar3;
  local_250 = 0;
  uVar7 = 0;
  do {
    local_254 = uVar7;
    uVar4 = FUN_0377fb80(uVar7);
    if (((uVar4 & 1) != 0) && (*param_2 != local_254)) {
      local_260[0] = local_254;
      iVar5 = 0;
      local_248[0x22] = 0.0;
      local_248[0] = 0.0;
      local_248[1] = 0.0;
      local_260[1] = 1;
      local_248[0x1e] = 0.0;
      local_248[0x1f] = 0.0;
      local_248[0x20] = 0.0;
      local_248[0x21] = 0.0;
      local_248[0x1a] = 0.0;
      local_248[0x1b] = 0.0;
      local_248[0x1c] = 0.0;
      local_248[0x1d] = 0.0;
      local_248[0x16] = 0.0;
      local_248[0x17] = 0.0;
      local_248[0x18] = 0.0;
      local_248[0x19] = 0.0;
      local_248[0x12] = 0.0;
      local_248[0x13] = 0.0;
      local_248[0x14] = 0.0;
      local_248[0x15] = 0.0;
      local_248[0xe] = 0.0;
      local_248[0xf] = 0.0;
      local_248[0x10] = 0.0;
      local_248[0x11] = 0.0;
      local_248[10] = 0.0;
      local_248[0xb] = 0.0;
      local_248[0xc] = 0.0;
      local_248[0xd] = 0.0;
      local_248[6] = 0.0;
      local_248[7] = 0.0;
      local_248[8] = 0.0;
      local_248[9] = 0.0;
      local_248[2] = 0.0;
      local_248[3] = 0.0;
      local_248[4] = 0.0;
      local_248[5] = 0.0;
      local_258 = local_250 == 1;
      local_a0 = local_248;
      do {
        if (*(byte *)(param_1 + (long)iVar5 * 0x1178 + 2) == local_260[0]) {
          puStack_80._0_4_ = (uint)(uint3)puStack_80;
          local_88 = CONCAT35(local_88._5_3_,8);
          local_98 = (undefined **)(puVar2 + 0x10);
          puStack_90 = (undefined1 *)((long)&local_88 + 4);
          FUN_0376b510(&local_98,*(undefined2 *)(param_1 + (long)iVar5 * 0x1178));
          local_64 = 0;
          uVar4 = FUN_020fc100(&local_64,auStack_68,&local_98);
          if ((uVar4 & 1) != 0) {
            uVar4 = (ulong)local_64;
            if (0x22 < local_64) {
              uVar4 = 0;
            }
            local_248[uVar4] = local_248[uVar4] + -1.0;
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 != 0x26);
      local_98 = &PTR_LAB_04a926d8;
      puStack_80 = &local_a0;
      puStack_90 = (undefined1 *)local_260;
      local_88 = param_1;
      FUN_028e9ef0(&local_98,local_260);
    }
    uVar6 = 7;
    if ((int)uVar7 < 7) {
      uVar6 = uVar7 + 1;
    }
    uVar7 = uVar6;
  } while (uVar6 != 7);
  local_250 = 1;
  ppuVar1 = (undefined **)(PTR_DAT_04bb3768 + 0x10);
  uVar7 = 0;
  do {
    local_254 = uVar7;
    uVar4 = FUN_0377fb80(uVar7);
    if (((uVar4 & 1) != 0) && (*param_2 != local_254)) {
      local_260[0] = local_254;
      iVar5 = 0;
      local_248[0x22] = 0.0;
      local_248[0] = 0.0;
      local_248[1] = 0.0;
      local_260[1] = 1;
      local_248[0x1e] = 0.0;
      local_248[0x1f] = 0.0;
      local_248[0x20] = 0.0;
      local_248[0x21] = 0.0;
      local_248[0x1a] = 0.0;
      local_248[0x1b] = 0.0;
      local_248[0x1c] = 0.0;
      local_248[0x1d] = 0.0;
      local_248[0x16] = 0.0;
      local_248[0x17] = 0.0;
      local_248[0x18] = 0.0;
      local_248[0x19] = 0.0;
      local_248[0x12] = 0.0;
      local_248[0x13] = 0.0;
      local_248[0x14] = 0.0;
      local_248[0x15] = 0.0;
      local_248[0xe] = 0.0;
      local_248[0xf] = 0.0;
      local_248[0x10] = 0.0;
      local_248[0x11] = 0.0;
      local_248[10] = 0.0;
      local_248[0xb] = 0.0;
      local_248[0xc] = 0.0;
      local_248[0xd] = 0.0;
      local_248[6] = 0.0;
      local_248[7] = 0.0;
      local_248[8] = 0.0;
      local_248[9] = 0.0;
      local_248[2] = 0.0;
      local_248[3] = 0.0;
      local_248[4] = 0.0;
      local_248[5] = 0.0;
      local_258 = local_250 == 1;
      local_a0 = local_248;
      do {
        if (*(byte *)(param_1 + (long)iVar5 * 0x1178 + 2) == local_260[0]) {
          puStack_80._0_4_ = (uint)(uint3)puStack_80;
          local_88 = CONCAT35(local_88._5_3_,8);
          local_98 = ppuVar1;
          puStack_90 = (undefined1 *)((long)&local_88 + 4);
          FUN_0376b510(&local_98,*(undefined2 *)(param_1 + (long)iVar5 * 0x1178));
          local_64 = 0;
          uVar4 = FUN_020fc100(&local_64,auStack_68,&local_98);
          if ((uVar4 & 1) != 0) {
            uVar4 = (ulong)local_64;
            if (0x22 < local_64) {
              uVar4 = 0;
            }
            local_248[uVar4] = local_248[uVar4] + -1.0;
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 != 0x26);
      local_98 = &PTR_LAB_04a926d8;
      puStack_80 = &local_a0;
      puStack_90 = (undefined1 *)local_260;
      local_88 = param_1;
      FUN_028e9ef0(&local_98,local_260);
    }
    uVar6 = 7;
    if ((int)uVar7 < 7) {
      uVar6 = uVar7 + 1;
    }
    uVar7 = uVar6;
  } while (uVar6 != 7);
  FUN_028e95f0(param_1);
  return;
}

