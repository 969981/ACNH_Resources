
void FUN_03a65000(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  long *plVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  undefined4 *puVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 uVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined4 local_170 [4];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar10 = *(long *)(param_1 + 0x2c0);
  if (lVar10 == 0) {
    return;
  }
  if (*(char *)(*(long *)(param_1 + 8) + 0x790) == '\0') {
    return;
  }
  if (*(char *)(lVar10 + 0x4d0) == '\0') {
    return;
  }
  bVar3 = *(byte *)(param_3 + 8);
  lVar19 = *(long *)(param_5 + 0x480);
  uVar11 = (uint)bVar3;
  uVar7 = uVar11;
  if (*(uint *)(param_4 + 8) <= (uint)bVar3) {
    uVar7 = 0;
  }
  lVar9 = *(long *)(param_3 + 0x18);
  if (*(uint *)(param_5 + 0x478) <= uVar11) {
    uVar11 = 0;
  }
  lVar14 = lVar19 + (ulong)uVar11 * 0xfc8;
  iVar13 = *(int *)(lVar14 + 0x238);
  if (iVar13 != 0) {
    uVar5 = iVar13 - 1;
    lVar15 = lVar19 + (ulong)uVar11 * 0xfc8;
    lVar17 = *(long *)(lVar15 + 0x378);
    puVar16 = *(undefined4 **)(lVar15 + 0x318);
    uStack_178 = *(undefined8 *)(lVar17 + 0x308);
    local_180 = *(undefined8 *)(lVar17 + 0x300);
    uStack_128 = *(undefined8 *)(lVar17 + 0x318);
    local_130 = *(undefined8 *)(lVar17 + 0x310);
    uStack_198 = *(undefined8 *)(lVar17 + 0x2e8);
    local_1a0 = *(undefined8 *)(lVar17 + 0x2e0);
    uStack_188 = *(undefined8 *)(lVar17 + 0x2f8);
    local_190 = *(undefined8 *)(lVar17 + 0x2f0);
    local_170[0] = *puVar16;
    local_160 = local_1a0;
    uStack_158 = uStack_198;
    uStack_150 = local_190;
    uStack_148 = uStack_188;
    local_140 = local_180;
    uStack_138 = uStack_178;
    if (uVar5 != 0) {
      uVar12 = *(uint *)(lVar19 + (ulong)uVar11 * 0xfc8 + 0x370);
      lVar15 = lVar17 + (ulong)(1 < uVar12) * 0x5d0;
      uStack_118 = *(undefined8 *)(lVar15 + 0x2e8);
      local_120 = *(undefined8 *)(lVar15 + 0x2e0);
      uStack_108 = *(undefined8 *)(lVar15 + 0x2f8);
      uStack_110 = *(undefined8 *)(lVar15 + 0x2f0);
      uStack_f8 = *(undefined8 *)(lVar15 + 0x308);
      local_100 = *(undefined8 *)(lVar15 + 0x300);
      uStack_e8 = *(undefined8 *)(lVar15 + 0x318);
      uStack_f0 = *(undefined8 *)(lVar15 + 0x310);
      local_170[1] = puVar16[1];
      if (iVar13 != 2) {
        lVar15 = 0xba0;
        if (uVar12 < 3) {
          lVar15 = 0;
        }
        lVar15 = lVar17 + lVar15;
        uStack_d8 = *(undefined8 *)(lVar15 + 0x2e8);
        local_e0 = *(undefined8 *)(lVar15 + 0x2e0);
        uStack_c8 = *(undefined8 *)(lVar15 + 0x2f8);
        uStack_d0 = *(undefined8 *)(lVar15 + 0x2f0);
        uStack_b8 = *(undefined8 *)(lVar15 + 0x308);
        local_c0 = *(undefined8 *)(lVar15 + 0x300);
        uStack_a8 = *(undefined8 *)(lVar15 + 0x318);
        uStack_b0 = *(undefined8 *)(lVar15 + 0x310);
        local_170[2] = puVar16[2];
        if (iVar13 != 3) {
          lVar15 = 0x1170;
          if (uVar12 < 4) {
            lVar15 = 0;
          }
          lVar15 = lVar17 + lVar15;
          uStack_98 = *(undefined8 *)(lVar15 + 0x2e8);
          local_a0 = *(undefined8 *)(lVar15 + 0x2e0);
          uStack_88 = *(undefined8 *)(lVar15 + 0x2f8);
          uStack_90 = *(undefined8 *)(lVar15 + 0x2f0);
          uStack_78 = *(undefined8 *)(lVar15 + 0x308);
          local_80 = *(undefined8 *)(lVar15 + 0x300);
          uStack_68 = *(undefined8 *)(lVar15 + 0x318);
          uStack_70 = *(undefined8 *)(lVar15 + 0x310);
          local_170[3] = puVar16[3];
          if (iVar13 != 4) {
            uVar2 = uVar5;
            if (uVar12 <= uVar5) {
              uVar2 = 0;
            }
            lVar17 = lVar17 + (long)(int)uVar2 * 0x5d0;
            uStack_178 = *(undefined8 *)(lVar17 + 0x308);
            local_180 = *(undefined8 *)(lVar17 + 0x300);
            uStack_128 = *(undefined8 *)(lVar17 + 0x318);
            local_130 = *(undefined8 *)(lVar17 + 0x310);
            uStack_198 = *(undefined8 *)(lVar17 + 0x2e8);
            local_1a0 = *(undefined8 *)(lVar17 + 0x2e0);
            uStack_188 = *(undefined8 *)(lVar17 + 0x2f8);
            local_190 = *(undefined8 *)(lVar17 + 0x2f0);
            local_170[0] = puVar16[(int)uVar5];
            local_160 = local_1a0;
            uStack_158 = uStack_198;
            uStack_150 = local_190;
            uStack_148 = uStack_188;
            local_140 = local_180;
            uStack_138 = uStack_178;
          }
        }
      }
    }
  }
  lVar15 = *(long *)(*(long *)(param_4 + 0x10) + (ulong)uVar7 * 0x23c0 + 0x328);
  uVar4 = *(ushort *)(lVar15 + 0x3a);
  uVar7 = (uint)*(ushort *)(lVar15 + 0x38);
  if (*(ushort *)(lVar15 + 0x38) < 2) {
    uVar7 = 1;
  }
  uVar5 = (uint)uVar4;
  if (*(short *)(lVar15 + 0x42) != 3) {
    uVar5 = 1;
  }
  if (uVar5 == uVar4 || uVar5 < uVar4) {
    uVar5 = (uint)uVar4;
  }
  uVar12 = (uint)bVar3;
  if (*(uint *)(lVar10 + 0x230) <= uVar12) {
    uVar12 = 0;
  }
  lVar10 = *(long *)(lVar10 + 0x238) + (ulong)uVar12 * 0x6d0;
  *(uint *)(lVar10 + 0x28) = uVar7;
  *(uint *)(lVar10 + 0x2c) = uVar5;
  uVar20 = *(undefined8 *)(lVar9 + 0xc0);
  fVar21 = *(float *)(lVar9 + 0x140);
  uVar24 = *(undefined4 *)(lVar9 + 0x144);
  uVar7 = (uint)*(byte *)(param_3 + 8);
  if (*(uint *)(*(long *)(param_1 + 0x2c0) + 0x230) <= (uint)*(byte *)(param_3 + 8)) {
    uVar7 = 0;
  }
  lVar10 = *(long *)(*(long *)(param_1 + 0x2c0) + 0x238) + (ulong)uVar7 * 0x6d0;
  *(undefined8 *)(lVar10 + 0x38) = *(undefined8 *)(lVar9 + 200);
  *(undefined8 *)(lVar10 + 0x30) = uVar20;
  uVar22 = *(undefined8 *)(lVar9 + 0xd0);
  *(undefined8 *)(lVar10 + 0x48) = *(undefined8 *)(lVar9 + 0xd8);
  *(undefined8 *)(lVar10 + 0x40) = uVar22;
  uVar23 = *(undefined8 *)(lVar9 + 0xe0);
  *(undefined8 *)(lVar10 + 0x58) = *(undefined8 *)(lVar9 + 0xe8);
  *(undefined8 *)(lVar10 + 0x50) = uVar23;
  uVar23 = *(undefined8 *)(lVar9 + 0xf0);
  fVar26 = (float)*(undefined8 *)(lVar9 + 0xf8);
  *(undefined8 *)(lVar10 + 0x68) = *(undefined8 *)(lVar9 + 0xf8);
  *(undefined8 *)(lVar10 + 0x60) = uVar23;
  uVar23 = *(undefined8 *)(lVar9 + 0x60);
  *(undefined8 *)(lVar10 + 0x78) = *(undefined8 *)(lVar9 + 0x68);
  *(undefined8 *)(lVar10 + 0x70) = uVar23;
  fVar25 = -fVar26;
  if (0.0 <= fVar26) {
    fVar25 = fVar26;
  }
  uVar23 = *(undefined8 *)(lVar9 + 0x70);
  *(undefined8 *)(lVar10 + 0x88) = *(undefined8 *)(lVar9 + 0x78);
  *(undefined8 *)(lVar10 + 0x80) = uVar23;
  uVar27 = *(undefined8 *)(lVar9 + 0x88);
  uVar23 = *(undefined8 *)(lVar9 + 0x80);
  *(float *)(lVar10 + 0xa0) = fVar21;
  *(undefined4 *)(lVar10 + 0xa4) = uVar24;
  *(float *)(lVar10 + 0x1c4) = 1.0 / (fVar21 * (((1.0 / fVar25) * (float)uVar20) / fVar21));
  *(float *)(lVar10 + 0x1c8) =
       1.0 / (fVar21 * (((1.0 / fVar25) * (float)((ulong)uVar22 >> 0x20)) / fVar21));
  *(undefined8 *)(lVar10 + 0x98) = uVar27;
  *(undefined8 *)(lVar10 + 0x90) = uVar23;
  FUN_007535b4(lVar10 + 0x1cc);
  iVar13 = *(int *)(lVar14 + 0x238);
  if (*(char *)(lVar19 + (ulong)uVar11 * 0xfc8 + 0x508) == '\0') {
    if (*(char *)(lVar19 + (ulong)uVar11 * 0xfc8 + 0x4c8) == '\0') {
      lVar10 = *(long *)(lVar19 + (ulong)uVar11 * 0xfc8 + 0x550);
      goto LAB_03a652d0;
    }
    lVar19 = lVar19 + (ulong)uVar11 * 0xfc8;
    lVar10 = lVar19 + 0x730;
    iVar8 = *(int *)(lVar19 + 0x4e8);
  }
  else {
    lVar19 = lVar19 + (ulong)uVar11 * 0xfc8;
    lVar10 = lVar19 + 0x818;
    iVar8 = *(int *)(lVar19 + 0x528);
  }
  if (iVar8 <= iVar13) {
    iVar8 = iVar13;
  }
  iVar13 = iVar8;
LAB_03a652d0:
  lVar19 = *(long *)(*(long *)(param_1 + 0x2c0) + 0x238);
  uVar7 = (uint)*(byte *)(param_3 + 8);
  if (*(uint *)(*(long *)(param_1 + 0x2c0) + 0x230) <= (uint)*(byte *)(param_3 + 8)) {
    uVar7 = 0;
  }
  lVar9 = lVar19 + (ulong)uVar7 * 0x6d0;
  *(long *)(lVar9 + 0xa8) = lVar10;
  *(int *)(lVar9 + 0x1c0) = iVar13;
  if (iVar13 == 0) {
    *(undefined4 *)(lVar19 + (ulong)uVar7 * 0x6d0 + 0x1b0) = 0;
    *(undefined8 *)(lVar9 + 0xb8) = uStack_198;
    *(undefined8 *)(lVar9 + 0xb0) = local_1a0;
    *(undefined8 *)(lVar9 + 200) = uStack_188;
    *(undefined8 *)(lVar9 + 0xc0) = local_190;
    *(undefined8 *)(lVar9 + 0xd8) = uStack_178;
    *(undefined8 *)(lVar9 + 0xd0) = local_180;
    *(undefined8 *)(lVar9 + 0xe8) = uStack_128;
    *(undefined8 *)(lVar9 + 0xe0) = local_130;
  }
  else {
    lVar10 = 0;
    puVar18 = &local_140;
    do {
      uVar20 = puVar18[-4];
      uVar23 = puVar18[-1];
      uVar22 = puVar18[-2];
      puVar1 = (undefined8 *)(lVar9 + 0xb0) + (long)(int)lVar10 * 8;
      puVar1[1] = puVar18[-3];
      *puVar1 = uVar20;
      puVar1[3] = uVar23;
      puVar1[2] = uVar22;
      uVar20 = *puVar18;
      uVar23 = puVar18[3];
      uVar22 = puVar18[2];
      puVar1[5] = puVar18[1];
      puVar1[4] = uVar20;
      puVar1[7] = uVar23;
      puVar1[6] = uVar22;
      *(undefined4 *)(lVar19 + (ulong)uVar7 * 0x6d0 + 0x1b0 + (long)(int)lVar10 * 4) =
           local_170[lVar10];
      lVar10 = lVar10 + 1;
      uVar11 = *(uint *)(lVar9 + 0x1c0);
      puVar18 = puVar18 + 8;
    } while ((uint)lVar10 < uVar11);
    if (uVar11 < 4) {
      memset((void *)((ulong)uVar11 * 4 + (ulong)uVar7 * 0x6d0 + lVar19 + 0x1b0),0,
             (ulong)(3 - uVar11) * 4 + 4);
    }
  }
  lVar10 = *(long *)(param_4 + 0x10);
  uVar7 = (uint)*(byte *)(param_3 + 8);
  if (*(uint *)(param_4 + 8) <= (uint)*(byte *)(param_3 + 8)) {
    uVar7 = 0;
  }
  uVar11 = *(uint *)(lVar10 + (ulong)uVar7 * 0x23c0 + 8);
  if ((uVar11 >> 0x10 & 1) == 0) {
    lVar19 = lVar10 + (ulong)uVar7 * 0x23c0 + 0x7e8;
    if ((uVar11 & 0x1000) != 0) {
      lVar19 = lVar10 + (ulong)uVar7 * 0x23c0 + 0xfa8;
    }
  }
  else {
    lVar19 = lVar10 + (ulong)uVar7 * 0x23c0 + 0x1768;
  }
  FUN_03a74e50(*(undefined8 *)(param_1 + 0x2c0),param_2);
  FUN_03a79fe0(*(undefined8 *)(param_1 + 0x2c0),param_2,*(undefined1 *)(param_3 + 8),lVar19);
  plVar6 = *(long **)(param_3 + 0x318);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x38))(plVar6,param_2);
    FUN_038e77e4(*(undefined8 *)(param_3 + 800),param_2,*(undefined8 *)(param_3 + 0x318));
  }
  return;
}

