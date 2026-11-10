
float FUN_00330e90(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
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
  
  fVar2 = *(float *)PTR_Float1Divided2Pi_04bcedd8;
  fVar3 = -*(float *)PTR_Float2Pi_04bcede0;
  fVar1 = param_1 * 1.6666666 -
          (float)(int)(param_1 * 1.6666666 * fVar2) * *(float *)PTR_Float2Pi_04bcede0;
  fVar8 = *(float *)PTR_FloatPiDivided2_04bcedc0;
  fVar7 = -fVar8;
  if (fVar1 <= fVar8) {
    if (fVar1 < fVar7) {
      fVar9 = -*(float *)PTR_FloatPi_04bcedc8;
      goto LAB_00330f08;
    }
  }
  else {
    fVar9 = *(float *)PTR_FloatPi_04bcedc8;
LAB_00330f08:
    fVar1 = fVar9 - fVar1;
  }
  fVar9 = param_2 * 1.6666666 + (float)(int)(param_2 * 1.6666666 * fVar2) * fVar3;
  if (fVar9 <= fVar8) {
    if (fVar9 < fVar7) {
      fVar10 = -*(float *)PTR_FloatPi_04bcedc8;
      goto LAB_00330f58;
    }
  }
  else {
    fVar10 = *(float *)PTR_FloatPi_04bcedc8;
LAB_00330f58:
    fVar9 = fVar10 - fVar9;
  }
  fVar10 = param_1 * 2.3809524 + (float)(int)(param_1 * 2.3809524 * fVar2) * fVar3;
  if (fVar10 <= fVar8) {
    if (fVar10 < fVar7) {
      fVar11 = -*(float *)PTR_FloatPi_04bcedc8;
      goto LAB_00330fa8;
    }
  }
  else {
    fVar11 = *(float *)PTR_FloatPi_04bcedc8;
LAB_00330fa8:
    fVar10 = fVar11 - fVar10;
  }
  fVar11 = param_2 * 2.3809524 + (float)(int)(param_2 * 2.3809524 * fVar2) * fVar3;
  if (fVar11 <= fVar8) {
    if (fVar11 < fVar7) {
      fVar12 = -*(float *)PTR_FloatPi_04bcedc8;
      goto LAB_00330ff8;
    }
  }
  else {
    fVar12 = *(float *)PTR_FloatPi_04bcedc8;
LAB_00330ff8:
    fVar11 = fVar12 - fVar11;
  }
  fVar12 = param_1 * 4.347826 + (float)(int)(param_1 * 4.347826 * fVar2) * fVar3;
  if (fVar12 <= fVar8) {
    if (fVar12 < fVar7) {
      fVar13 = -*(float *)PTR_FloatPi_04bcedc8;
      goto LAB_00331048;
    }
  }
  else {
    fVar13 = *(float *)PTR_FloatPi_04bcedc8;
LAB_00331048:
    fVar12 = fVar13 - fVar12;
  }
  fVar13 = param_2 * 4.347826 + (float)(int)(param_2 * 4.347826 * fVar2) * fVar3;
  if (fVar13 <= fVar8) {
    if (fVar13 < fVar7) {
      fVar14 = -*(float *)PTR_FloatPi_04bcedc8;
      goto LAB_00331098;
    }
  }
  else {
    fVar14 = *(float *)PTR_FloatPi_04bcedc8;
LAB_00331098:
    fVar13 = fVar14 - fVar13;
  }
  fVar14 = param_1 * 6.6666665 + (float)(int)(param_1 * 6.6666665 * fVar2) * fVar3;
  if (fVar14 <= fVar8) {
    if (fVar14 < fVar7) {
      fVar15 = -*(float *)PTR_FloatPi_04bcedc8;
      goto LAB_003310f0;
    }
  }
  else {
    fVar15 = *(float *)PTR_FloatPi_04bcedc8;
LAB_003310f0:
    fVar14 = fVar15 - fVar14;
  }
  fVar15 = *(float *)PTR_SinCoefficients_04bcede8;
  fVar16 = *(float *)(PTR_SinCoefficients_04bcede8 + 4);
  fVar19 = *(float *)(PTR_SinCoefficients_04bcede8 + 0x10);
  fVar17 = *(float *)(PTR_SinCoefficients_04bcede8 + 8);
  fVar18 = *(float *)(PTR_SinCoefficients_04bcede8 + 0xc);
  fVar2 = param_2 * 6.6666665 + (float)(int)(param_2 * 6.6666665 * fVar2) * fVar3;
  if (fVar2 <= fVar8) {
    if (fVar7 <= fVar2) goto LAB_00331150;
    fVar3 = -*(float *)PTR_FloatPi_04bcedc8;
  }
  else {
    fVar3 = *(float *)PTR_FloatPi_04bcedc8;
  }
  fVar2 = fVar3 - fVar2;
LAB_00331150:
  fVar3 = fVar9 * fVar9;
  fVar4 = fVar1 * fVar1;
  fVar7 = fVar11 * fVar11;
  fVar5 = fVar10 * fVar10;
  fVar8 = fVar13 * fVar13;
  fVar6 = fVar12 * fVar12;
  fVar8 = fVar13 * (fVar8 * ((fVar18 + fVar8 * ((fVar16 - fVar8 * fVar15) * fVar8 - fVar17)) * fVar8
                            - fVar19) + 1.0) -
          fVar12 * (fVar6 * ((fVar18 + fVar6 * ((fVar16 - fVar6 * fVar15) * fVar6 - fVar17)) * fVar6
                            - fVar19) + 1.0);
  fVar12 = fVar14 * fVar14;
  fVar13 = fVar2 * fVar2;
  return (fVar9 * (fVar3 * ((fVar18 + fVar3 * ((fVar16 - fVar3 * fVar15) * fVar3 - fVar17)) * fVar3
                           - fVar19) + 1.0) -
         fVar1 * (fVar4 * ((fVar18 + fVar4 * ((fVar16 - fVar4 * fVar15) * fVar4 - fVar17)) * fVar4 -
                          fVar19) + 1.0)) * 4.0 +
         (fVar11 * (fVar7 * ((fVar18 + fVar7 * ((fVar16 - fVar7 * fVar15) * fVar7 - fVar17)) * fVar7
                            - fVar19) + 1.0) -
         fVar10 * (fVar5 * ((fVar18 + fVar5 * ((fVar16 - fVar5 * fVar15) * fVar5 - fVar17)) * fVar5
                           - fVar19) + 1.0)) * 3.0 + fVar8 + fVar8 +
         (fVar2 * (fVar13 * ((fVar18 + fVar13 * ((fVar16 - fVar13 * fVar15) * fVar13 - fVar17)) *
                             fVar13 - fVar19) + 1.0) -
         fVar14 * (fVar12 * ((fVar18 + fVar12 * ((fVar16 - fVar12 * fVar15) * fVar12 - fVar17)) *
                             fVar12 - fVar19) + 1.0)) * 1.5;
}

