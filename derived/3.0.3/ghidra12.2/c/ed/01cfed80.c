
undefined8 FUN_01cfed80(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined2 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined **local_200;
  undefined8 *puStack_1f8;
  undefined4 local_1f0;
  undefined1 local_1ec;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined4 local_1d8;
  undefined *local_1d0;
  undefined1 *puStack_1c8;
  undefined4 local_1c0;
  undefined1 local_1bc [63];
  undefined1 local_17d;
  undefined *local_178;
  undefined1 *puStack_170;
  undefined4 local_168;
  undefined1 local_164 [63];
  undefined1 local_125;
  undefined8 local_120;
  undefined6 uStack_118;
  undefined2 local_112;
  undefined6 uStack_110;
  undefined2 uStack_10a;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined2 local_f8;
  undefined1 auStack_f6 [6];
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined8 local_c4;
  uint local_bc;
  undefined *local_b8;
  undefined4 *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined2 local_90;
  undefined2 local_7c;
  undefined *local_78;
  undefined **local_70;
  
  puVar7 = PTR_DAT_04bb2bc0;
  local_f0 = 0;
  local_d8 = CONCAT31(local_d8._1_3_,2);
  uStack_ec = 0;
  uStack_e8 = 0;
  local_e4 = 0;
  uStack_e0 = 0;
  local_dc = 0;
  puStack_1f8 = &local_120;
  local_d4 = 0;
  local_cc = 0;
  local_c4 = 0;
  local_bc = 0;
  local_1f0 = 0xb;
  local_1ec = 0;
  local_1d8 = 0xffffffff;
  local_1c0 = 0x40;
  local_17d = 0;
  local_1bc[0] = 0;
  local_1e8 = 0xffffffff;
  uStack_1e0 = 0xffffffff00000000;
  puStack_1c8 = local_1bc;
  local_1d0 = PTR_DAT_04bb2bc0 + 0x10;
  local_168 = 0x40;
  local_125 = 0;
  local_164[0] = 0;
  puStack_170 = local_164;
  uStack_110 = 0;
  local_200 = (undefined **)(PTR_DAT_04bb5128 + 0x10);
  puVar1 = &uStack_10a;
  if (&uStack_10a <= (undefined2 *)((long)&local_120 + 2U)) {
    puVar1 = (undefined2 *)((long)&local_120 + 2U);
  }
  local_120 = 0;
  uStack_118 = 0;
  local_112 = 0;
  local_178 = local_1d0;
  memset(puStack_1f8,0,(long)puVar1 + (-0xe1 - (long)&local_200) & 0xfffffffffffffffcU | 2);
  puVar8 = PTR_DAT_04bc0d30;
  local_70 = (undefined **)(param_2 + 9);
  local_78 = PTR_DAT_04bb2020 + 0x10;
  if (*(char *)local_70 == '\0') {
    uVar10 = 0;
  }
  else if (*(char *)(param_2 + 10) == '\0') {
    uVar10 = 1;
  }
  else if (*(char *)(param_2 + 0xb) == '\0') {
    uVar10 = 2;
  }
  else if (*(char *)(param_2 + 0xc) == '\0') {
    uVar10 = 3;
  }
  else if (*(char *)(param_2 + 0xd) == '\0') {
    uVar10 = 4;
  }
  else if (*(char *)(param_2 + 0xe) == '\0') {
    uVar10 = 5;
  }
  else if (*(char *)(param_2 + 0xf) == '\0') {
    uVar10 = 6;
  }
  else if (*(char *)(param_2 + 0x10) == '\0') {
    uVar10 = 7;
  }
  else if (*(char *)(param_2 + 0x11) == '\0') {
    uVar10 = 8;
  }
  else if (*(char *)(param_2 + 0x12) == '\0') {
    uVar10 = 9;
  }
  else if (*(char *)(param_2 + 0x13) == '\0') {
    uVar10 = 10;
  }
  else if (*(char *)(param_2 + 0x14) == '\0') {
    uVar10 = 0xb;
  }
  else if (*(char *)(param_2 + 0x15) == '\0') {
    uVar10 = 0xc;
  }
  else if (*(char *)(param_2 + 0x16) == '\0') {
    uVar10 = 0xd;
  }
  else if (*(char *)(param_2 + 0x17) == '\0') {
    uVar10 = 0xe;
  }
  else if (*(char *)(param_2 + 0x18) == '\0') {
    uVar10 = 0xf;
  }
  else if (*(char *)(param_2 + 0x19) == '\0') {
    uVar10 = 0x10;
  }
  else if (*(char *)(param_2 + 0x1a) == '\0') {
    uVar10 = 0x11;
  }
  else if (*(char *)(param_2 + 0x1b) == '\0') {
    uVar10 = 0x12;
  }
  else if (*(char *)(param_2 + 0x1c) == '\0') {
    uVar10 = 0x13;
  }
  else if (*(char *)(param_2 + 0x1d) == '\0') {
    uVar10 = 0x14;
  }
  else if (*(char *)(param_2 + 0x1e) == '\0') {
    uVar10 = 0x15;
  }
  else if (*(char *)(param_2 + 0x1f) == '\0') {
    uVar10 = 0x16;
  }
  else if (*(char *)(param_2 + 0x20) == '\0') {
    uVar10 = 0x17;
  }
  else if (*(char *)(param_2 + 0x21) == '\0') {
    uVar10 = 0x18;
  }
  else if (*(char *)(param_2 + 0x22) == '\0') {
    uVar10 = 0x19;
  }
  else if (*(char *)(param_2 + 0x23) == '\0') {
    uVar10 = 0x1a;
  }
  else if (*(char *)(param_2 + 0x24) == '\0') {
    uVar10 = 0x1b;
  }
  else if (*(char *)(param_2 + 0x25) == '\0') {
    uVar10 = 0x1c;
  }
  else if (*(char *)(param_2 + 0x26) == '\0') {
    uVar10 = 0x1d;
  }
  else if (*(char *)(param_2 + 0x27) == '\0') {
    uVar10 = 0x1e;
  }
  else {
    uVar10 = 0xffffffff;
  }
  local_90 = 0;
  local_b0 = (undefined4 *)((long)&local_a8 + 4);
  local_a8._0_6_ = 0xb;
  local_b8 = PTR_DAT_04bc0d30 + 0x10;
  uVar9 = FUN_01df33d0(&local_b8,&local_78,uVar10);
  if (((uVar9 & 1) != 0) && (uVar9 = FUN_006f5580(&local_200,&local_b8), (uVar9 & 1) != 0)) {
    local_b0 = &uStack_ec;
    uVar3 = *(undefined4 *)(param_2 + 0xcf4);
    local_f0 = 0;
    local_d8 = 2;
    local_dc = 0;
    local_b8._0_4_ = 10;
    uStack_ec = 0;
    uStack_e8 = 0;
    local_e4 = 0;
    uStack_e0 = 0;
    FUN_02906c90(&local_b8,&local_200);
    if (*(char *)(param_2 + 0x29) == '\0') {
      local_b8 = (undefined *)CONCAT44(local_b8._4_4_,2);
    }
    else {
      local_b8 = (undefined *)CONCAT44(local_b8._4_4_,(uint)*(byte *)(param_2 + 0x28));
    }
    local_1e8 = 0xffffffff;
    uStack_1e0 = 0xffffffff00000000;
    local_1d0 = puVar7 + 0x10;
    local_1d8 = 0xffffffff;
    local_1f0 = 0xb;
    local_1ec = 0;
    local_d8 = CONCAT31(local_d8._1_3_,(char)local_b8);
    puStack_1c8 = local_1bc;
    puStack_1f8 = &local_120;
    local_1c0 = 0x40;
    local_17d = 0;
    local_1bc[0] = 0;
    local_168 = 0x40;
    local_125 = 0;
    local_164[0] = 0;
    puStack_170 = local_164;
    uStack_110 = 0;
    local_120 = 0;
    uStack_118 = 0;
    local_112 = 0;
    local_200 = &PTR_LAB_04917d78;
    puVar1 = &uStack_10a;
    if (&uStack_10a <= (undefined2 *)((long)&local_120 + 2U)) {
      puVar1 = (undefined2 *)((long)&local_120 + 2U);
    }
    local_178 = local_1d0;
    local_f0 = uVar3;
    memset(puStack_1f8,0,(long)puVar1 + (-0xe1 - (long)&local_200) & 0xfffffffffffffffcU | 2);
    puVar6 = PTR_DAT_04bb2020;
    lVar11 = 0;
    local_70 = (undefined **)(param_3 + 2);
    local_78 = PTR_DAT_04bb2020 + 0x10;
    do {
      if (*(char *)((long)param_3 + lVar11 + 0x10) == '\0') goto LAB_01cff200;
      if (*(char *)((long)param_3 + lVar11 + 0x11) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_01cff200;
      }
      lVar11 = lVar11 + 2;
    } while (lVar11 != 0x40);
    lVar11 = 0xffffffff;
LAB_01cff200:
    local_b8 = puVar8 + 0x10;
    local_b0 = (undefined4 *)((long)&local_a8 + 4);
    local_90 = 0;
    local_a8._0_6_ = 0xb;
    uVar9 = FUN_01df33d0(&local_b8,&local_78,lVar11);
    if (((uVar9 & 1) != 0) && (uVar9 = FUN_006f5580(&local_200,&local_b8), (uVar9 & 1) != 0)) {
      bVar4 = *(byte *)(param_2 + 0xcfc);
      local_d4 = CONCAT44(local_d4._4_4_,*(undefined4 *)(param_2 + 0xcf8));
      local_b8 = (undefined *)CONCAT44(local_b8._4_4_,10);
      local_b0 = (undefined4 *)((long)&local_d4 + 4);
      FUN_02906c90(&local_b8,&local_200);
      local_bc = (uint)bVar4;
      if (1 < local_bc) {
        local_bc = 0;
      }
      local_1f0 = 0x15;
      local_1ec = 0;
      local_1d8 = 0xffffffff;
      puStack_1f8 = &local_120;
      local_17d = 0;
      local_1bc[0] = 0;
      local_125 = 0;
      *(uint *)((long)param_1 + 100) = local_bc;
      local_164[0] = 0;
      param_1[6] = CONCAT44(uStack_ec,local_f0);
      param_1[7] = CONCAT44(local_e4,uStack_e8);
      param_1[8] = CONCAT44(local_dc,uStack_e0);
      *(undefined1 *)(param_1 + 9) = (undefined1)local_d8;
      *(undefined8 *)((long)param_1 + 0x4c) = local_d4;
      *(undefined8 *)((long)param_1 + 0x54) = local_cc;
      local_1d0 = puVar7 + 0x10;
      local_1e8 = 0xffffffff;
      uStack_1e0 = 0xffffffff00000000;
      puStack_1c8 = local_1bc;
      puStack_170 = local_164;
      *(undefined8 *)((long)param_1 + 0x5c) = local_c4;
      local_1c0 = 0x40;
      local_168 = 0x40;
      local_f8 = 0;
      local_120 = 0;
      local_108 = 0;
      uStack_100 = 0;
      uStack_118 = 0;
      local_112 = 0;
      uStack_110 = 0;
      uStack_10a = 0;
      local_200 = (undefined **)&DAT_04a3f978;
      puVar2 = auStack_f6;
      if (auStack_f6 <= (undefined1 *)((long)&local_120 + 2U)) {
        puVar2 = (undefined1 *)((long)&local_120 + 2U);
      }
      local_178 = local_1d0;
      memset(puStack_1f8,0,(ulong)(puVar2 + (-0xe1 - (long)&local_200)) & 0xfffffffffffffff8 | 2);
      local_70 = (undefined **)(param_2 + 0x2a);
      local_78 = puVar6 + 0x10;
      for (lVar11 = 0; *(char *)(param_2 + lVar11 + 0x2a) != '\0'; lVar11 = lVar11 + 2) {
        if (lVar11 == 0x3c) {
          lVar11 = 0xffffffff;
          break;
        }
        if (*(char *)(param_2 + lVar11 + 0x2b) == '\0') {
          lVar11 = lVar11 + 1;
          break;
        }
      }
      local_7c = 0;
      local_b0 = (undefined4 *)((long)&local_a8 + 4);
      local_a8._0_6_ = 0x15;
      local_b8 = PTR_DAT_04bb4c98 + 0x10;
      uVar9 = FUN_01df33d0(&local_b8,&local_78,lVar11);
      if ((uVar9 & 1) != 0) {
        uVar9 = FUN_006f5580(&local_200,&local_b8);
        if ((uVar9 & 1) != 0) {
          local_b8 = (undefined *)0x0;
          local_a0 = 0;
          local_98 = 0;
          local_78 = (undefined *)CONCAT44(local_78._4_4_,0x14);
          local_b0 = (undefined4 *)0x0;
          local_a8 = 0;
          local_70 = &local_b8;
          FUN_02906c90(&local_78,&local_200);
          param_1[3] = local_a8;
          param_1[4] = local_a0;
          param_1[5] = local_98;
          param_1[1] = local_b8;
          param_1[2] = local_b0;
          *param_1 = *param_3;
          *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd00);
          uVar5 = *(undefined1 *)(param_2 + 0xd01);
          *(undefined2 *)((long)param_1 + 0x6a) = 0;
          *(undefined1 *)((long)param_1 + 0x69) = uVar5;
          return 1;
        }
      }
    }
  }
  (*(code *)local_200[7])(&local_200);
  return 0;
}

