
void FUN_003ac360(long *param_1)

{
  long lVar1;
  undefined4 uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  ulong local_1b0;
  long local_198;
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
  
  lVar1 = *param_1;
  lVar14 = *(long *)(lVar1 + 0x18);
  if (param_1[1] == 0) {
    local_178 = 0;
    uStack_170 = 8;
    local_158 = 0;
    uStack_150 = 8;
    local_138 = 0;
    uStack_130 = 8;
    local_118 = 0;
    uStack_110 = 8;
    local_190 = (undefined4)param_1[2];
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
    local_198 = lVar14;
    FUN_003b2f88(&local_198);
    local_1b0 = local_188 + 0xfU & 0xfffffffffffffff0;
    uVar3 = *(ushort *)(lVar1 + 0x6a);
    uVar4 = *(ushort *)(lVar1 + 0x6c);
    uVar5 = *(ushort *)(lVar14 + 0x38);
  }
  else {
    uVar3 = *(ushort *)(lVar1 + 0x6a);
    uVar4 = *(ushort *)(lVar1 + 0x6c);
    uVar5 = *(ushort *)(lVar14 + 0x38);
    local_1b0 = 0;
  }
  uVar15 = (uint)uVar4;
  if (uVar3 == 0) {
    lVar13 = 0;
  }
  else {
    uVar2 = *(undefined4 *)((long)param_1 + 0x1c);
    lVar16 = 0;
    lVar13 = 0;
    do {
      local_190 = *(undefined4 *)((long)param_1 + 0x14);
      local_168 = 0;
      uStack_160 = 8;
      local_198 = *(long *)(lVar1 + 0x28) + lVar16;
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
      local_178 = 0;
      uStack_170 = 0;
      local_188._0_2_ =
           CONCAT11((char)param_1[6],
                    (*(uint *)(*(long *)(lVar14 + 0x10) +
                               (ulong)*(ushort *)(local_198 + 0x54) * 0x60 + 0x34) & 0x70000) != 0);
      local_180 = param_1[5];
      local_18c = uVar2;
      FUN_003adae0(&local_198);
      lVar16 = lVar16 + 0x60;
      lVar13 = (local_178 + 0xfU & 0xfffffffffffffff0) + lVar13;
    } while ((ulong)uVar3 * 0x60 != lVar16);
  }
  if (uVar15 == 0) {
    lVar14 = 0;
  }
  else {
    lVar16 = 0;
    lVar14 = 0;
    do {
      local_198 = *(long *)(lVar1 + 0x38) + lVar16;
      local_178 = 0;
      uStack_170 = 8;
      local_190 = (undefined4)param_1[3];
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
      lVar16 = lVar16 + 0xa8;
      lVar14 = (local_188 + 7U & 0xfffffffffffffff8) + lVar14;
    } while ((ulong)uVar4 * 0xa8 != lVar16);
  }
  lVar8 = 8;
  param_1[0x15] = 0x80;
  param_1[0x16] = 8;
  lVar11 = (ulong)uVar4 * 0x80;
  param_1[0x17] = 0;
  param_1[0x18] = -1;
  lVar16 = (ulong)uVar3 * 0x70;
  param_1[0x1b] = 0;
  param_1[0x1c] = -1;
  param_1[0x1f] = 0;
  param_1[0x20] = -1;
  param_1[0x23] = 0;
  param_1[0x24] = -1;
  uVar6 = uVar5 + 0x1f >> 3;
  param_1[0x27] = 0;
  param_1[0x28] = -1;
  uVar10 = (ulong)uVar6 & 0x3ffc;
  uVar7 = uVar15 + 0x1f >> 3;
  uVar9 = (ulong)uVar7 & 0x3ffc;
  param_1[0xb] = 0;
  param_1[0xc] = -1;
  param_1[9] = local_1b0;
  param_1[10] = 0x10;
  lVar1 = 0;
  if ((char)param_1[6] != '\0') {
    lVar1 = (long)(int)param_1[4] << 5;
  }
  param_1[0xf] = 0;
  param_1[0x10] = -1;
  param_1[0xd] = lVar13;
  param_1[0xe] = 0x10;
  param_1[0x13] = 0;
  param_1[0x14] = -1;
  param_1[0x11] = lVar14;
  param_1[0x12] = 8;
  param_1[0x19] = lVar16;
  param_1[0x1a] = 8;
  param_1[0x1d] = lVar11;
  param_1[0x1e] = 8;
  param_1[0x21] = uVar10;
  param_1[0x22] = 8;
  param_1[0x25] = uVar9;
  param_1[0x26] = 8;
  param_1[0x2b] = 0;
  param_1[0x2c] = -1;
  param_1[0x29] = lVar1;
  param_1[0x2a] = 0x10;
  if (local_1b0 != 0) {
    lVar8 = 0x10;
    param_1[7] = 0;
    param_1[0xc] = 0;
  }
  if (lVar13 != 0) {
    param_1[0x10] = local_1b0;
    local_1b0 = local_1b0 + lVar13;
    lVar8 = 0x10;
  }
  uVar12 = local_1b0;
  if (lVar14 != 0) {
    uVar12 = local_1b0 + lVar14;
    param_1[0x14] = local_1b0;
  }
  lVar14 = uVar12 + 0x80;
  param_1[0x18] = uVar12;
  param_1[7] = lVar14;
  param_1[8] = lVar8;
  if (uVar3 != 0) {
    param_1[0x1c] = uVar12 + 0x80;
    lVar14 = uVar12 + 0x80 + lVar16;
    param_1[7] = lVar14;
  }
  lVar16 = lVar14;
  if (uVar15 != 0) {
    lVar16 = lVar14 + lVar11;
    param_1[0x20] = lVar14;
    param_1[7] = lVar16;
    param_1[8] = lVar8;
  }
  lVar14 = lVar16;
  if ((uVar6 & 0x3ffc) != 0) {
    lVar14 = lVar16 + uVar10;
    param_1[0x24] = lVar16;
    param_1[7] = lVar14;
    param_1[8] = lVar8;
  }
  if ((uVar7 & 0x3ffc) != 0) {
    uVar10 = lVar14 + 7U & 0xfffffffffffffff8;
    lVar14 = uVar10 + uVar9;
    param_1[0x28] = uVar10;
    param_1[7] = lVar14;
    param_1[8] = lVar8;
  }
  if (lVar1 != 0) {
    uVar9 = lVar14 + 0xfU & 0xfffffffffffffff0;
    param_1[0x2c] = uVar9;
    param_1[7] = uVar9 + lVar1;
    param_1[8] = 0x10;
  }
  return;
}

