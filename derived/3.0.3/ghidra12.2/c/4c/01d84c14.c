
undefined1 * FUN_01d84c14(long param_1,byte *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  ushort uVar9;
  uint uVar10;
  long lVar11;
  undefined1 *puVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  byte bVar16;
  byte *pbVar17;
  int iVar18;
  long *plVar19;
  undefined *local_200;
  undefined2 *puStack_1f8;
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
  long local_120 [2];
  int local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined8 local_104;
  undefined4 local_fc;
  undefined1 local_f8;
  undefined8 local_f4;
  undefined8 local_ec;
  undefined6 local_e4;
  undefined2 uStack_de;
  undefined6 uStack_dc;
  undefined4 local_d6;
  undefined1 local_d2;
  undefined2 local_d0;
  undefined4 local_ce;
  undefined1 local_ca;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined2 local_b6;
  undefined2 local_b4;
  undefined1 local_b2;
  byte local_ac [4];
  undefined4 local_a8 [2];
  long local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined4 local_6c;
  
  if ((*(long *)(param_2 + 8) == 0) || (*(long *)(param_2 + 0x18) == 0)) {
LAB_01d84e08:
    puVar12 = (undefined1 *)0x0;
  }
  else {
    local_ac[0] = *param_2;
    if (7 < local_ac[0]) {
      local_ac[0] = 0xff;
    }
    lVar11 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_ac,1);
    puVar1 = PTR_DAT_04bb3170;
    local_110 = 0;
    local_f8 = 2;
    local_104 = 0;
    local_fc = 0;
    uStack_10c = 0;
    uStack_108 = 0;
    local_f4 = 0;
    local_ec = 0;
    local_e4 = 0;
    uStack_de = 0;
    uStack_dc = 0;
    local_d6 = 0x101;
    local_d2 = 0;
    local_d0 = 0;
    local_ce = 0x101;
    local_ca = 0;
    local_b8 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b6 = *(undefined2 *)PTR_DAT_04bb3170;
    local_b4 = 0;
    local_b2 = 0;
    pbVar17 = param_2 + 0x10;
    local_120[0] = 0;
    local_120[1] = 0;
    if (*(long *)pbVar17 != 0) {
      FUN_02645730(&local_200,param_2);
      FUN_02645a90(&local_200,local_120,pbVar17);
      if (local_120[0] == 0) goto LAB_01d84e08;
      if ((int)local_f4 == 0) {
        return (undefined1 *)0x0;
      }
      if (local_110 == 0) {
        return (undefined1 *)0x0;
      }
    }
    puVar12 = (undefined1 *)FUN_01d83ff0(param_1,param_1 + 0x60);
    if (puVar12 != (undefined1 *)0x0) {
      *(undefined2 *)(puVar12 + 0xc) = 0;
      *(undefined2 *)(puVar12 + 0x100) = 0;
      puVar12[0xf8] = 0xff;
      *(undefined8 *)(puVar12 + 0xe0) = 0;
      *(undefined8 *)(puVar12 + 0xe8) = 0;
      *(undefined2 *)(puVar12 + 0x22) = 0;
      *(undefined2 *)(puVar12 + 0x38) = 0;
      *(undefined4 *)(puVar12 + 0xfc) = 0xffffffff;
      *(undefined8 *)(puVar12 + 0x108) = 0;
      plVar19 = *(long **)(param_2 + 0x18);
      (**(code **)(*plVar19 + 0x18))(plVar19);
      puVar14 = (undefined8 *)plVar19[1];
      uVar15 = *puVar14;
      uVar5 = puVar14[1];
      uVar6 = puVar14[3];
      *(undefined8 *)(puVar12 + 0x6c) = puVar14[2];
      *(undefined8 *)(puVar12 + 0x74) = uVar6;
      *(undefined8 *)(puVar12 + 0x5c) = uVar15;
      *(undefined8 *)(puVar12 + 100) = uVar5;
      uVar15 = puVar14[4];
      uVar5 = puVar14[5];
      uVar6 = puVar14[7];
      *(undefined8 *)(puVar12 + 0x8c) = puVar14[6];
      *(undefined8 *)(puVar12 + 0x94) = uVar6;
      *(undefined8 *)(puVar12 + 0x7c) = uVar15;
      *(undefined8 *)(puVar12 + 0x84) = uVar5;
      uVar15 = puVar14[8];
      uVar5 = puVar14[9];
      uVar6 = puVar14[0xb];
      *(undefined8 *)(puVar12 + 0xac) = puVar14[10];
      *(undefined8 *)(puVar12 + 0xb4) = uVar6;
      *(undefined8 *)(puVar12 + 0x9c) = uVar15;
      *(undefined8 *)(puVar12 + 0xa4) = uVar5;
      uVar15 = puVar14[0xc];
      uVar6 = puVar14[0xd];
      uVar5 = puVar14[0xe];
      uVar7 = puVar14[0xf];
      *(undefined2 *)(puVar12 + 0xdc) = 0;
      *(undefined8 *)(puVar12 + 0xcc) = uVar5;
      *(undefined8 *)(puVar12 + 0xd4) = uVar7;
      *(undefined8 *)(puVar12 + 0xbc) = uVar15;
      *(undefined8 *)(puVar12 + 0xc4) = uVar6;
      uVar15 = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(puVar12 + 0xe8) = uVar15;
      *(undefined8 *)(puVar12 + 0xe0) = uVar15;
      if ((*(long **)(lVar11 + 0x28) == (long *)0x0) ||
         (puVar14 = (undefined8 *)**(long **)(lVar11 + 0x28), puVar14 == (undefined8 *)0x0)) {
        uVar10 = 1;
      }
      else {
        uVar10 = (**(code **)*puVar14)();
        uVar10 = uVar10 ^ 1;
      }
      lVar4 = *(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8);
      *puVar12 = *(undefined1 *)(lVar4 + 0x1d18);
      puVar12[1] = *(undefined1 *)(lVar4 + 0x1d19);
      puVar12[2] = *(undefined1 *)(lVar4 + 0x1d1a);
      puVar12[3] = *(undefined1 *)(lVar4 + 0x1d1b);
      puVar12[4] = *(undefined1 *)(lVar4 + 0x1d1c);
      puVar12[5] = *(undefined1 *)(lVar4 + 0x1d1d);
      puVar12[6] = *(undefined1 *)(lVar4 + 0x1d1e);
      puVar12[7] = *(undefined1 *)(lVar4 + 0x1d1f);
      uVar8 = *(undefined1 *)(lVar4 + 0x1d20);
      *(undefined2 *)(puVar12 + 10) = *(undefined2 *)puVar1;
      puVar12[8] = uVar8;
      puVar1 = PTR_DAT_04bb2df8 + 0x10;
      local_1f0 = 0xb;
      local_1ec = 0;
      local_1e8 = 0xffffffff;
      uStack_1e0 = 0xffffffff00000000;
      local_1d8 = 0xffffffff;
      local_1c0 = 0x40;
      local_17d = 0;
      local_1bc[0] = 0;
      local_168 = 0x40;
      local_125 = 0;
      local_164[0] = 0;
      lVar4 = *(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8);
      local_a8[0] = 10;
      puVar2 = PTR_DAT_04bb2bc0 + 0x10;
      local_a0 = lVar4 + 0xc158;
      local_200 = puVar1;
      puStack_1f8 = (undefined2 *)(puVar12 + 0x22);
      local_1d0 = puVar2;
      puStack_1c8 = local_1bc;
      local_178 = puVar2;
      puStack_170 = local_164;
      FUN_006f5e38(&local_200);
      local_80 = 0;
      uStack_78 = 0;
      local_88 = 0;
      local_70 = 1;
      local_6c = 0;
      puVar3 = PTR_DAT_04bc0cd8 + 0x10;
      local_90 = 0;
      local_98 = puVar3;
      FUN_02906b00(&local_98,&local_200,local_a8);
      local_1f0 = 0xb;
      local_1ec = 0;
      local_1d8 = 0xffffffff;
      local_1c0 = 0x40;
      local_1bc[0] = 0;
      *(undefined4 *)(puVar12 + 0x54) = *(undefined4 *)(lVar4 + 0xc154);
      local_17d = 0;
      local_168 = 0x40;
      local_125 = 0;
      local_164[0] = 0;
      local_a8[0] = 10;
      local_1e8 = 0xffffffff;
      uStack_1e0 = 0xffffffff00000000;
      local_a0 = lVar4 + 0xc13c;
      local_200 = puVar1;
      puStack_1f8 = (undefined2 *)(puVar12 + 0xc);
      local_1d0 = puVar2;
      puStack_1c8 = local_1bc;
      local_178 = puVar2;
      puStack_170 = local_164;
      FUN_006f5e38(&local_200);
      local_6c = 0;
      local_70 = 1;
      local_80 = 0;
      uStack_78 = 0;
      local_90 = 0;
      local_88 = 0;
      local_98 = puVar3;
      FUN_02906b00(&local_98,&local_200,local_a8);
      *(undefined4 *)(puVar12 + 0x50) = *(undefined4 *)(lVar4 + 0xc138);
      uVar13 = 2;
      if (*(byte *)(lVar4 + 0xc150) < 4) {
        uVar13 = (uint)*(byte *)(lVar4 + 0xc150);
      }
      local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar13);
      *(uint *)(puVar12 + 0x58) = uVar13;
      if (*(int *)(lVar4 + 0xc16c) != 1) {
        *(short *)(puVar12 + 0x100) = *(short *)(puVar12 + 0x100) + 0x100;
      }
      puVar1 = PTR_DAT_04bb4f78;
      if ((((uVar10 & 1) == 0) && (*(long *)(lVar11 + 0x28) != 0)) &&
         (puVar14 = *(undefined8 **)(*(long *)(lVar11 + 0x28) + 8), puVar14 != (undefined8 *)0x0)) {
        (**(code **)*puVar14)();
      }
      bVar16 = *param_2;
      if (7 < bVar16) {
        bVar16 = 0xff;
      }
      local_200 = (undefined *)CONCAT71(local_200._1_7_,bVar16);
      lVar11 = FUN_025830c0(*(undefined8 *)puVar1,&local_200,1);
      if (lVar11 == 0) {
        iVar18 = -1;
      }
      else {
        if ((*(long **)(lVar11 + 0x28) == (long *)0x0) ||
           (puVar14 = (undefined8 *)**(long **)(lVar11 + 0x28), puVar14 == (undefined8 *)0x0)) {
          uVar10 = 1;
        }
        else {
          uVar10 = (**(code **)*puVar14)();
          uVar10 = uVar10 ^ 1;
        }
        bVar16 = *(byte *)(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8) + 0x10);
        if (7 < bVar16) {
          bVar16 = 0xff;
        }
        iVar18 = (int)(char)bVar16;
        if ((((uVar10 & 1) == 0) && (*(long *)(lVar11 + 0x28) != 0)) &&
           (puVar14 = *(undefined8 **)(*(long *)(lVar11 + 0x28) + 8), puVar14 != (undefined8 *)0x0))
        {
          (**(code **)*puVar14)();
        }
      }
      uVar9 = *(ushort *)(puVar12 + 0x100);
      *(int *)(puVar12 + 0xfc) = iVar18;
      *(ushort *)(puVar12 + 0x100) = uVar9 | 1;
      if (*(long *)pbVar17 != 0) {
        *(ushort *)(puVar12 + 0x100) = uVar9 | 3;
        local_1f0 = 0xb;
        local_1ec = 0;
        local_1d8 = 0xffffffff;
        local_200 = PTR_DAT_04bb2df8 + 0x10;
        local_1c0 = 0x40;
        local_17d = 0;
        local_1bc[0] = 0;
        local_1e8 = 0xffffffff;
        uStack_1e0 = 0xffffffff00000000;
        puStack_1c8 = local_1bc;
        puStack_170 = local_164;
        local_168 = 0x40;
        local_125 = 0;
        local_1d0 = PTR_DAT_04bb2bc0 + 0x10;
        local_164[0] = 0;
        local_a8[0] = 10;
        local_a0 = (long)&local_f4 + 4;
        puStack_1f8 = (undefined2 *)(puVar12 + 0x38);
        local_178 = local_1d0;
        FUN_006f5e38(&local_200);
        local_80 = 0;
        uStack_78 = 0;
        local_88 = 0;
        local_70 = 1;
        local_6c = 0;
        local_98 = PTR_DAT_04bc0cd8 + 0x10;
        local_90 = 0;
        FUN_02906b00(&local_98,&local_200,local_a8);
      }
    }
  }
  return puVar12;
}

