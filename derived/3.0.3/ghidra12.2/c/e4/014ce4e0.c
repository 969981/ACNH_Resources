
void FUN_014ce4e0(long param_1)

{
  float *pfVar1;
  uint *puVar2;
  float *pfVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
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
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float local_198 [12];
  float local_168;
  float fStack_164;
  float local_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float local_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float local_140;
  float fStack_13c;
  float local_138 [12];
  float local_108;
  float fStack_104;
  float local_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float local_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  undefined8 local_d8;
  float local_d0 [2];
  long local_c8;
  ulong uStack_c0;
  undefined8 local_b8;
  long lStack_b0;
  undefined4 local_a4;
  
  local_b8 = 0;
  lStack_b0 = 0;
  fVar32 = *(float *)(param_1 + 0xa3c);
  fVar26 = *(float *)(param_1 + 0xa40);
  local_c8 = 0;
  uStack_c0 = 0;
  fVar34 = *(float *)(param_1 + 0xa44);
  local_d8 = 0;
  local_d0[0] = 0.0;
  local_d0[1] = 0.0;
  uVar5 = *(int *)(param_1 + 0xb28) - 2;
  if (uVar5 < 6) {
    local_198[0] = (float)(&DAT_041757a0)[(int)uVar5];
  }
  else {
    local_198[0] = 0.0;
  }
  pfVar1 = (float *)(param_1 + 0x408);
  pfVar3 = pfVar1 + (ulong)(uint)local_198[0] * 0x10;
  if (6 < (uint)local_198[0]) {
    pfVar3 = pfVar1;
  }
  if (((pfVar3[3] < *pfVar3) || (pfVar3[4] < pfVar3[1])) || (pfVar3[5] < pfVar3[2])) {
    fVar28 = 0.0;
    fVar25 = 0.0;
    fVar15 = 0.0;
    fVar16 = 0.0;
  }
  else {
    pfVar3 = pfVar1 + (ulong)(uint)local_198[0] * 0x10;
    if (6 < (uint)local_198[0]) {
      pfVar3 = pfVar1;
    }
    fVar25 = (float)(int)pfVar3[10] * 5.0;
    fVar28 = (float)(int)pfVar3[0xb] * 5.0;
    fVar15 = (float)(int)pfVar3[0xf] * 5.0 + 5.0;
    fVar16 = (float)(int)pfVar3[0xe] * 5.0 + 5.0;
    local_d8 = (ulong)(uint)fVar25;
    local_b8 = CONCAT44(fVar25,fVar15);
    lStack_b0 = (ulong)(uint)fVar15 << 0x20;
    local_c8 = (ulong)(uint)fVar28 << 0x20;
    uStack_c0 = (ulong)(uint)fVar16;
    local_d0[1] = fVar16;
    local_d0[0] = fVar28;
  }
  puVar2 = (uint *)(param_1 + 0xb28);
  fVar29 = fVar32 + 0.0;
  fVar31 = fVar26 + 0.0;
  fVar30 = fVar34 + 0.0;
  if (*(int *)(param_1 + 0x3c0) == 4) {
    local_138[0] = 3.4028235e+38;
    local_138[1] = 3.4028235e+38;
    local_138[2] = 3.4028235e+38;
    local_138[3] = -3.4028235e+38;
    local_138[4] = -3.4028235e+38;
    local_138[5] = -3.4028235e+38;
    FUN_014eed1c(param_1 + 0x720,local_138,puVar2);
    if (fVar32 <= local_138[0]) {
      local_138[0] = fVar32;
    }
    if (fVar26 <= local_138[1]) {
      local_138[1] = fVar26;
    }
    if (fVar34 <= local_138[2]) {
      local_138[2] = fVar34;
    }
    if (local_138[3] <= fVar29) {
      local_138[3] = fVar29;
    }
    if (local_138[4] <= fVar31) {
      local_138[4] = fVar31;
    }
    if (local_138[5] <= fVar30) {
      local_138[5] = fVar30;
    }
    fVar27 = local_138[1];
    fVar33 = local_138[0];
    fVar29 = local_138[3];
    fVar35 = local_138[2];
    fVar30 = local_138[5];
    fVar31 = local_138[4];
  }
  else {
    fVar27 = fVar26;
    fVar33 = fVar32;
    fVar35 = fVar34;
    if (*(int *)(param_1 + 0x3c0) == 5) {
      if (*(long *)(param_1 + 0x970) != param_1 + 0x968) {
        lVar13 = (long)*(int *)(param_1 + 0x97c);
        lVar11 = *(long *)(param_1 + 0x970) - lVar13;
        do {
          local_138[4] = -3.4028235e+38;
          local_138[5] = -3.4028235e+38;
          local_138[0] = 3.4028235e+38;
          local_138[1] = 3.4028235e+38;
          local_138[2] = 3.4028235e+38;
          local_138[3] = -3.4028235e+38;
          FUN_014eed1c(lVar11,local_138,puVar2);
          lVar11 = *(long *)(lVar11 + lVar13 + 8) - lVar13;
          if (fVar33 <= local_138[0]) {
            local_138[0] = fVar33;
          }
          fVar33 = local_138[0];
          if (fVar27 <= local_138[1]) {
            local_138[1] = fVar27;
          }
          fVar27 = local_138[1];
          if (fVar35 <= local_138[2]) {
            local_138[2] = fVar35;
          }
          fVar35 = local_138[2];
          if (local_138[3] <= fVar29) {
            local_138[3] = fVar29;
          }
          fVar29 = local_138[3];
          if (local_138[4] <= fVar31) {
            local_138[4] = fVar31;
          }
          fVar31 = local_138[4];
          if (local_138[5] <= fVar30) {
            local_138[5] = fVar30;
          }
          fVar30 = local_138[5];
        } while (lVar11 != (param_1 + 0x968) - lVar13);
      }
    }
  }
  fVar21 = *(float *)(param_1 + 0x588);
  fVar23 = *(float *)(param_1 + 0x594);
  if (fVar23 < fVar21) {
    goto LAB_014cec48;
  }
  local_198[1] = *(float *)(param_1 + 0x58c);
  fStack_164 = *(float *)(param_1 + 0x598);
  if (fStack_164 < local_198[1]) {
LAB_014ce7b0:
    local_198[3] = -3.4028235e+38;
    local_198[0] = 3.4028235e+38;
    local_198[1] = 3.4028235e+38;
    local_198[2] = 3.4028235e+38;
    fStack_164 = -3.4028235e+38;
    local_198[8] = -3.4028235e+38;
  }
  else {
    local_198[2] = *(float *)(param_1 + 0x590);
    local_198[8] = *(float *)(param_1 + 0x59c);
    if (local_198[8] < local_198[2]) goto LAB_014ce7b0;
    local_198[0] = fVar21;
    local_198[3] = fVar23;
  }
  if (*(float *)(param_1 + 0x598) < *(float *)(param_1 + 0x58c)) goto LAB_014cec48;
  if ((*(float *)(param_1 + 0x59c) < *(float *)(param_1 + 0x590)) || (1 < *puVar2))
  goto LAB_014cec48;
  iVar4 = *(int *)(param_1 + 0x3c0);
  if (((iVar4 != 0) && ((iVar4 != 0x13 && (iVar4 != 0x14)))) && (local_a4 = 0x15, iVar4 != 0x15)) {
    if (iVar4 == 2) {
      if (*(int *)(param_1 + 0x5c8) == 0) goto LAB_014cec48;
      fVar19 = *(float *)(param_1 + 0x59c);
      pfVar1 = (float *)(param_1 + 0xb00);
      fVar22 = *(float *)(param_1 + 0x590);
      if (1 < *(int *)(param_1 + 0x5c8) - 3U) {
        fVar19 = fVar23;
        pfVar1 = (float *)(param_1 + 0xaf8);
        fVar22 = fVar21;
      }
      if ((*pfVar1 < fVar22) || (fVar19 < *pfVar1)) goto LAB_014cec48;
    }
    else if (iVar4 == 4) {
      if (*(int *)(param_1 + 0x738) != 3) goto LAB_014cec48;
    }
    else if (iVar4 != 5) goto LAB_014cec48;
  }
  uVar12 = 0;
  lVar13 = 0;
  lVar11 = 2;
  local_138[1] = fVar27;
  local_138[0] = fVar33;
  local_138[3] = fVar29;
  local_138[2] = fVar35;
  local_138[5] = fVar35;
  local_138[4] = fVar27;
  local_138[6] = fVar29;
  local_138[7] = fVar27;
  local_138[8] = fVar30;
  local_138[9] = fVar33;
  local_138[10] = fVar27;
  local_138[0xb] = fVar30;
  local_108 = fVar33;
  fStack_104 = fVar31;
  local_100 = fVar35;
  fStack_fc = fVar29;
  local_f8 = fVar31;
  fStack_f4 = fVar35;
  local_f0 = fVar29;
  fStack_ec = fVar31;
  local_e8 = fVar30;
  fStack_e4 = fVar33;
  local_e0 = fVar31;
  fStack_dc = fVar30;
  local_198[4] = local_198[1];
  local_198[5] = local_198[2];
  local_198[6] = local_198[3];
  local_198[7] = local_198[1];
  local_198[9] = local_198[0];
  local_198[10] = local_198[1];
  local_198[0xb] = local_198[8];
  local_168 = local_198[0];
  local_160 = local_198[2];
  fStack_15c = local_198[3];
  local_158 = fStack_164;
  fStack_154 = local_198[2];
  local_150 = local_198[3];
  fStack_14c = fStack_164;
  local_148 = local_198[8];
  fStack_144 = local_198[0];
  local_140 = fStack_164;
  fStack_13c = local_198[8];
  fVar15 = 1.0;
  fVar25 = 0.0;
  fVar19 = 0.0;
  fVar23 = 0.0;
  fVar21 = 0.0;
  fVar36 = 0.0;
  fVar37 = 0.0;
  fVar28 = 1.0;
  fVar22 = 0.0;
  fVar24 = 0.0;
  fVar16 = 1.0;
  uVar14 = (ulong)*(uint *)(param_1 + 0x5c8);
  switch((ulong)*(uint *)(param_1 + 0x5c8)) {
  case 0:
    goto switchD_014ce90c_caseD_0;
  case 1:
    lVar11 = 0;
    uVar12 = 2;
    lVar13 = 0x80;
    break;
  case 3:
    uVar12 = 1;
    lVar11 = 3;
    lVar13 = 0x40;
    break;
  case 4:
    uVar12 = 3;
    lVar11 = 1;
    lVar13 = 0xc0;
  }
  fVar25 = 0.0;
  pfVar1 = (float *)(PTR_DAT_04bb2d00 + lVar13 * 0x10);
  fVar21 = *pfVar1 + pfVar1[1] * 0.0;
  fVar16 = pfVar1[2] + pfVar1[3] * 0.0;
  fVar22 = -(pfVar1[1] * 0.0) - *pfVar1;
  fVar15 = 1.0;
  fVar36 = fVar21 * 0.0;
  fVar24 = fVar16 * 0.0;
  fVar37 = fVar21 + 0.0;
  fVar28 = fVar36 * 0.0 + 1.0;
  fVar19 = -(fVar24 * fVar36) + fVar16 * fVar28;
  fVar23 = fVar21 * fVar28 + fVar24 * fVar24;
  fVar38 = fVar36 * (-(fVar24 * fVar16) - fVar21 * fVar36) + fVar19 * fVar16 + fVar23 * fVar37;
  uVar14 = uVar12;
  if (fVar38 == 0.0) {
    fVar19 = 0.0;
    fVar23 = 0.0;
    fVar21 = 0.0;
  }
  else {
    fVar38 = 1.0 / fVar38;
    fVar15 = fVar19 * fVar38;
    fVar25 = -((fVar37 * -(fVar16 * 0.0) + fVar16 * fVar36) * fVar38);
    fVar19 = (-(fVar28 * fVar37) + fVar36 * fVar36) * fVar38;
    fVar23 = fVar23 * fVar38;
    fVar21 = -((fVar21 * fVar36 + fVar24 * fVar16) * fVar38);
  }
switchD_014ce90c_caseD_0:
  fVar44 = fVar36 * local_138[uVar14 * 3 + 1] + local_138[uVar14 * 3] * fVar16 +
           local_138[uVar14 * 3 + 2] * fVar37;
  fVar46 = fVar36 * local_138[lVar11 * 3 + 1] + local_138[lVar11 * 3] * fVar16 +
           local_138[lVar11 * 3 + 2] * fVar37;
  fVar45 = fVar36 * local_198[uVar14 * 3 + 1] + local_198[uVar14 * 3] * fVar16 +
           local_198[uVar14 * 3 + 2] * fVar37;
  fVar39 = fVar36 * local_198[lVar11 * 3 + 1] + local_198[lVar11 * 3] * fVar16 +
           local_198[lVar11 * 3 + 2] * fVar37;
  fVar42 = fVar24 * *(float *)(param_1 + 0xa34) + *(float *)(param_1 + 0xa30) * fVar22 +
           *(float *)(param_1 + 0xa38) * fVar16;
  fVar40 = fVar24 * local_198[uVar14 * 3 + 1] + local_198[uVar14 * 3] * fVar22 +
           local_198[uVar14 * 3 + 2] * fVar16;
  fVar38 = local_d0[uVar14 * 3 + -2];
  fVar17 = local_d0[uVar14 * 3 + -1];
  fVar18 = local_d0[lVar11 * 3];
  fVar41 = local_d0[lVar11 * 3 + -2];
  fVar47 = local_d0[lVar11 * 3 + -1];
  fVar20 = local_d0[uVar14 * 3];
  iVar4 = *(int *)(param_1 + 0x3c0);
  if (((iVar4 == 4) && (*(int *)(param_1 + 0x738) == 3)) || (iVar4 == 5)) {
    fVar46 = fVar46 + -2.5;
    fVar44 = fVar44 + 2.5;
  }
  bVar7 = true;
  bVar10 = false;
  if (fVar46 < fVar39) {
    bVar7 = false;
    bVar10 = true;
    if (!NAN(fVar44) && !NAN(fVar45)) {
      bVar7 = fVar44 < fVar45;
      bVar10 = false;
    }
  }
  fVar48 = fVar24 * local_138[lVar11 * 3 + 1] + local_138[lVar11 * 3] * fVar22 +
           local_138[lVar11 * 3 + 2] * fVar16;
  fVar46 = fVar36 * fVar17 + fVar38 * fVar16 + fVar20 * fVar37;
  fVar43 = fVar28 * fVar17 + fVar38 * fVar24 + fVar20 * fVar36;
  fVar44 = fVar28 * fVar47 + fVar41 * fVar24 + fVar18 * fVar36;
  fVar28 = (fVar24 * local_198[lVar11 * 3 + 1] + local_198[lVar11 * 3] * fVar22 +
           local_198[lVar11 * 3 + 2] * fVar16) - fVar40;
  fVar36 = fVar36 * fVar47 + fVar41 * fVar16 + fVar18 * fVar37;
  fVar37 = fVar24 * fVar17 + fVar38 * fVar22 + fVar20 * fVar16;
  bVar6 = false;
  bVar8 = false;
  bVar9 = false;
  if (bVar7 != bVar10) {
    bVar6 = false;
    bVar8 = false;
    bVar9 = true;
    if (!NAN(fVar42) && !NAN(fVar40)) {
      bVar6 = fVar42 < fVar40;
      bVar8 = fVar42 == fVar40;
      bVar9 = false;
    }
  }
  if (bVar8 || bVar6 != bVar9) {
    fVar28 = -0.0;
  }
  fVar28 = fVar24 * fVar47 + fVar41 * fVar22 + fVar18 * fVar16 + fVar28;
  if ((iVar4 == 4) || (iVar4 == 5)) {
    if (fVar40 < fVar48 + -2.5) {
      fVar46 = fVar46 + (fVar45 - fVar46);
      fVar36 = fVar36 - (fVar36 - fVar39);
    }
  }
  else if (((fVar40 < fVar42) && (fVar40 < fVar48)) ||
          ((iVar4 == 2 &&
           (fVar40 < fVar24 * *(float *)(param_1 + 0xafc) + *(float *)(param_1 + 0xaf8) * fVar22 +
                     *(float *)(param_1 + 0xb00) * fVar16)))) {
    fVar46 = fVar46 + (fVar45 - fVar46);
    fVar36 = fVar36 - (fVar36 - fVar39);
  }
  fVar22 = fVar25 * fVar43 + fVar46 * fVar15 + fVar37 * fVar19;
  fVar24 = fVar21 * fVar43 + fVar46 * fVar23 + fVar37 * fVar15;
  fVar16 = fVar25 * fVar44 + fVar36 * fVar15 + fVar28 * fVar19;
  fVar15 = fVar21 * fVar44 + fVar36 * fVar23 + fVar28 * fVar15;
  fVar28 = (float)NEON_fminnm(fVar22,0x7f7fffff);
  fVar21 = (float)NEON_fminnm(fVar24,0x7f7fffff);
  if (fVar22 <= -3.4028235e+38) {
    fVar22 = -3.4028235e+38;
  }
  if (fVar24 <= -3.4028235e+38) {
    fVar24 = -3.4028235e+38;
  }
  fVar25 = fVar16;
  if (fVar28 <= fVar16) {
    fVar25 = fVar28;
  }
  fVar28 = fVar15;
  if (fVar21 <= fVar15) {
    fVar28 = fVar21;
  }
  if (fVar16 <= fVar22) {
    fVar16 = fVar22;
  }
  if (fVar15 <= fVar24) {
    fVar15 = fVar24;
  }
LAB_014cec48:
  if ((*(uint *)(param_1 + 0x5c8) | 2) == 3) {
    fVar25 = fVar25 + 0.001;
    fVar28 = fVar28 + 0.001;
  }
  iVar4 = *(int *)(param_1 + 0x3c0);
  if (((((iVar4 == 0) || (iVar4 == 2)) || (iVar4 == 0x10)) || ((iVar4 == 0x11 || (iVar4 == 0x13))))
     || ((iVar4 == 0x14 || (iVar4 == 0x15)))) {
    fVar16 = fVar16 + -0.001;
    fVar15 = fVar15 + -0.001;
  }
  if (((fVar33 <= fVar29) && (fVar27 <= fVar31)) && (fVar35 <= fVar30)) {
    fVar29 = (fVar29 - fVar33) * 0.5;
    fVar30 = (fVar30 - fVar35) * 0.5;
    fVar25 = fVar29 + fVar25;
    fVar29 = fVar16 - fVar29;
    fVar28 = fVar30 + fVar28;
    fVar30 = fVar15 - fVar30;
    fVar16 = fVar25;
    if (fVar25 <= fVar29) {
      fVar16 = fVar29;
    }
    fVar15 = fVar28;
    if (fVar28 <= fVar30) {
      fVar15 = fVar30;
    }
  }
  fVar29 = *(float *)(param_1 + 0xa3c);
  fVar30 = *(float *)(param_1 + 0xa44);
  if (fVar29 <= fVar16) {
    fVar16 = fVar29;
  }
  if (fVar25 <= fVar29) {
    fVar25 = fVar16;
  }
  if (fVar30 <= fVar15) {
    fVar15 = fVar30;
  }
  if (fVar28 <= fVar30) {
    fVar28 = fVar15;
  }
  if (((fVar25 == fVar32) && (*(float *)(param_1 + 0xa40) == fVar26)) && (fVar28 == fVar34)) {
    *(undefined8 *)(param_1 + 0xaf0) = 0;
    *(undefined8 *)(param_1 + 0xae8) = 0;
  }
  else {
    fVar32 = fVar25 - fVar32;
    *(float *)(param_1 + 0xa3c) = fVar25;
    *(float *)(param_1 + 0xa44) = fVar28;
    *(float *)(param_1 + 0xaec) = *(float *)(param_1 + 0xa40) - fVar26;
    *(float *)(param_1 + 0xae8) = fVar32;
    *(float *)(param_1 + 0xaf0) = fVar28 - fVar34;
    bVar7 = true;
    bVar10 = false;
    if (fVar32 <= 1.1920929e-07) {
      bVar7 = false;
      bVar10 = true;
      if (!NAN(fVar32)) {
        bVar7 = fVar32 < -1.1920929e-07;
        bVar10 = false;
      }
    }
    iVar4 = 0;
    if (bVar7 != bVar10) {
      iVar4 = *(int *)(param_1 + 0xaf4) + 1;
    }
    *(int *)(param_1 + 0xaf4) = iVar4;
  }
  return;
}

