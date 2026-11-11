
bool FUN_003ac700(long *param_1,long *param_2,long param_3,ulong param_4)

{
  bool bVar1;
  ushort *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  bool bVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 uVar14;
  long lVar15;
  ushort *puVar16;
  ulong uVar17;
  ushort *local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  long local_180;
  long local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  bVar1 = param_2[8] != 0 && (ulong)param_2[7] <= param_4;
  if (!(param_2[8] != 0 && (ulong)param_2[7] <= param_4)) {
    return bVar1;
  }
  lVar13 = *param_2;
  bVar9 = param_3 != 0;
  uVar3 = *(undefined4 *)((long)param_2 + 0x1c);
  puVar16 = *(ushort **)(lVar13 + 0x18);
  uVar6 = *(ushort *)(lVar13 + 0x6a);
  uVar7 = *(ushort *)(lVar13 + 0x6c);
  *param_1 = lVar13;
  lVar15 = 0;
  if (param_2[0x21] != 0 && bVar9) {
    lVar15 = param_3 + param_2[0x24];
  }
  param_1[1] = lVar15;
  lVar11 = param_2[0x25];
  lVar12 = param_2[0x28];
  *(char *)(param_1 + 3) = (char)uVar3;
  *(undefined2 *)((long)param_1 + 0x1a) = 0;
  *(ushort *)(param_1 + 6) = uVar6;
  *(ushort *)((long)param_1 + 0x32) = uVar7;
  param_1[7] = 0;
  lVar15 = 0;
  if (lVar11 != 0 && bVar9) {
    lVar15 = param_3 + lVar12;
  }
  param_1[2] = lVar15;
  lVar15 = 0;
  if (param_2[0x19] != 0 && bVar9) {
    lVar15 = param_3 + param_2[0x1c];
  }
  param_1[8] = lVar15;
  lVar15 = 0;
  if (param_2[0x1d] != 0 && bVar9) {
    lVar15 = param_3 + param_2[0x20];
  }
  param_1[9] = lVar15;
  lVar11 = param_2[0x29];
  lVar12 = param_2[0x2c];
  param_1[0xe] = 0;
  param_1[0xc] = param_3;
  param_1[0xd] = 0;
  lVar15 = 0;
  if (lVar11 != 0 && bVar9) {
    lVar15 = param_3 + lVar12;
  }
  param_1[10] = lVar15;
  param_1[0xb] = 0;
  *(int *)((long)param_1 + 0x8c) = (int)param_2[4];
  if (param_2[1] == 0) {
    local_178 = 0;
    uStack_170 = 8;
    local_158 = 0;
    uStack_150 = 8;
    local_138 = 0;
    uStack_130 = 8;
    local_118 = 0;
    uStack_110 = 8;
    local_190 = (undefined4)param_2[2];
    local_168 = 0;
    uStack_160 = 0xffffffffffffffff;
    local_148 = 0;
    uStack_140 = 0xffffffffffffffff;
    local_128 = 0;
    uStack_120 = 0xffffffffffffffff;
    local_108 = 0;
    uStack_100 = 0xffffffffffffffff;
    local_188 = 0;
    local_180 = 0;
    local_198 = puVar16;
    FUN_003b2f88(&local_198);
    lVar11 = param_2[9];
    lVar15 = param_2[0xc];
    puVar10 = (undefined8 *)0x0;
    if (param_2[0x15] != 0 && param_3 != 0) {
      puVar10 = (undefined8 *)(param_3 + param_2[0x18]);
    }
    *puVar10 = 0;
    *(undefined2 *)(puVar10 + 1) = 0;
    *(undefined1 *)((long)puVar10 + 10) = 0;
    puVar10[2] = 0;
    puVar10[3] = 0;
    puVar10[4] = 0;
    puVar10[5] = 0;
    *(undefined4 *)(puVar10 + 10) = 0;
    puVar10[6] = 0;
    puVar10[7] = 0;
    puVar10[8] = 0;
    puVar10[9] = 0;
    lVar12 = 0;
    if (lVar11 != 0 && param_3 != 0) {
      lVar12 = param_3 + lVar15;
    }
    puVar10[0xf] = 0;
    puVar10[0xb] = 0;
    puVar10[0xc] = 0;
    puVar10[0xd] = 0;
    puVar10[0xe] = 0;
    param_1[7] = (long)puVar10;
    FUN_003b3070(puVar10,&local_198,lVar12,local_188);
  }
  else {
    param_1[7] = param_2[1];
  }
  if (uVar6 == 0) {
    *(undefined1 *)((long)param_1 + 0x19) = 0;
  }
  else {
    lVar15 = 0;
    uVar14 = 0;
    lVar11 = 0x54;
    lVar12 = 0;
    if (param_2[0xd] != 0 && param_3 != 0) {
      lVar12 = param_3 + param_2[0x10];
    }
    do {
      puVar2 = (ushort *)(*(long *)(lVar13 + 0x28) + lVar11);
      local_168 = 0;
      uStack_160 = 8;
      local_198 = puVar2 + -0x2a;
      local_158 = 0;
      uStack_150 = 0xffffffffffffffff;
      local_148 = 0;
      uStack_140 = 8;
      local_138 = 0;
      uStack_130 = 0xffffffffffffffff;
      local_128 = 0;
      uStack_120 = 8;
      local_118 = 0;
      uStack_110 = 0xffffffffffffffff;
      local_108 = 0;
      uStack_100 = 8;
      local_f8 = 0;
      uStack_f0 = 0xffffffffffffffff;
      local_178 = 0;
      uStack_170 = 0;
      local_190 = *(undefined4 *)((long)param_2 + 0x14);
      local_e8 = 0;
      uStack_e0 = 8;
      local_d8 = 0;
      uStack_d0 = 0xffffffffffffffff;
      local_c8 = 0;
      uStack_c0 = 8;
      local_b8 = 0;
      uStack_b0 = 0xffffffffffffffff;
      local_a8 = 0;
      uStack_a0 = 8;
      local_98 = 0;
      uStack_90 = 0xffffffffffffffff;
      local_88 = 0;
      uStack_80 = 8;
      local_78 = 0;
      uStack_70 = 0xffffffffffffffff;
      bVar9 = (*(uint *)(*(long *)(puVar16 + 8) + (ulong)*puVar2 * 0x60 + 0x34) & 0x70000) != 0;
      if (bVar9) {
        uVar14 = 1;
      }
      local_188._0_2_ = CONCAT11((char)param_2[6],bVar9);
      local_180 = param_2[5];
      local_18c = uVar3;
      FUN_003adae0(&local_198);
      puVar10 = (undefined8 *)(param_1[8] + lVar15);
      uVar17 = local_178 + 0xfU & 0xfffffffffffffff0;
      puVar10[0xc] = 0;
      puVar10[0xd] = 0;
      puVar10[10] = 0;
      puVar10[0xb] = 0;
      puVar10[8] = 0;
      puVar10[9] = 0;
      puVar10[6] = 0;
      puVar10[7] = 0;
      puVar10[4] = 0;
      puVar10[5] = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      *puVar10 = 0;
      puVar10[1] = 0;
      FUN_003adf20(puVar10,&local_198,lVar12,uVar17);
      lVar15 = lVar15 + 0x70;
      lVar12 = lVar12 + uVar17;
      lVar11 = lVar11 + 0x60;
    } while ((ulong)uVar6 * 0x70 != lVar15);
    *(undefined1 *)((long)param_1 + 0x19) = uVar14;
  }
  if (uVar7 != 0) {
    lVar15 = 0;
    lVar11 = 0x30;
    lVar12 = 0;
    if (param_2[0x11] != 0 && param_3 != 0) {
      lVar12 = param_3 + param_2[0x14];
    }
    do {
      local_198 = (ushort *)(*(long *)(lVar13 + 0x38) + lVar15);
      local_178 = 0;
      uStack_170 = 8;
      local_190 = (undefined4)param_2[3];
      local_168 = 0;
      uStack_160 = 0xffffffffffffffff;
      local_158 = 0;
      uStack_150 = 8;
      local_148 = 0;
      uStack_140 = 0xffffffffffffffff;
      local_138 = 0;
      uStack_130 = 8;
      local_128 = 0;
      uStack_120 = 0xffffffffffffffff;
      local_118 = 0;
      uStack_110 = 8;
      local_108 = 0;
      uStack_100 = 0xffffffffffffffff;
      local_f8 = 0;
      uStack_f0 = 8;
      local_e8 = 0;
      uStack_e0 = 0xffffffffffffffff;
      local_188 = 0;
      local_180 = 0;
      FUN_003b0a38(&local_198);
      puVar10 = (undefined8 *)(param_1[9] + lVar11);
      uVar17 = local_188 + 7U & 0xfffffffffffffff8;
      *(undefined2 *)(puVar10 + -5) = 0;
      *(undefined1 *)((long)puVar10 + -0x26) = 0;
      puVar10[-4] = 0;
      puVar10[-3] = 0;
      puVar10[-2] = 0;
      *(undefined8 *)((long)puVar10 + -10) = 0;
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      puVar10[4] = 0;
      puVar10[5] = 0;
      puVar10[6] = 0;
      puVar10[7] = 0;
      puVar10[8] = 0;
      puVar10[9] = 0;
      puVar10[-6] = 0;
      FUN_003b0b60(puVar10 + -6,&local_198,lVar12,uVar17);
      lVar15 = lVar15 + 0xa8;
      lVar12 = lVar12 + uVar17;
      lVar11 = lVar11 + 0x80;
    } while ((ulong)uVar7 * 0xa8 != lVar15);
  }
  uVar6 = *(ushort *)(param_1[7] + 0x50);
  if ((ulong)uVar6 != 0) {
    uVar17 = 0;
    lVar15 = 0x34;
    do {
      uVar8 = 1 << (ulong)((uint)uVar17 & 0x1f);
      lVar13 = (uVar17 >> 5 & 0x7ffffff) * 4;
      uVar4 = *(uint *)(param_1[1] + lVar13);
      uVar5 = *(uint *)(*(long *)(param_1[7] + 0x10) + lVar15);
      *(uint *)(param_1[1] + lVar13) =
           uVar4 & (uVar8 ^ 0xffffffff) | (uVar5 & 1) << (ulong)((uint)uVar17 & 0x1f);
      if (((code *)param_1[0xf] != (code *)0x0) && (((uVar5 ^ (uVar4 & uVar8) != 0) & 1) != 0)) {
        (*(code *)param_1[0xf])(param_1,uVar17 & 0xffffffff);
      }
      uVar17 = uVar17 + 1;
      lVar15 = lVar15 + 0x60;
    } while (uVar6 != uVar17);
  }
  uVar6 = *(ushort *)((long)param_1 + 0x32);
  if ((ulong)uVar6 != 0) {
    lVar15 = 0;
    uVar17 = 0;
    do {
      uVar8 = 1 << (ulong)((uint)uVar17 & 0x1f);
      lVar13 = (uVar17 >> 5 & 0x7ffffff) * 4;
      uVar4 = *(uint *)(*(long *)(param_1[9] + lVar15) + 4);
      uVar5 = *(uint *)(param_1[2] + lVar13);
      *(uint *)(param_1[2] + lVar13) =
           uVar5 & (uVar8 ^ 0xffffffff) | (uVar4 & 1) << (ulong)((uint)uVar17 & 0x1f);
      if (((code *)param_1[0x10] != (code *)0x0) && (((uVar4 ^ (uVar5 & uVar8) != 0) & 1) != 0)) {
        (*(code *)param_1[0x10])(param_1,uVar17 & 0xffffffff);
      }
      uVar17 = uVar17 + 1;
      lVar15 = lVar15 + 0x80;
    } while (uVar6 != uVar17);
  }
  puVar10 = (undefined8 *)param_1[10];
  if (puVar10 != (undefined8 *)0x0) {
    puVar10[2] = 0;
    puVar10[3] = 0;
    *puVar10 = 0;
    puVar10[1] = 0;
  }
  return bVar1;
}

