
void FUN_00330278(undefined8 *param_1,float *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
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
  
  fVar12 = *(float *)PTR_Float1Divided2Pi_04bcedd8;
  fVar15 = *(float *)PTR_FloatPiDivided2_04bcedc0;
  fVar14 = -*(float *)PTR_Float2Pi_04bcede0;
  fVar11 = *param_2 - (float)(int)(fVar12 * *param_2) * *(float *)PTR_Float2Pi_04bcede0;
  fVar13 = -fVar15;
  if (fVar11 <= fVar15) {
    fVar16 = -*(float *)PTR_FloatPi_04bcedc8 - fVar11;
    fVar4 = *(float *)(PTR_SinCoefficients_04bcede8 + 0x10);
    fVar8 = *(float *)PTR_SinCoefficients_04bcede8;
    fVar10 = *(float *)(PTR_SinCoefficients_04bcede8 + 4);
    fVar3 = fVar16;
    if (fVar13 <= fVar11) {
      fVar3 = fVar11;
    }
    fVar9 = *(float *)(PTR_SinCoefficients_04bcede8 + 8);
    fVar6 = *(float *)(PTR_SinCoefficients_04bcede8 + 0xc);
    if (fVar13 <= fVar11) {
      fVar5 = 1.0;
    }
    else {
      fVar5 = -1.0;
      fVar11 = fVar16;
    }
  }
  else {
    fVar3 = *(float *)PTR_FloatPi_04bcedc8 - fVar11;
    fVar5 = -1.0;
    fVar8 = *(float *)PTR_SinCoefficients_04bcede8;
    fVar10 = *(float *)(PTR_SinCoefficients_04bcede8 + 4);
    fVar9 = *(float *)(PTR_SinCoefficients_04bcede8 + 8);
    fVar6 = *(float *)(PTR_SinCoefficients_04bcede8 + 0xc);
    fVar4 = *(float *)(PTR_SinCoefficients_04bcede8 + 0x10);
    fVar11 = fVar3;
  }
  fVar23 = *(float *)PTR_FloatPi_04bcedc8;
  fVar16 = param_2[1] + (float)(int)(fVar12 * param_2[1]) * fVar14;
  if (fVar16 <= fVar15) {
    if (fVar13 <= fVar16) {
      fVar7 = 1.0;
    }
    else {
      fVar7 = -1.0;
      fVar16 = -fVar23 - fVar16;
    }
  }
  else {
    fVar7 = -1.0;
    fVar16 = fVar23 - fVar16;
  }
  fVar21 = *(float *)PTR_CosCoefficients_04bcedf0;
  fVar22 = *(float *)(PTR_CosCoefficients_04bcedf0 + 4);
  fVar20 = *(float *)(PTR_CosCoefficients_04bcedf0 + 8);
  fVar19 = *(float *)(PTR_CosCoefficients_04bcedf0 + 0xc);
  fVar18 = *(float *)(PTR_CosCoefficients_04bcedf0 + 0x10);
  fVar12 = param_2[2] + (float)(int)(fVar12 * param_2[2]) * fVar14;
  if (fVar12 <= fVar15) {
    if (fVar13 <= fVar12) {
      fVar13 = 1.0;
    }
    else {
      fVar13 = -1.0;
      fVar12 = -fVar23 - fVar12;
    }
  }
  else {
    fVar13 = -1.0;
    fVar12 = fVar23 - fVar12;
  }
  fVar11 = fVar11 * fVar11;
  fVar23 = fVar3 * fVar3;
  fVar15 = fVar12 * fVar12;
  fVar24 = fVar12 * fVar12;
  fVar14 = fVar16 * fVar16;
  fVar17 = fVar16 * fVar16;
  fVar14 = fVar14 * ((fVar6 + fVar14 * ((fVar10 - fVar14 * fVar8) * fVar14 - fVar9)) * fVar14 -
                    fVar4) + 1.0;
  fVar5 = fVar5 * (fVar11 * ((fVar19 + fVar11 * ((fVar22 - fVar11 * fVar21) * fVar11 - fVar20)) *
                             fVar11 - fVar18) + 1.0);
  fVar3 = fVar3 * (fVar23 * ((fVar6 + fVar23 * ((fVar10 - fVar23 * fVar8) * fVar23 - fVar9)) *
                             fVar23 - fVar4) + 1.0);
  fVar13 = fVar13 * (fVar15 * ((fVar19 + fVar15 * ((fVar22 - fVar15 * fVar21) * fVar15 - fVar20)) *
                               fVar15 - fVar18) + 1.0);
  fVar7 = fVar7 * (fVar17 * ((fVar19 + fVar17 * ((fVar22 - fVar17 * fVar21) * fVar17 - fVar20)) *
                             fVar17 - fVar18) + 1.0);
  fVar12 = fVar12 * (fVar24 * ((fVar6 + fVar24 * ((fVar10 - fVar24 * fVar8) * fVar24 - fVar9)) *
                               fVar24 - fVar4) + 1.0);
  fVar11 = fVar16 * fVar14;
  param_1[1] = (ulong)(uint)-(fVar16 * fVar14);
  *param_1 = CONCAT44(fVar7 * fVar12,fVar7 * fVar13);
  param_1[3] = (ulong)(uint)(fVar3 * fVar7);
  param_1[2] = CONCAT44(fVar5 * fVar13 + fVar11 * fVar3 * fVar12,
                        fVar3 * fVar13 * fVar11 - fVar5 * fVar12);
  uVar2 = DAT_04102218;
  uVar1 = DAT_04102210;
  param_1[5] = (ulong)(uint)(fVar5 * fVar7);
  param_1[4] = CONCAT44(fVar5 * fVar12 * fVar11 - fVar3 * fVar13,
                        fVar3 * fVar12 + fVar11 * fVar5 * fVar13);
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  return;
}

