
uint FUN_03eafca0(long param_1,long param_2,float *param_3)

{
  uint uVar1;
  ulong uVar2;
  float *pfVar3;
  long lVar4;
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
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  undefined **local_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  float local_10c;
  float local_108;
  float fStack_104;
  float local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  float local_e0;
  long local_d8 [3];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  float local_a8;
  undefined *local_a0;
  float local_98;
  float fStack_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  
  fVar5 = *(float *)(param_1 + 8);
  fVar8 = *(float *)(param_1 + 0xc);
  fVar14 = *(float *)(param_1 + 0x18);
  fVar16 = *(float *)(param_1 + 0x1c);
  fVar11 = *(float *)(param_1 + 0x10);
  fVar12 = *(float *)(param_1 + 0x14);
  fVar19 = fVar12 - fVar5;
  fVar18 = fVar14 - fVar8;
  fVar21 = fVar16 - fVar11;
  fVar22 = SQRT(fVar18 * fVar18 + fVar19 * fVar19 + fVar21 * fVar21);
  if (0.0 < fVar22) {
    fVar25 = 1.0 / fVar22;
    fVar19 = fVar19 * fVar25;
    fVar18 = fVar18 * fVar25;
    fVar21 = fVar21 * fVar25;
  }
  fVar30 = *(float *)(param_2 + 8);
  fVar31 = *(float *)(param_2 + 0xc);
  fVar25 = fVar31 - fVar8;
  fVar32 = *(float *)(param_2 + 0x10);
  fVar26 = fVar30 - fVar5;
  fVar27 = fVar32 - fVar11;
  fVar28 = fVar18 * fVar25 + fVar26 * fVar19 + fVar27 * fVar21;
  if (fVar28 <= 0.0) {
    fVar18 = fVar25 * fVar25 + fVar26 * fVar26 + fVar27 * fVar27;
  }
  else {
    if (fVar22 <= fVar28) {
      fVar27 = fVar32 - fVar16;
      fVar18 = (fVar31 - fVar14) * (fVar31 - fVar14) + (fVar30 - fVar12) * (fVar30 - fVar12);
    }
    else {
      fVar26 = fVar26 - fVar19 * fVar28;
      fVar25 = fVar25 - fVar18 * fVar28;
      fVar27 = fVar27 - fVar21 * fVar28;
      fVar18 = fVar25 * fVar25 + fVar26 * fVar26;
    }
    fVar18 = fVar18 + fVar27 * fVar27;
  }
  fVar19 = *(float *)(param_1 + 0x20);
  fVar21 = fVar19 + SQRT(*(float *)(param_2 + 0x3c) * *(float *)(param_2 + 0x3c) +
                         *(float *)(param_2 + 0x38) * *(float *)(param_2 + 0x38) +
                         *(float *)(param_2 + 0x40) * *(float *)(param_2 + 0x40));
  if (fVar21 * fVar21 < fVar18) {
    uVar1 = 0;
    goto LAB_03eb056c;
  }
  fVar22 = fVar5 - fVar12;
  fVar21 = fVar8 - fVar14;
  fVar25 = fVar11 - fVar16;
  fVar18 = SQRT(fVar21 * fVar21 + fVar22 * fVar22 + fVar25 * fVar25);
  if (0.0 < fVar18) {
    fVar26 = 1.0 / fVar18;
    fVar22 = fVar22 * fVar26;
    fVar21 = fVar21 * fVar26;
    fVar25 = fVar25 * fVar26;
  }
  fVar14 = (fVar8 + fVar14) * 0.5;
  fVar8 = (fVar5 + fVar12) * 0.5;
  fVar11 = (fVar11 + fVar16) * 0.5;
  fVar18 = fVar18 * 0.5;
  local_144 = 0.0;
  fVar5 = 0.0;
  if (fVar25 == 0.0 && (fVar21 == 0.0 && fVar22 == 1.0)) {
    fVar5 = 1.0;
  }
  fVar12 = 1.0;
  if (fVar25 == 0.0 && (fVar21 == 0.0 && fVar22 == 1.0)) {
    fVar12 = 0.0;
  }
  fVar16 = -(fVar25 * fVar5) + fVar21 * 0.0;
  fVar26 = fVar22 * -0.0 + fVar12 * fVar25;
  fVar12 = -(fVar21 * fVar12) + fVar5 * fVar22;
  fVar5 = SQRT(fVar26 * fVar26 + fVar16 * fVar16 + fVar12 * fVar12);
  if (0.0 < fVar5) {
    fVar5 = 1.0 / fVar5;
    fVar16 = fVar16 * fVar5;
    fVar26 = fVar26 * fVar5;
    fVar12 = fVar12 * fVar5;
  }
  fVar27 = 0.0;
  fVar5 = 0.0;
  lVar4 = 0;
  fVar23 = fVar14 - fVar18 * fVar21;
  local_a8 = 0.0;
  local_b8 = 0;
  local_b0 = 0;
  fVar29 = fVar8 - fVar18 * fVar22;
  fVar28 = fVar8 + fVar18 * fVar22;
  fVar13 = fVar14 + fVar18 * fVar21;
  local_a0 = PTR_DAT_04bd46e0 + 0x10;
  local_d8[0] = param_2 + 0x14;
  local_d8[1] = param_2 + 0x20;
  local_d8[2] = param_2 + 0x2c;
  local_c0 = 0;
  fVar24 = fVar11 - fVar18 * fVar25;
  fVar6 = fVar11 + fVar18 * fVar25;
  local_15c = 0.0;
  local_158 = 0.0;
  local_150 = 0.0;
  local_14c = 0.0;
  local_154 = 0.0;
  local_148 = 0.0;
  local_140 = 0.0;
  local_13c = 0.0;
  do {
    pfVar3 = *(float **)((long)local_d8 + lVar4);
    fVar15 = -(pfVar3[2] * fVar21) + fVar25 * pfVar3[1];
    fVar17 = -(*pfVar3 * fVar25) + fVar22 * pfVar3[2];
    fVar9 = -(pfVar3[1] * fVar22) + fVar21 * *pfVar3;
    fVar7 = -(fVar9 * fVar21) + fVar25 * fVar17;
    fVar10 = -(fVar15 * fVar25) + fVar22 * fVar9;
    fVar9 = -(fVar17 * fVar22) + fVar21 * fVar15;
    fVar15 = SQRT(fVar10 * fVar10 + fVar7 * fVar7 + fVar9 * fVar9);
    if (0.0 < fVar15) {
      fVar17 = 1.0 / fVar15;
      fVar7 = fVar7 * fVar17;
      fVar10 = fVar10 * fVar17;
      fVar9 = fVar9 * fVar17;
    }
    if (fVar15 == 0.0) {
      fVar9 = fVar12;
      fVar10 = fVar26;
      fVar7 = fVar16;
    }
    fVar7 = fVar19 * fVar7;
    fVar10 = fVar19 * fVar10;
    fVar9 = fVar19 * fVar9;
    fVar20 = fVar29 + fVar7;
    fVar15 = fVar23 + fVar10;
    fVar17 = fVar24 + fVar9;
    local_8c = fVar28 + fVar7;
    local_88 = fVar13 + fVar10;
    local_84 = fVar6 + fVar9;
    local_98 = fVar20;
    fStack_94 = fVar15;
    local_90 = fVar17;
    uVar2 = FUN_03eaf1e0(&local_a0,param_2,&local_c0);
    if ((uVar2 & 1) != 0) {
      if (fVar5 < local_b8._4_4_) {
        local_15c = local_b8._4_4_;
        local_140 = local_b8._4_4_;
        local_13c = local_b8._4_4_;
        local_154 = (float)local_b8;
        local_150 = local_c0._4_4_;
        local_158 = local_b0._4_4_;
        local_14c = (float)local_b0;
        local_148 = (float)local_c0;
        local_144 = local_a8;
        fVar5 = local_b8._4_4_;
        fVar27 = local_b8._4_4_;
      }
    }
    local_98 = fVar28 - fVar7;
    fStack_94 = fVar13 - fVar10;
    local_90 = fVar6 - fVar9;
    uVar2 = FUN_03eaf1e0(&local_a0,param_2,&local_c0);
    if ((uVar2 & 1) != 0) {
      fVar5 = fVar27;
      if (fVar27 < local_b8._4_4_) {
        local_15c = local_b8._4_4_;
        local_140 = local_b8._4_4_;
        local_13c = local_b8._4_4_;
        local_154 = (float)local_b8;
        local_150 = local_c0._4_4_;
        local_158 = local_b0._4_4_;
        local_14c = (float)local_b0;
        local_148 = (float)local_c0;
        local_144 = local_a8;
        fVar5 = local_b8._4_4_;
        fVar27 = local_b8._4_4_;
      }
    }
    local_8c = fVar29 - fVar7;
    local_88 = fVar23 - fVar10;
    local_84 = fVar24 - fVar9;
    uVar2 = FUN_03eaf1e0(&local_a0,param_2,&local_c0);
    if ((uVar2 & 1) != 0) {
      fVar5 = local_13c;
      fVar27 = local_13c;
      if (local_13c < local_b8._4_4_) {
        local_15c = local_b8._4_4_;
        local_140 = local_b8._4_4_;
        local_13c = local_b8._4_4_;
        local_154 = (float)local_b8;
        local_150 = local_c0._4_4_;
        local_158 = local_b0._4_4_;
        local_14c = (float)local_b0;
        local_148 = (float)local_c0;
        local_144 = local_a8;
        fVar5 = local_b8._4_4_;
        fVar27 = local_b8._4_4_;
      }
    }
    local_98 = fVar20;
    fStack_94 = fVar15;
    local_90 = fVar17;
    uVar2 = FUN_03eaf1e0(&local_a0,param_2,&local_c0);
    if ((uVar2 & 1) != 0) {
      local_13c = local_140;
      fVar5 = local_140;
      fVar27 = local_140;
      if (local_140 < local_b8._4_4_) {
        local_15c = local_b8._4_4_;
        local_140 = local_b8._4_4_;
        local_13c = local_b8._4_4_;
        local_154 = (float)local_b8;
        local_150 = local_c0._4_4_;
        local_158 = local_b0._4_4_;
        local_14c = (float)local_b0;
        local_148 = (float)local_c0;
        local_144 = local_a8;
        fVar5 = local_b8._4_4_;
        fVar27 = local_b8._4_4_;
      }
    }
    lVar4 = lVar4 + 8;
  } while (lVar4 != 0x18);
  if (local_140 == 0.0) {
    fVar30 = fVar30 - fVar8;
    fVar28 = -(fVar12 * fVar21) + fVar25 * fVar26;
    fVar31 = fVar31 - fVar14;
    fVar6 = -(fVar16 * fVar25) + fVar22 * fVar12;
    fVar32 = fVar32 - fVar11;
    fVar23 = -(fVar26 * fVar22) + fVar21 * fVar16;
    fVar13 = fVar31 * fVar26 + fVar16 * fVar30 + fVar12 * fVar32;
    fVar24 = fVar31 * fVar6 + fVar28 * fVar30 + fVar23 * fVar32;
    fVar27 = fVar24 * fVar24 + (fVar19 / fVar19) * (fVar19 / fVar19) * fVar13 * fVar13;
    fVar5 = SQRT(fVar27);
    if (NAN(fVar5)) {
      fVar5 = sqrtf(fVar27);
    }
    fVar27 = 0.0;
    if (fVar5 != 0.0) {
      fVar27 = fVar13 * (fVar19 / fVar5);
      fVar19 = fVar24 * (fVar19 / fVar5);
    }
    fVar5 = fVar5 - SQRT(fVar19 * fVar19 + fVar27 * fVar27);
    local_140 = local_15c;
    if (0.0 < fVar5) goto LAB_03eb04d4;
    fVar30 = fVar31 * fVar21 + fVar22 * fVar30 + fVar25 * fVar32;
    fVar32 = -fVar30;
    if (0.0 <= fVar30) {
      fVar32 = fVar30;
    }
    fVar32 = fVar32 - fVar18;
    if (0.0 < fVar32) goto LAB_03eb04d4;
    fVar31 = -fVar18;
    if (0.0 <= fVar30) {
      fVar31 = fVar18;
    }
    fVar29 = fVar19;
    fVar18 = fVar27;
    local_140 = fVar5;
    if (fVar5 <= fVar32) {
      fVar29 = fVar24;
      fVar30 = fVar31;
      fVar18 = fVar13;
      local_140 = fVar32;
    }
    if (fVar5 <= fVar32) {
      fVar27 = 0.0;
    }
    fVar13 = 0.0;
    if (fVar5 <= fVar32) {
      fVar19 = 0.0;
      fVar13 = fVar31;
    }
    fVar5 = SQRT(fVar13 * fVar13 + fVar27 * fVar27 + fVar19 * fVar19);
    if (0.0 < fVar5) {
      fVar5 = 1.0 / fVar5;
      fVar27 = fVar27 * fVar5;
      fVar13 = fVar13 * fVar5;
      fVar19 = fVar19 * fVar5;
    }
    local_140 = -local_140;
    if (param_3 != (float *)0x0) {
      local_e0 = 0.0;
      local_f0 = 0;
      local_e8 = 0;
      local_f8 = 0;
      local_14c = *(float *)(param_2 + 8);
      local_158 = *(float *)(param_2 + 0xc);
      local_144 = *(float *)(param_2 + 0x10);
      local_148 = fVar16 * fVar27 + fVar22 * fVar13 + fVar28 * fVar19;
      local_150 = fVar26 * fVar27 + fVar21 * fVar13 + fVar6 * fVar19;
      local_154 = fVar12 * fVar27 + fVar25 * fVar13 + fVar23 * fVar19;
      fVar5 = *(float *)(param_2 + 0x38) + *(float *)(param_2 + 0x3c) + *(float *)(param_2 + 0x40);
      local_120 = &PTR_LAB_04ba4a68;
      local_100 = fVar5 + fVar5;
      local_118 = local_14c - local_148 * fVar5;
      fStack_114 = local_158 - local_150 * fVar5;
      fStack_110 = local_144 - local_154 * fVar5;
      local_10c = local_148;
      local_108 = local_150;
      fStack_104 = local_154;
      uVar2 = FUN_03eaf6f0(&local_120,param_2,&local_f8);
      if ((uVar2 & 1) != 0) {
        fVar5 = (fVar8 + fVar28 * fVar29 + fVar16 * fVar18 + fVar22 * fVar30) - (float)local_e8;
        fVar8 = (fVar14 + fVar6 * fVar29 + fVar26 * fVar18 + fVar21 * fVar30) - local_e8._4_4_;
        fVar11 = (fVar11 + fVar23 * fVar29 + fVar12 * fVar18 + fVar25 * fVar30) - local_e0;
        local_140 = SQRT(fVar8 * fVar8 + fVar5 * fVar5 + fVar11 * fVar11);
        local_14c = (float)local_e8;
        local_158 = local_e8._4_4_;
        local_144 = local_e0;
      }
      local_14c = local_14c + local_148 * local_140;
      local_144 = local_144 + local_154 * local_140;
      local_158 = local_158 + local_150 * local_140;
      local_148 = -local_148;
      local_150 = -local_150;
      local_154 = -local_154;
      goto LAB_03eb04d8;
    }
  }
  else {
LAB_03eb04d4:
    if (param_3 != (float *)0x0) {
LAB_03eb04d8:
      *param_3 = local_148;
      param_3[1] = local_150;
      param_3[2] = local_154;
      param_3[3] = local_140;
      param_3[4] = local_14c;
      param_3[5] = local_158;
      param_3[6] = local_144;
    }
  }
  if (local_140 <= 0.0) {
    local_118 = *(float *)(param_1 + 8);
    local_120 = (undefined **)(PTR_DAT_04bb4bd8 + 0x10);
    fStack_114 = (float)*(undefined8 *)(param_1 + 0xc);
    fStack_110 = (float)((ulong)*(undefined8 *)(param_1 + 0xc) >> 0x20);
    local_10c = *(float *)(param_1 + 0x20);
    uVar2 = FUN_03eafa70(&local_120,param_2,param_3);
    if ((uVar2 & 1) == 0) {
      fStack_110 = *(float *)(param_1 + 0x1c);
      local_118 = (float)*(undefined8 *)(param_1 + 0x14);
      fStack_114 = (float)((ulong)*(undefined8 *)(param_1 + 0x14) >> 0x20);
      uVar1 = FUN_03eafa70(&local_120,param_2,param_3);
      goto LAB_03eb056c;
    }
  }
  uVar1 = 1;
LAB_03eb056c:
  return uVar1 & 1;
}

