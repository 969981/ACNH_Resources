
void FUN_03ef41a0(float *param_1,uint param_2,uint param_3,float *param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
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
  
  uVar5 = DAT_041e93ec;
  uVar1 = param_2 - 3;
  if ((int)param_2 < 3) {
    uVar1 = param_2;
  }
  fVar14 = -1.0;
  if ((int)param_2 < 3) {
    fVar14 = 1.0;
  }
  fVar15 = -1.0;
  uVar2 = param_3 - 3;
  if ((int)param_3 < 3) {
    fVar15 = 1.0;
    uVar2 = param_3;
  }
  if (((2 < uVar2) || (2 < uVar1)) || (uVar1 == uVar2)) {
    *(undefined8 *)param_1 = DAT_041e93e4;
    *(undefined8 *)(param_1 + 2) = uVar5;
    return;
  }
  fVar6 = sinf(*param_4);
  fVar7 = sinf(param_4[1]);
  fVar8 = sinf(param_4[2]);
  fVar9 = cosf(*param_4);
  fVar10 = cosf(param_4[1]);
  fVar11 = cosf(param_4[2]);
  fVar19 = fVar6 * fVar10;
  fVar16 = fVar8 * fVar10;
  fVar13 = fVar9 * fVar11 + fVar8 * fVar6 * fVar7;
  fVar17 = fVar6 * fVar7 * fVar11 - fVar8 * fVar9;
  fVar20 = fVar6 * fVar8 + fVar7 * fVar9 * fVar11;
  fVar18 = -(fVar6 * fVar11) + fVar7 * fVar8 * fVar9;
  fVar9 = fVar9 * fVar10;
  fVar6 = fVar10 * fVar11 + fVar13;
  fVar12 = (fVar9 + fVar6 + 1.0) * 0.25;
  fVar13 = fVar12 + (fVar9 + fVar13) * -0.5;
  fVar8 = fVar12 + (fVar9 + fVar10 * fVar11) * -0.5;
  fVar6 = fVar12 + fVar6 * -0.5;
  if (fVar12 <= fVar13) {
    if (fVar13 <= fVar8) goto code_r0x03ef4344;
    if (fVar13 <= fVar6) goto LAB_03ef4374;
    fVar6 = SQRT(fVar13);
    if (NAN(fVar6)) {
      fVar6 = sqrtf(fVar13);
    }
    fVar10 = 0.25 / fVar6;
    fVar11 = fVar16 + fVar17;
    fVar16 = fVar20 - fVar7;
    fVar8 = (fVar19 - fVar18) * fVar10;
LAB_03ef4334:
    fVar11 = fVar11 * fVar10;
    fVar10 = fVar16 * fVar10;
  }
  else {
    if (fVar12 <= fVar8) {
code_r0x03ef4344:
      if (fVar6 < fVar8) {
        fVar11 = SQRT(fVar8);
        if (NAN(fVar11)) {
          fVar11 = sqrtf(fVar8);
        }
        fVar6 = 0.25 / fVar11;
        fVar8 = (fVar7 + fVar20) * fVar6;
        fVar10 = (fVar19 + fVar18) * fVar6;
        fVar6 = (fVar16 + fVar17) * fVar6;
        goto LAB_03ef439c;
      }
    }
    else if (fVar6 < fVar12) {
      fVar8 = SQRT(fVar12);
      if (NAN(fVar8)) {
        fVar8 = sqrtf(fVar12);
      }
      fVar10 = 0.25 / fVar8;
      fVar16 = fVar16 - fVar17;
      fVar6 = (fVar19 - fVar18) * fVar10;
      fVar11 = fVar7 + fVar20;
      goto LAB_03ef4334;
    }
LAB_03ef4374:
    fVar10 = SQRT(fVar6);
    if (NAN(fVar10)) {
      fVar10 = sqrtf(fVar6);
    }
    fVar11 = 0.25 / fVar10;
    fVar8 = (fVar16 - fVar17) * fVar11;
    fVar6 = (fVar20 - fVar7) * fVar11;
    fVar11 = (fVar19 + fVar18) * fVar11;
  }
LAB_03ef439c:
  lVar3 = (ulong)uVar1 * 4;
  lVar4 = (ulong)uVar2 * 4;
  fVar12 = fVar14 * *(float *)(PTR_DAT_04bb59b0 + lVar3);
  fVar16 = fVar14 * *(float *)(PTR_DAT_04bb59b0 + lVar3 + 0xc);
  fVar14 = fVar14 * *(float *)(PTR_DAT_04bb59b0 + lVar3 + 0x18);
  fVar18 = fVar15 * *(float *)(PTR_DAT_04bb59b0 + lVar4 + 0x18);
  fVar17 = fVar15 * *(float *)(PTR_DAT_04bb59b0 + lVar4);
  fVar15 = fVar15 * *(float *)(PTR_DAT_04bb59b0 + lVar4 + 0xc);
  fVar20 = -(fVar18 * fVar16) + fVar14 * fVar15;
  fVar19 = -(fVar17 * fVar14) + fVar12 * fVar18;
  fVar13 = -(fVar15 * fVar12) + fVar16 * fVar17;
  fVar21 = fVar15 + fVar20;
  fVar7 = (fVar14 + fVar21 + 1.0) * 0.25;
  fVar9 = fVar7 + (fVar14 + fVar15) * -0.5;
  fVar15 = fVar7 + (fVar14 + fVar20) * -0.5;
  fVar14 = fVar7 + fVar21 * -0.5;
  if (fVar7 <= fVar9) {
    if (fVar15 < fVar9) {
      if (fVar9 <= fVar14) goto LAB_03ef44cc;
      fVar14 = SQRT(fVar9);
      if (NAN(fVar14)) {
        fVar14 = sqrtf(fVar9);
      }
      fVar15 = 0.25 / fVar14;
      fVar7 = fVar17 + fVar19;
      fVar19 = fVar12 + fVar13;
      fVar9 = (fVar18 - fVar16) * fVar15;
LAB_03ef448c:
      fVar7 = fVar7 * fVar15;
      fVar15 = fVar19 * fVar15;
      goto LAB_03ef44f4;
    }
code_r0x03ef449c:
    if (fVar14 < fVar15) {
      fVar7 = SQRT(fVar15);
      if (NAN(fVar7)) {
        fVar7 = sqrtf(fVar15);
      }
      fVar14 = 0.25 / fVar7;
      fVar9 = (fVar12 - fVar13) * fVar14;
      fVar15 = (fVar16 + fVar18) * fVar14;
      fVar14 = (fVar17 + fVar19) * fVar14;
      goto LAB_03ef44f4;
    }
  }
  else {
    if (fVar7 <= fVar15) goto code_r0x03ef449c;
    if (fVar14 < fVar7) {
      fVar9 = SQRT(fVar7);
      if (NAN(fVar9)) {
        fVar9 = sqrtf(fVar7);
      }
      fVar15 = 0.25 / fVar9;
      fVar7 = fVar12 - fVar13;
      fVar19 = fVar19 - fVar17;
      fVar14 = (fVar18 - fVar16) * fVar15;
      goto LAB_03ef448c;
    }
  }
LAB_03ef44cc:
  fVar15 = SQRT(fVar14);
  if (NAN(fVar15)) {
    fVar15 = sqrtf(fVar14);
  }
  fVar7 = 0.25 / fVar15;
  fVar9 = (fVar19 - fVar17) * fVar7;
  fVar14 = (fVar12 + fVar13) * fVar7;
  fVar7 = (fVar16 + fVar18) * fVar7;
LAB_03ef44f4:
  fVar12 = ((-(fVar6 * fVar14) + fVar9 * fVar8) - fVar7 * fVar11) - fVar15 * fVar10;
  fVar13 = (fVar6 * fVar9 + fVar14 * fVar8 + fVar15 * fVar11) - fVar7 * fVar10;
  fVar16 = -(fVar6 * fVar15) + fVar7 * fVar8 + fVar9 * fVar11 + fVar14 * fVar10;
  fVar14 = ((fVar6 * fVar7 + fVar15 * fVar8) - fVar14 * fVar11) + fVar9 * fVar10;
  fVar15 = SQRT(fVar13 * fVar13 + fVar12 * fVar12 + fVar16 * fVar16 + fVar14 * fVar14);
  if (0.0 < fVar15) {
    fVar15 = 1.0 / fVar15;
    fVar12 = fVar12 * fVar15;
    fVar13 = fVar13 * fVar15;
    fVar16 = fVar16 * fVar15;
    fVar14 = fVar14 * fVar15;
  }
  *param_1 = fVar13;
  param_1[1] = fVar16;
  param_1[2] = fVar14;
  param_1[3] = fVar12;
  return;
}

