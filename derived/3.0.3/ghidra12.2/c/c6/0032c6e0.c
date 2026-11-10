
void FUN_0032c6e0(float param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  bool bVar1;
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
  
  param_1 = param_1 - (float)(int)(*(float *)PTR_Float1Divided2Pi_04bcedd8 * param_1) *
                      *(float *)PTR_Float2Pi_04bcede0;
  if (param_1 <= *(float *)PTR_FloatPiDivided2_04bcedc0) {
    bVar1 = -*(float *)PTR_FloatPiDivided2_04bcedc0 <= param_1;
    fVar8 = *(float *)PTR_CosCoefficients_04bcedf0;
    fVar9 = *(float *)(PTR_CosCoefficients_04bcedf0 + 4);
    fVar10 = *(float *)(PTR_CosCoefficients_04bcedf0 + 8);
    fVar11 = *(float *)(PTR_CosCoefficients_04bcedf0 + 0xc);
    fVar12 = *(float *)(PTR_CosCoefficients_04bcedf0 + 0x10);
    fVar7 = -1.0;
    if (bVar1) {
      fVar7 = 1.0;
    }
    fVar5 = -*(float *)PTR_FloatPi_04bcedc8 - param_1;
    if (bVar1) {
      fVar5 = param_1;
    }
  }
  else {
    fVar7 = -1.0;
    fVar12 = *(float *)(PTR_CosCoefficients_04bcedf0 + 0x10);
    fVar8 = *(float *)PTR_CosCoefficients_04bcedf0;
    fVar9 = *(float *)(PTR_CosCoefficients_04bcedf0 + 4);
    fVar10 = *(float *)(PTR_CosCoefficients_04bcedf0 + 8);
    fVar11 = *(float *)(PTR_CosCoefficients_04bcedf0 + 0xc);
    fVar5 = *(float *)PTR_FloatPi_04bcedc8 - param_1;
  }
  fVar6 = fVar5 * fVar5;
  fVar4 = (float)param_4[1];
  fVar3 = (float)((ulong)*param_4 >> 0x20);
  fVar2 = (float)*param_4;
  fVar7 = fVar7 * (fVar6 * ((fVar11 + fVar6 * ((fVar9 - fVar6 * fVar8) * fVar6 - fVar10)) * fVar6 -
                           fVar12) + 1.0);
  fVar9 = fVar5 * fVar5;
  fVar8 = 1.0 - fVar7;
  fVar5 = fVar5 * (fVar9 * ((*(float *)(PTR_SinCoefficients_04bcede8 + 0xc) +
                            fVar9 * ((*(float *)(PTR_SinCoefficients_04bcede8 + 4) -
                                     fVar9 * *(float *)PTR_SinCoefficients_04bcede8) * fVar9 -
                                    *(float *)(PTR_SinCoefficients_04bcede8 + 8))) * fVar9 -
                           *(float *)(PTR_SinCoefficients_04bcede8 + 0x10)) + 1.0);
  fVar9 = (float)*param_3;
  fVar10 = (float)((ulong)*param_3 >> 0x20);
  fVar11 = (float)param_3[1];
  param_2[1] = CONCAT44(fVar9 * 0.0 + fVar10 * 0.0 + fVar11 * 0.0 + 0.0,
                        (fVar5 * fVar3 + fVar8 * fVar2 * fVar4) * fVar9 +
                        (fVar3 * fVar4 * fVar8 - fVar5 * fVar2) * fVar10 +
                        (fVar7 + fVar8 * fVar4 * fVar4) * fVar11 + 0.0);
  *param_2 = CONCAT44((fVar2 * fVar3 * fVar8 - fVar5 * fVar4) * fVar9 +
                      (fVar7 + fVar8 * fVar3 * fVar3) * fVar10 +
                      (fVar5 * fVar2 + fVar8 * fVar3 * fVar4) * fVar11 + 0.0,
                      (fVar7 + fVar8 * fVar2 * fVar2) * fVar9 +
                      (fVar5 * fVar4 + fVar8 * fVar2 * fVar3) * fVar10 +
                      (fVar2 * fVar4 * fVar8 - fVar5 * fVar3) * fVar11 + 0.0);
  return;
}

