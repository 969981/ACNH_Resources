
void FUN_03ace650(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_168;
  float local_15c [2];
  undefined8 local_154;
  float local_14c;
  float fStack_148;
  float local_144;
  float fStack_140;
  float local_13c;
  float fStack_138;
  float local_134;
  float fStack_130;
  float local_12c;
  float fStack_128;
  float local_124;
  float fStack_120;
  float local_11c;
  float fStack_118;
  float local_114;
  float fStack_110;
  float local_10c;
  float fStack_108;
  float local_104;
  float fStack_100;
  undefined2 local_fc;
  undefined1 local_fa;
  uint local_f8;
  undefined1 local_97;
  
  if (*(char *)(param_1 + 0x70) != '\0') {
    FUN_038e4cec(&local_fc);
    local_fa = 0;
    local_97 = 2;
    local_f8 = local_f8 & 0xfffffffe;
    local_fc = 0x100;
    FUN_038e4d90(&local_fc,param_2);
    if (*(char *)(param_1 + 0x5bc) == '\0') {
      local_15c[0] = 1.0;
      local_15c[1] = 0.0;
      local_154 = (undefined1 *)0x3f80000000000000;
      FUN_03abc6b0(param_2,param_1 + 0x150,param_1 + 0x180,param_4,param_5,local_15c);
    }
    local_15c[0] = 0.0;
    local_15c[1] = 0.0;
    local_154 = (undefined1 *)0x3f80000000000000;
    FUN_03abc6b0(param_2,param_1 + 0x270,param_1 + 0x2a0,param_4,param_5,local_15c);
    local_15c[0] = *(float *)(param_1 + 0x420);
    local_154._4_4_ = *(float *)(param_1 + 0x42c);
    if (local_15c[0] <= local_154._4_4_) {
      local_15c[1] = *(float *)(param_1 + 0x424);
      fVar4 = *(float *)(param_1 + 0x430);
      if (local_15c[1] <= fVar4) {
        local_154._0_4_ = *(float *)(param_1 + 0x428);
        fVar6 = *(float *)(param_1 + 0x434);
        if ((float)local_154 <= fVar6) {
          lVar1 = (long)&local_154 + 4;
          local_14c = local_15c[1];
          fStack_148 = (float)local_154;
          local_144 = local_154._4_4_;
          fStack_140 = local_15c[1];
          local_13c = fVar6;
          fStack_138 = local_15c[0];
          local_134 = local_15c[1];
          fStack_130 = fVar6;
          local_12c = local_15c[0];
          fStack_128 = fVar4;
          local_124 = (float)local_154;
          fStack_120 = local_154._4_4_;
          local_11c = fVar4;
          fStack_118 = (float)local_154;
          local_114 = local_154._4_4_;
          fStack_110 = fVar4;
          local_10c = fVar6;
          fStack_108 = local_15c[0];
          local_104 = fVar4;
          fStack_100 = fVar6;
          if (*(char *)(param_1 + 0x5bc) == '\0') {
            fVar4 = (float)*(undefined8 *)(param_1 + 400);
            fVar20 = (float)*(undefined8 *)(param_1 + 0x150);
            fVar21 = (float)((ulong)*(undefined8 *)(param_1 + 0x150) >> 0x20);
            fVar22 = (float)*(undefined8 *)(param_1 + 0x158);
            fVar23 = (float)((ulong)*(undefined8 *)(param_1 + 0x158) >> 0x20);
            fVar6 = (float)((ulong)*(undefined8 *)(param_1 + 400) >> 0x20);
            fVar24 = (float)*(undefined8 *)(param_1 + 0x160);
            fVar25 = (float)((ulong)*(undefined8 *)(param_1 + 0x160) >> 0x20);
            fVar7 = (float)*(undefined8 *)(param_1 + 0x168);
            fVar8 = (float)((ulong)*(undefined8 *)(param_1 + 0x168) >> 0x20);
            fVar9 = (float)*(undefined8 *)(param_1 + 0x180);
            fVar10 = (float)((ulong)*(undefined8 *)(param_1 + 0x180) >> 0x20);
            fVar27 = (float)*(undefined8 *)(param_1 + 0x1a0);
            fVar5 = (float)((ulong)*(undefined8 *)(param_1 + 0x1a0) >> 0x20);
            fVar16 = (float)*(undefined8 *)(param_1 + 0x1b0);
            fVar17 = (float)((ulong)*(undefined8 *)(param_1 + 0x1b0) >> 0x20);
            fVar11 = (float)*(undefined8 *)(param_1 + 0x188);
            fVar12 = (float)*(undefined8 *)(param_1 + 0x170);
            fVar13 = (float)((ulong)*(undefined8 *)(param_1 + 0x170) >> 0x20);
            fVar14 = (float)*(undefined8 *)(param_1 + 0x178);
            fVar15 = (float)((ulong)*(undefined8 *)(param_1 + 0x178) >> 0x20);
            fVar26 = (float)*(undefined8 *)(param_1 + 0x198);
            fVar19 = (float)*(undefined8 *)(param_1 + 0x1a8);
            fVar18 = (float)*(undefined8 *)(param_1 + 0x1b8);
            local_1a0._0_4_ = fVar20 * fVar9 + fVar24 * fVar10 + fVar12 * fVar11 + 0.0;
            local_1a0._4_4_ = fVar21 * fVar9 + fVar25 * fVar10 + fVar13 * fVar11 + 0.0;
            uStack_198._0_4_ = fVar22 * fVar9 + fVar7 * fVar10 + fVar14 * fVar11 + 0.0;
            uStack_198._4_4_ =
                 (float)((ulong)*(undefined8 *)(param_1 + 0x188) >> 0x20) +
                 fVar23 * fVar9 + fVar8 * fVar10 + fVar15 * fVar11;
            local_190 = CONCAT44(fVar21 * fVar4 + fVar25 * fVar6 + fVar13 * fVar26 + 0.0,
                                 fVar20 * fVar4 + fVar24 * fVar6 + fVar12 * fVar26 + 0.0);
            local_188 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x198) >> 0x20) +
                                 fVar23 * fVar4 + fVar8 * fVar6 + fVar15 * fVar26,
                                 fVar22 * fVar4 + fVar7 * fVar6 + fVar14 * fVar26 + 0.0);
            local_180 = CONCAT44(fVar21 * fVar27 + fVar25 * fVar5 + fVar13 * fVar19 + 0.0,
                                 fVar20 * fVar27 + fVar24 * fVar5 + fVar12 * fVar19 + 0.0);
            uStack_178 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x1a8) >> 0x20) +
                                  fVar23 * fVar27 + fVar8 * fVar5 + fVar15 * fVar19,
                                  fVar22 * fVar27 + fVar7 * fVar5 + fVar14 * fVar19 + 0.0);
            local_170 = CONCAT44(fVar21 * fVar16 + fVar25 * fVar17 + fVar13 * fVar18 + 0.0,
                                 fVar20 * fVar16 + fVar24 * fVar17 + fVar12 * fVar18 + 0.0);
            local_168 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x1b8) >> 0x20) +
                                 fVar23 * fVar16 + fVar8 * fVar17 + fVar15 * fVar18,
                                 fVar22 * fVar16 + fVar7 * fVar17 + fVar14 * fVar18 + 0.0);
            FUN_038e6ab4(&local_1a0,&local_1a0);
            lVar3 = 0;
            do {
              lVar2 = lVar3 + 0xc;
              fVar26 = *(float *)((long)local_15c + lVar3 + 8);
              fVar4 = *(float *)((long)local_15c + lVar3);
              fVar6 = *(float *)((long)local_15c + lVar3 + 4);
              fVar27 = local_168._4_4_ +
                       local_170._4_4_ * fVar6 + fVar4 * (float)local_170 +
                       fVar26 * (float)local_168;
              *(float *)((long)local_15c + lVar3) =
                   uStack_198._4_4_ / fVar27 +
                   fVar6 * (local_1a0._4_4_ / fVar27) + fVar4 * ((float)local_1a0 / fVar27) +
                   fVar26 * ((float)uStack_198 / fVar27);
              *(float *)((long)local_15c + lVar3 + 4) =
                   local_188._4_4_ / fVar27 +
                   fVar6 * (local_190._4_4_ / fVar27) + fVar4 * ((float)local_190 / fVar27) +
                   fVar26 * ((float)local_188 / fVar27);
              *(float *)((long)local_15c + lVar3 + 8) =
                   uStack_178._4_4_ / fVar27 +
                   fVar6 * (local_180._4_4_ / fVar27) + fVar4 * ((float)local_180 / fVar27) +
                   fVar26 * ((float)uStack_178 / fVar27);
              lVar3 = lVar2;
            } while (lVar2 != 0x60);
          }
          else {
            FUN_007535b4(&local_1a0,param_1 + 0x150);
            fVar21 = local_1a0._4_4_ * local_15c[1];
            fVar20 = local_180._4_4_ * local_15c[1];
            fVar4 = local_15c[0] * (float)local_180;
            fVar6 = local_154._4_4_ * (float)local_190;
            fVar19 = local_1a0._4_4_ * fStack_140;
            fVar22 = local_180._4_4_ * fStack_140;
            fVar26 = fStack_148 * (float)uStack_198;
            fVar27 = fStack_148 * (float)local_188;
            local_15c[1] = local_188._4_4_ +
                           local_190._4_4_ * local_15c[1] + local_15c[0] * (float)local_190 +
                           (float)local_154 * (float)local_188;
            fVar5 = local_13c * (float)uStack_198;
            local_15c[0] = uStack_198._4_4_ +
                           fVar21 + local_15c[0] * (float)local_1a0 +
                           (float)local_154 * (float)uStack_198;
            fStack_148 = uStack_178._4_4_ +
                         local_180._4_4_ * local_14c + local_154._4_4_ * (float)local_180 +
                         fStack_148 * (float)uStack_178;
            local_154._0_4_ =
                 uStack_178._4_4_ + fVar20 + fVar4 + (float)local_154 * (float)uStack_178;
            local_154._4_4_ =
                 uStack_198._4_4_ +
                 local_1a0._4_4_ * local_14c + local_154._4_4_ * (float)local_1a0 + fVar26;
            local_14c = local_188._4_4_ + local_190._4_4_ * local_14c + fVar6 + fVar27;
            fStack_140 = local_188._4_4_ +
                         local_190._4_4_ * fStack_140 + local_144 * (float)local_190 +
                         local_13c * (float)local_188;
            local_13c = uStack_178._4_4_ +
                        fVar22 + local_144 * (float)local_180 + local_13c * (float)uStack_178;
            local_144 = uStack_198._4_4_ + fVar19 + local_144 * (float)local_1a0 + fVar5;
            fVar23 = local_1a0._4_4_ * local_134;
            fVar4 = fStack_130 * (float)uStack_198;
            fVar6 = local_180._4_4_ * local_134;
            local_134 = local_188._4_4_ +
                        local_190._4_4_ * local_134 + fStack_138 * (float)local_190 +
                        fStack_130 * (float)local_188;
            fStack_130 = uStack_178._4_4_ +
                         fVar6 + fStack_138 * (float)local_180 + fStack_130 * (float)uStack_178;
            fVar6 = local_12c * (float)local_190;
            fVar26 = local_124 * (float)uStack_198;
            fVar27 = local_124 * (float)local_188;
            fVar24 = local_1a0._4_4_ * local_11c;
            fVar5 = fStack_118 * (float)uStack_198;
            local_124 = uStack_178._4_4_ +
                        local_180._4_4_ * fStack_128 + local_12c * (float)local_180 +
                        local_124 * (float)uStack_178;
            fVar19 = local_180._4_4_ * local_11c;
            local_11c = local_188._4_4_ +
                        local_190._4_4_ * local_11c + fStack_120 * (float)local_190 +
                        fStack_118 * (float)local_188;
            fStack_118 = uStack_178._4_4_ +
                         fVar19 + fStack_120 * (float)local_180 + fStack_118 * (float)uStack_178;
            fVar19 = local_114 * (float)local_190;
            fVar20 = local_10c * (float)uStack_198;
            fVar21 = local_10c * (float)local_188;
            fVar25 = local_1a0._4_4_ * local_104;
            uStack_198._0_4_ = fStack_100 * (float)uStack_198;
            local_10c = uStack_178._4_4_ +
                        local_180._4_4_ * fStack_110 + local_114 * (float)local_180 +
                        local_10c * (float)uStack_178;
            fVar22 = local_180._4_4_ * local_104;
            local_104 = local_188._4_4_ +
                        local_190._4_4_ * local_104 + fStack_108 * (float)local_190 +
                        fStack_100 * (float)local_188;
            fStack_100 = uStack_178._4_4_ +
                         fVar22 + fStack_108 * (float)local_180 + fStack_100 * (float)uStack_178;
            fStack_138 = uStack_198._4_4_ + fVar23 + fStack_138 * (float)local_1a0 + fVar4;
            local_12c = uStack_198._4_4_ +
                        local_1a0._4_4_ * fStack_128 + local_12c * (float)local_1a0 + fVar26;
            fStack_128 = local_188._4_4_ + local_190._4_4_ * fStack_128 + fVar6 + fVar27;
            fStack_120 = uStack_198._4_4_ + fVar24 + fStack_120 * (float)local_1a0 + fVar5;
            local_114 = uStack_198._4_4_ +
                        local_1a0._4_4_ * fStack_110 + local_114 * (float)local_1a0 + fVar20;
            fStack_110 = local_188._4_4_ + local_190._4_4_ * fStack_110 + fVar19 + fVar21;
            fStack_108 = uStack_198._4_4_ +
                         fVar25 + fStack_108 * (float)local_1a0 + (float)uStack_198;
          }
          local_1a0 = &DAT_3f8000003f800000;
          uStack_198 = &DAT_3f8000003f800000;
          FUN_039427b0(0x3f800000,param_2,local_15c,lVar1,&local_1a0);
          local_1a0 = &DAT_3f8000003f800000;
          uStack_198 = &DAT_3f8000003f800000;
          FUN_039427b0(0x3f800000,param_2,&local_12c,&fStack_120,&local_1a0);
          local_1a0 = &DAT_3f8000003f800000;
          uStack_198 = &DAT_3f8000003f800000;
          FUN_039427b0(0x3f800000,param_2,local_15c,&local_12c,&local_1a0);
          local_1a0 = &DAT_3f8000003f800000;
          uStack_198 = &DAT_3f8000003f800000;
          FUN_039427b0(0x3f800000,param_2,lVar1,&fStack_120,&local_1a0);
          local_1a0 = &DAT_3f8000003f800000;
          uStack_198 = &DAT_3f8000003f800000;
          FUN_039427b0(0x3f800000,param_2,&local_144,&fStack_138,&local_1a0);
          local_1a0 = &DAT_3f8000003f800000;
          uStack_198 = &DAT_3f8000003f800000;
          FUN_039427b0(0x3f800000,param_2,&local_114,&fStack_108,&local_1a0);
          local_1a0 = &DAT_3f8000003f800000;
          uStack_198 = &DAT_3f8000003f800000;
          FUN_039427b0(0x3f800000,param_2,&local_144,&local_114,&local_1a0);
          local_1a0 = &DAT_3f8000003f800000;
          uStack_198 = &DAT_3f8000003f800000;
          FUN_039427b0(0x3f800000,param_2,&fStack_138,&fStack_108,&local_1a0);
          local_1a0 = &DAT_3f8000003f800000;
          uStack_198 = &DAT_3f8000003f800000;
          FUN_039427b0(0x3f800000,param_2,local_15c,&fStack_138,&local_1a0);
          local_1a0 = &DAT_3f8000003f800000;
          uStack_198 = &DAT_3f8000003f800000;
          FUN_039427b0(0x3f800000,param_2,lVar1,&local_144,&local_1a0);
          local_1a0 = &DAT_3f8000003f800000;
          uStack_198 = &DAT_3f8000003f800000;
          FUN_039427b0(0x3f800000,param_2,&local_12c,&fStack_108,&local_1a0);
          local_1a0 = &DAT_3f8000003f800000;
          uStack_198 = &DAT_3f8000003f800000;
          FUN_039427b0(0x3f800000,param_2,&fStack_120,&local_114,&local_1a0);
        }
      }
    }
    local_15c[0] = 0.0;
    local_15c[1] = 0.0;
    local_154 = &DAT_3f8000003f800000;
    FUN_03ad1240(param_1 + 0x78,param_2,param_4,param_5,local_15c);
  }
  return;
}

