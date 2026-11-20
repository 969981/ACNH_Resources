
void FUN_03ef3a34(long param_1,float *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
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
  
  if (*(uint *)(param_1 + 0x90) <= param_3) {
    return;
  }
  lVar5 = *(long *)(param_1 + 0x98);
  lVar6 = *(long *)(lVar5 + (long)(int)param_3 * 0x88 + 0x80);
  if (lVar6 == 0) {
    return;
  }
  uVar2 = *(uint *)(lVar6 + 0x250);
  uVar3 = *(uint *)(lVar6 + 0x270);
  fVar8 = 0.0;
  fVar9 = 0.0;
  fVar12 = 0.0;
  fVar10 = 1.0;
  uVar1 = uVar2 - 3;
  if ((int)uVar2 < 3) {
    uVar1 = uVar2;
  }
  fVar18 = -1.0;
  if ((int)uVar2 < 3) {
    fVar18 = 1.0;
  }
  uVar2 = uVar3 - 3;
  if ((int)uVar3 < 3) {
    uVar2 = uVar3;
  }
  fVar7 = -1.0;
  if ((int)uVar3 < 3) {
    fVar7 = 1.0;
  }
  if ((2 < uVar2 || 2 < uVar1) || uVar1 == uVar2) goto LAB_03ef3e24;
  fVar8 = sinf(*(float *)(lVar6 + 0x228));
  fVar9 = sinf(*(float *)(lVar6 + 0x22c));
  fVar10 = sinf(*(float *)(lVar6 + 0x230));
  fVar11 = cosf(*(float *)(lVar6 + 0x228));
  fVar12 = cosf(*(float *)(lVar6 + 0x22c));
  fVar13 = cosf(*(float *)(lVar6 + 0x230));
  fVar21 = fVar10 * fVar12;
  fVar24 = fVar8 * fVar12;
  fVar17 = fVar11 * fVar13 + fVar10 * fVar8 * fVar9;
  fVar25 = fVar8 * fVar9 * fVar13 - fVar10 * fVar11;
  fVar23 = fVar8 * fVar10 + fVar9 * fVar11 * fVar13;
  fVar22 = -(fVar8 * fVar13) + fVar9 * fVar10 * fVar11;
  fVar11 = fVar11 * fVar12;
  fVar8 = fVar12 * fVar13 + fVar17;
  fVar15 = (fVar11 + fVar8 + 1.0) * 0.25;
  fVar17 = fVar15 + (fVar11 + fVar17) * -0.5;
  fVar10 = fVar15 + (fVar11 + fVar12 * fVar13) * -0.5;
  fVar8 = fVar15 + fVar8 * -0.5;
  if (fVar15 <= fVar17) {
    if (fVar17 <= fVar10) goto code_r0x03ef3bfc;
    if (fVar17 <= fVar8) goto LAB_03ef3c2c;
    fVar8 = SQRT(fVar17);
    if (NAN(fVar8)) {
      fVar8 = sqrtf(fVar17);
    }
    fVar11 = 0.25 / fVar8;
    fVar15 = fVar21 + fVar25;
    fVar21 = fVar23 - fVar9;
    fVar13 = (fVar24 - fVar22) * fVar11;
LAB_03ef3bec:
    fVar15 = fVar15 * fVar11;
    fVar11 = fVar21 * fVar11;
  }
  else {
    if (fVar15 <= fVar10) {
code_r0x03ef3bfc:
      if (fVar8 < fVar10) {
        fVar15 = SQRT(fVar10);
        if (NAN(fVar15)) {
          fVar15 = sqrtf(fVar10);
        }
        fVar8 = 0.25 / fVar15;
        fVar13 = (fVar9 + fVar23) * fVar8;
        fVar11 = (fVar24 + fVar22) * fVar8;
        fVar8 = (fVar21 + fVar25) * fVar8;
        goto LAB_03ef3c54;
      }
    }
    else if (fVar8 < fVar15) {
      fVar13 = SQRT(fVar15);
      if (NAN(fVar13)) {
        fVar13 = sqrtf(fVar15);
      }
      fVar11 = 0.25 / fVar13;
      fVar21 = fVar21 - fVar25;
      fVar8 = (fVar24 - fVar22) * fVar11;
      fVar15 = fVar9 + fVar23;
      goto LAB_03ef3bec;
    }
LAB_03ef3c2c:
    fVar11 = SQRT(fVar8);
    if (NAN(fVar11)) {
      fVar11 = sqrtf(fVar8);
    }
    fVar15 = 0.25 / fVar11;
    fVar13 = (fVar21 - fVar25) * fVar15;
    fVar8 = (fVar23 - fVar9) * fVar15;
    fVar15 = (fVar24 + fVar22) * fVar15;
  }
LAB_03ef3c54:
  lVar6 = (ulong)uVar1 * 4;
  lVar4 = (ulong)uVar2 * 4;
  fVar17 = fVar18 * *(float *)(PTR_DAT_04bb59b0 + lVar6);
  fVar21 = fVar18 * *(float *)(PTR_DAT_04bb59b0 + lVar6 + 0xc);
  fVar18 = fVar18 * *(float *)(PTR_DAT_04bb59b0 + lVar6 + 0x18);
  fVar22 = fVar7 * *(float *)(PTR_DAT_04bb59b0 + lVar4 + 0x18);
  fVar23 = fVar7 * *(float *)(PTR_DAT_04bb59b0 + lVar4);
  fVar7 = fVar7 * *(float *)(PTR_DAT_04bb59b0 + lVar4 + 0xc);
  fVar9 = -(fVar22 * fVar21) + fVar18 * fVar7;
  fVar24 = -(fVar23 * fVar18) + fVar17 * fVar22;
  fVar25 = -(fVar7 * fVar17) + fVar21 * fVar23;
  fVar26 = fVar7 + fVar9;
  fVar12 = (fVar18 + fVar26 + 1.0) * 0.25;
  fVar7 = fVar12 + (fVar18 + fVar7) * -0.5;
  fVar10 = fVar12 + (fVar18 + fVar9) * -0.5;
  fVar9 = fVar12 + fVar26 * -0.5;
  if (fVar12 <= fVar7) {
    if (fVar7 <= fVar10) goto code_r0x03ef3d58;
    if (fVar7 <= fVar9) goto LAB_03ef3d88;
    fVar18 = SQRT(fVar7);
    if (NAN(fVar18)) {
      fVar18 = sqrtf(fVar7);
    }
    fVar7 = 0.25 / fVar18;
    fVar26 = fVar23 + fVar24;
    fVar24 = fVar17 + fVar25;
    fVar19 = (fVar22 - fVar21) * fVar7;
LAB_03ef3d48:
    fVar26 = fVar26 * fVar7;
    fVar7 = fVar24 * fVar7;
  }
  else {
    if (fVar12 <= fVar10) {
code_r0x03ef3d58:
      if (fVar9 < fVar10) {
        fVar26 = SQRT(fVar10);
        if (NAN(fVar26)) {
          fVar26 = sqrtf(fVar10);
        }
        fVar18 = 0.25 / fVar26;
        fVar19 = (fVar17 - fVar25) * fVar18;
        fVar7 = (fVar21 + fVar22) * fVar18;
        fVar18 = (fVar23 + fVar24) * fVar18;
        goto LAB_03ef3db0;
      }
    }
    else if (fVar9 < fVar12) {
      fVar19 = SQRT(fVar12);
      if (NAN(fVar19)) {
        fVar19 = sqrtf(fVar12);
      }
      fVar7 = 0.25 / fVar19;
      fVar26 = fVar17 - fVar25;
      fVar24 = fVar24 - fVar23;
      fVar18 = (fVar22 - fVar21) * fVar7;
      goto LAB_03ef3d48;
    }
LAB_03ef3d88:
    fVar7 = SQRT(fVar9);
    if (NAN(fVar7)) {
      fVar7 = sqrtf(fVar9);
    }
    fVar26 = 0.25 / fVar7;
    fVar19 = (fVar24 - fVar23) * fVar26;
    fVar18 = (fVar17 + fVar25) * fVar26;
    fVar26 = (fVar21 + fVar22) * fVar26;
  }
LAB_03ef3db0:
  fVar12 = (fVar8 * fVar19 + fVar18 * fVar13 + fVar7 * fVar15) - fVar26 * fVar11;
  fVar10 = ((-(fVar8 * fVar18) + fVar19 * fVar13) - fVar26 * fVar15) - fVar7 * fVar11;
  fVar9 = -(fVar8 * fVar7) + fVar26 * fVar13 + fVar19 * fVar15 + fVar18 * fVar11;
  fVar8 = ((fVar8 * fVar26 + fVar7 * fVar13) - fVar18 * fVar15) + fVar19 * fVar11;
  fVar18 = SQRT(fVar12 * fVar12 + fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8);
  if (0.0 < fVar18) {
    fVar18 = 1.0 / fVar18;
    fVar10 = fVar10 * fVar18;
    fVar12 = fVar12 * fVar18;
    fVar9 = fVar9 * fVar18;
    fVar8 = fVar8 * fVar18;
  }
LAB_03ef3e24:
  fVar23 = -fVar12;
  fVar25 = *param_2;
  fVar24 = param_2[1];
  fVar22 = -fVar9;
  fVar21 = -fVar8;
  fVar15 = fVar12 * fVar12 + fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8;
  fVar17 = 1.0 / fVar15;
  fVar11 = fVar22;
  fVar18 = fVar10;
  fVar7 = fVar21;
  fVar13 = fVar23;
  if (1.1920929e-07 < fVar15) {
    fVar11 = -(fVar9 * fVar17);
    fVar18 = fVar10 * fVar17;
    fVar7 = -(fVar8 * fVar17);
    fVar13 = -(fVar12 * fVar17);
  }
  fVar15 = param_2[2];
  fVar17 = cosf(fVar15 * 0.5);
  fVar26 = cosf(fVar24 * 0.5);
  fVar19 = cosf(fVar25 * 0.5);
  fVar15 = sinf(fVar15 * 0.5);
  fVar24 = sinf(fVar24 * 0.5);
  fVar25 = sinf(fVar25 * 0.5);
  lVar5 = lVar5 + (long)(int)param_3 * 0x88;
  fVar20 = fVar15 * fVar24 * fVar25 + fVar19 * fVar17 * fVar26;
  fVar14 = -(fVar15 * fVar24 * fVar19) + fVar25 * fVar17 * fVar26;
  fVar16 = fVar26 * fVar15 * fVar25 + fVar19 * fVar17 * fVar24;
  fVar15 = -(fVar17 * fVar24 * fVar25) + fVar19 * fVar26 * fVar15;
  fVar17 = fVar23 * fVar14 + fVar20 * fVar10 + fVar16 * fVar22 + fVar15 * fVar21;
  fVar24 = fVar12 * fVar20 + fVar14 * fVar10 + fVar15 * fVar9 + fVar16 * fVar21;
  fVar21 = fVar23 * fVar15 + fVar16 * fVar10 + fVar20 * fVar9 + fVar14 * fVar8;
  fVar22 = fVar12 * fVar16 + fVar15 * fVar10 + fVar14 * fVar22 + fVar20 * fVar8;
  fVar23 = ((-(fVar24 * fVar13) + fVar18 * fVar17) - fVar11 * fVar21) - fVar7 * fVar22;
  fVar25 = (fVar18 * fVar24 + fVar13 * fVar17 + fVar7 * fVar21) - fVar11 * fVar22;
  fVar15 = -(fVar24 * fVar7) + fVar11 * fVar17 + fVar18 * fVar21 + fVar13 * fVar22;
  fVar18 = ((fVar11 * fVar24 + fVar7 * fVar17) - fVar13 * fVar21) + fVar18 * fVar22;
  *(float *)(lVar5 + 0x24) = (fVar10 * fVar25 + fVar12 * fVar23 + fVar8 * fVar15) - fVar9 * fVar18;
  *(float *)(lVar5 + 0x28) = -(fVar25 * fVar8) + fVar9 * fVar23 + fVar10 * fVar15 + fVar12 * fVar18;
  *(float *)(lVar5 + 0x2c) = ((fVar9 * fVar25 + fVar8 * fVar23) - fVar12 * fVar15) + fVar10 * fVar18
  ;
  *(float *)(lVar5 + 0x30) =
       ((-(fVar25 * fVar12) + fVar10 * fVar23) - fVar9 * fVar15) - fVar8 * fVar18;
  return;
}

