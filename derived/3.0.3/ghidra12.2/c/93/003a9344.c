
undefined8 FUN_003a9344(float *param_1,long param_2)

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
  
  fVar1 = *(float *)(param_2 + 0x20) * 0.5;
  fVar6 = *(float *)PTR_Float1Divided2Pi_04bcedd8;
  fVar9 = *(float *)PTR_FloatPiDivided2_04bcedc0;
  fVar7 = -*(float *)PTR_Float2Pi_04bcede0;
  fVar1 = fVar1 - (float)(int)(fVar6 * fVar1) * *(float *)PTR_Float2Pi_04bcede0;
  fVar8 = -fVar9;
  if (fVar1 <= fVar9) {
    if (fVar1 < fVar8) {
      fVar2 = -*(float *)PTR_FloatPi_04bcedc8;
      goto LAB_003a93b8;
    }
    fVar2 = 1.0;
  }
  else {
    fVar2 = *(float *)PTR_FloatPi_04bcedc8;
LAB_003a93b8:
    fVar1 = fVar2 - fVar1;
    fVar2 = -1.0;
  }
  fVar3 = *(float *)(param_2 + 0x24) * 0.5;
  fVar3 = fVar3 + (float)(int)(fVar6 * fVar3) * fVar7;
  if (fVar3 <= fVar9) {
    if (fVar3 < fVar8) {
      fVar4 = -*(float *)PTR_FloatPi_04bcedc8;
      goto LAB_003a941c;
    }
    fVar4 = 1.0;
  }
  else {
    fVar4 = *(float *)PTR_FloatPi_04bcedc8;
LAB_003a941c:
    fVar3 = fVar4 - fVar3;
    fVar4 = -1.0;
  }
  fVar5 = *(float *)(param_2 + 0x28) * 0.5;
  fVar10 = *(float *)(PTR_SinCoefficients_04bcede8 + 0x10);
  fVar16 = *(float *)PTR_SinCoefficients_04bcede8;
  fVar18 = *(float *)(PTR_SinCoefficients_04bcede8 + 4);
  fVar12 = *(float *)(PTR_CosCoefficients_04bcedf0 + 0x10);
  fVar13 = *(float *)(PTR_SinCoefficients_04bcede8 + 8);
  fVar11 = *(float *)(PTR_SinCoefficients_04bcede8 + 0xc);
  fVar17 = *(float *)PTR_CosCoefficients_04bcedf0;
  fVar19 = *(float *)(PTR_CosCoefficients_04bcedf0 + 4);
  fVar15 = *(float *)(PTR_CosCoefficients_04bcedf0 + 8);
  fVar14 = *(float *)(PTR_CosCoefficients_04bcedf0 + 0xc);
  fVar5 = fVar5 + (float)(int)(fVar6 * fVar5) * fVar7;
  if (fVar5 <= fVar9) {
    if (fVar8 <= fVar5) {
      fVar6 = 1.0;
      goto LAB_003a9498;
    }
    fVar6 = -*(float *)PTR_FloatPi_04bcedc8;
  }
  else {
    fVar6 = *(float *)PTR_FloatPi_04bcedc8;
  }
  fVar5 = fVar6 - fVar5;
  fVar6 = -1.0;
LAB_003a9498:
  fVar7 = fVar3 * fVar3;
  fVar8 = fVar1 * fVar1;
  fVar9 = fVar5 * fVar5;
  fVar4 = fVar4 * (fVar7 * ((fVar14 + fVar7 * ((fVar19 - fVar7 * fVar17) * fVar7 - fVar15)) * fVar7
                           - fVar12) + 1.0);
  fVar3 = fVar3 * (fVar7 * ((fVar11 + fVar7 * ((fVar18 - fVar7 * fVar16) * fVar7 - fVar13)) * fVar7
                           - fVar10) + 1.0);
  fVar2 = fVar2 * (fVar8 * ((fVar14 + fVar8 * ((fVar19 - fVar8 * fVar17) * fVar8 - fVar15)) * fVar8
                           - fVar12) + 1.0);
  fVar1 = fVar1 * (fVar8 * ((fVar11 + fVar8 * ((fVar18 - fVar8 * fVar16) * fVar8 - fVar13)) * fVar8
                           - fVar10) + 1.0);
  fVar5 = fVar5 * (fVar9 * ((fVar11 + fVar9 * ((fVar18 - fVar9 * fVar16) * fVar9 - fVar13)) * fVar9
                           - fVar10) + 1.0);
  fVar6 = fVar6 * (fVar9 * ((fVar14 + fVar9 * ((fVar19 - fVar9 * fVar17) * fVar9 - fVar15)) * fVar9
                           - fVar12) + 1.0);
  fVar7 = fVar1 * fVar4;
  fVar4 = fVar2 * fVar4;
  *param_1 = -(fVar2 * fVar3) * fVar5 + fVar6 * fVar7;
  param_1[1] = fVar7 * fVar5 + fVar6 * fVar2 * fVar3;
  param_1[2] = -(fVar1 * fVar3) * fVar6 + fVar5 * fVar4;
  param_1[3] = fVar1 * fVar3 * fVar5 + fVar6 * fVar4;
  return 1;
}

