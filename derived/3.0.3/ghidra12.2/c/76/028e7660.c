
void FUN_028e7660(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined1 uVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined8 local_258;
  undefined1 local_250;
  int local_24c;
  undefined2 local_248;
  undefined2 local_246;
  float local_244 [35];
  undefined1 auStack_1b8 [140];
  undefined1 auStack_12c [140];
  undefined8 local_a0;
  undefined **local_98;
  undefined8 *puStack_90;
  undefined1 local_88 [8];
  float *pfStack_80;
  undefined1 auStack_68 [4];
  uint local_64;
  
  memset(local_244,0,0x1a4);
  FUN_0376c3f0(auStack_1b8,auStack_12c,0,1);
  local_258 = (ulong)local_258._4_4_ << 0x20;
  FUN_028e7b70(param_1,&local_258,auStack_1b8,&local_248);
  puVar2 = PTR_DAT_04bb3768;
  pfStack_80._0_4_ = (uint)(uint3)pfStack_80;
  local_a0 = (float *)CONCAT53(local_a0._3_5_,0x80023);
  puStack_90 = (undefined8 *)(local_88 + 4);
  local_88._0_5_ = 8;
  ppuVar1 = (undefined **)(PTR_DAT_04bb3768 + 0x10);
  local_98 = ppuVar1;
  uVar4 = FUN_0376b510(&local_98,local_248);
  if ((uVar4 & 1) != 0) {
    FUN_020fd3a0(&local_a0,&local_98);
  }
  local_98 = (undefined **)CONCAT62(CONCAT51(local_98._3_5_,local_a0._2_1_),(undefined2)local_a0);
  *param_3 = (char)local_a0;
  param_3[1] = (char)((ulong)local_a0 >> 8);
  uVar3 = FUN_020fd7d8(&local_98);
  param_3[2] = uVar3;
  puStack_90 = (undefined8 *)(local_88 + 4);
  local_a0 = (float *)CONCAT53(local_a0._3_5_,0x80023);
  pfStack_80._0_4_ = (uint)(uint3)pfStack_80;
  local_88._0_5_ = 8;
  local_98 = ppuVar1;
  uVar4 = FUN_0376b510(&local_98,local_246);
  if ((uVar4 & 1) != 0) {
    FUN_020fd3a0(&local_a0,&local_98);
  }
  local_98 = (undefined **)CONCAT62(CONCAT51(local_98._3_5_,local_a0._2_1_),(undefined2)local_a0);
  param_3[3] = (char)local_a0;
  param_3[4] = (char)((ulong)local_a0 >> 8);
  uVar3 = FUN_020fd7d8(&local_98);
  param_3[5] = uVar3;
  local_24c = 0;
  uVar6 = 0;
  do {
    uVar4 = FUN_0377fb80(uVar6);
    if ((uVar4 & 1) != 0) {
      local_258 = (ulong)uVar6;
      iVar5 = 0;
      local_250 = local_24c == 1;
      local_a0 = local_244;
      do {
        if (*(byte *)(param_1 + (long)iVar5 * 0x1178 + 2) == (uint)local_258) {
          pfStack_80._0_4_ = (uint)(uint3)pfStack_80;
          local_88._0_5_ = 8;
          local_98 = (undefined **)(puVar2 + 0x10);
          puStack_90 = (undefined8 *)(local_88 + 4);
          FUN_0376b510(&local_98,*(undefined2 *)(param_1 + (long)iVar5 * 0x1178));
          local_64 = 0;
          uVar4 = FUN_020fc100(&local_64,auStack_68,&local_98);
          if ((uVar4 & 1) != 0) {
            uVar4 = (ulong)local_64;
            if (0x22 < local_64) {
              uVar4 = 0;
            }
            local_244[uVar4] = local_244[uVar4] + -1.0;
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 != 0x26);
      puStack_90 = &local_258;
      local_98 = &PTR_LAB_04a926d8;
      pfStack_80 = (float *)&local_a0;
      local_88 = (undefined1  [8])param_1;
      FUN_028e9ef0(&local_98,&local_258);
    }
    uVar7 = 7;
    if ((int)uVar6 < 7) {
      uVar7 = uVar6 + 1;
    }
    uVar6 = uVar7;
  } while (uVar7 != 7);
  local_24c = 1;
  ppuVar1 = (undefined **)(PTR_DAT_04bb3768 + 0x10);
  uVar6 = 0;
  do {
    uVar4 = FUN_0377fb80(uVar6);
    if ((uVar4 & 1) != 0) {
      local_258 = (ulong)uVar6;
      iVar5 = 0;
      local_250 = local_24c == 1;
      local_a0 = local_244;
      do {
        if (*(byte *)(param_1 + (long)iVar5 * 0x1178 + 2) == (uint)local_258) {
          pfStack_80._0_4_ = (uint)(uint3)pfStack_80;
          local_88._0_5_ = 8;
          local_98 = ppuVar1;
          puStack_90 = (undefined8 *)(local_88 + 4);
          FUN_0376b510(&local_98,*(undefined2 *)(param_1 + (long)iVar5 * 0x1178));
          local_64 = 0;
          uVar4 = FUN_020fc100(&local_64,auStack_68,&local_98);
          if ((uVar4 & 1) != 0) {
            uVar4 = (ulong)local_64;
            if (0x22 < local_64) {
              uVar4 = 0;
            }
            local_244[uVar4] = local_244[uVar4] + -1.0;
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 != 0x26);
      puStack_90 = &local_258;
      local_98 = &PTR_LAB_04a926d8;
      pfStack_80 = (float *)&local_a0;
      local_88 = (undefined1  [8])param_1;
      FUN_028e9ef0(&local_98,&local_258);
    }
    uVar7 = 7;
    if ((int)uVar6 < 7) {
      uVar7 = uVar6 + 1;
    }
    uVar6 = uVar7;
  } while (uVar7 != 7);
  FUN_028e95f0(param_1);
  local_258 = DAT_05ab3138;
  if (DAT_05ab3138 != 0) {
    local_a0 = (float *)((ulong)local_a0 & 0xffffffff00000000);
    uVar4 = FUN_0377fb80(0);
    if ((uVar4 & 1) != 0) {
      puStack_90 = &local_258;
      local_98 = &PTR_LAB_04a926b0;
      pfStack_80 = local_244;
      local_88 = (undefined1  [8])param_1;
      FUN_028e9ef0(&local_98,&local_a0);
    }
    local_a0 = (float *)CONCAT44(local_a0._4_4_,1);
    uVar4 = FUN_0377fb80(1);
    if ((uVar4 & 1) != 0) {
      puStack_90 = &local_258;
      local_98 = &PTR_LAB_04a926b0;
      pfStack_80 = local_244;
      local_88 = (undefined1  [8])param_1;
      FUN_028e9ef0(&local_98,&local_a0);
    }
    local_a0 = (float *)CONCAT44(local_a0._4_4_,2);
    uVar4 = FUN_0377fb80(2);
    if ((uVar4 & 1) != 0) {
      puStack_90 = &local_258;
      local_98 = &PTR_LAB_04a926b0;
      pfStack_80 = local_244;
      local_88 = (undefined1  [8])param_1;
      FUN_028e9ef0(&local_98,&local_a0);
    }
    local_a0 = (float *)CONCAT44(local_a0._4_4_,3);
    uVar4 = FUN_0377fb80(3);
    if ((uVar4 & 1) != 0) {
      puStack_90 = &local_258;
      local_98 = &PTR_LAB_04a926b0;
      pfStack_80 = local_244;
      local_88 = (undefined1  [8])param_1;
      FUN_028e9ef0(&local_98,&local_a0);
    }
    local_a0 = (float *)CONCAT44(local_a0._4_4_,4);
    uVar4 = FUN_0377fb80(4);
    if ((uVar4 & 1) != 0) {
      puStack_90 = &local_258;
      local_98 = &PTR_LAB_04a926b0;
      pfStack_80 = local_244;
      local_88 = (undefined1  [8])param_1;
      FUN_028e9ef0(&local_98,&local_a0);
    }
    local_a0 = (float *)CONCAT44(local_a0._4_4_,5);
    uVar4 = FUN_0377fb80();
    if ((uVar4 & 1) != 0) {
      puStack_90 = &local_258;
      local_98 = &PTR_LAB_04a926b0;
      pfStack_80 = local_244;
      local_88 = (undefined1  [8])param_1;
      FUN_028e9ef0(&local_98,&local_a0);
    }
    local_a0 = (float *)CONCAT44(local_a0._4_4_,6);
    uVar4 = FUN_0377fb80(6);
    if ((uVar4 & 1) != 0) {
      puStack_90 = &local_258;
      local_98 = &PTR_LAB_04a926b0;
      pfStack_80 = local_244;
      local_88 = (undefined1  [8])param_1;
      FUN_028e9ef0(&local_98,&local_a0);
    }
    FUN_028e95f0(param_1);
  }
  return;
}

