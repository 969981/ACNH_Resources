
float FUN_00330cb0(float param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6)

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
  
  fVar3 = *(float *)PTR_Float1Divided2Pi_04bcedd8;
  fVar4 = -*(float *)PTR_Float2Pi_04bcede0;
  fVar1 = param_1 * param_5 -
          (float)(int)(param_1 * param_5 * fVar3) * *(float *)PTR_Float2Pi_04bcede0;
  fVar6 = *(float *)PTR_FloatPiDivided2_04bcedc0;
  fVar5 = -fVar6;
  if (fVar1 <= fVar6) {
    if (fVar1 < fVar5) {
      fVar7 = -*(float *)PTR_FloatPi_04bcedc8;
      goto LAB_00330d1c;
    }
  }
  else {
    fVar7 = *(float *)PTR_FloatPi_04bcedc8;
LAB_00330d1c:
    fVar1 = fVar7 - fVar1;
  }
  fVar7 = param_2 * param_5 + (float)(int)(param_2 * param_5 * fVar3) * fVar4;
  if (fVar7 <= fVar6) {
    if (fVar7 < fVar5) {
      fVar8 = -*(float *)PTR_FloatPi_04bcedc8;
      goto LAB_00330d60;
    }
  }
  else {
    fVar8 = *(float *)PTR_FloatPi_04bcedc8;
LAB_00330d60:
    fVar7 = fVar8 - fVar7;
  }
  fVar8 = param_3 * param_5 + (float)(int)(param_3 * param_5 * fVar3) * fVar4;
  if (fVar8 <= fVar6) {
    if (fVar8 < fVar5) {
      fVar9 = -*(float *)PTR_FloatPi_04bcedc8;
      goto LAB_00330dac;
    }
  }
  else {
    fVar9 = *(float *)PTR_FloatPi_04bcedc8;
LAB_00330dac:
    fVar8 = fVar9 - fVar8;
  }
  fVar9 = *(float *)PTR_SinCoefficients_04bcede8;
  fVar10 = *(float *)(PTR_SinCoefficients_04bcede8 + 4);
  fVar11 = *(float *)(PTR_SinCoefficients_04bcede8 + 8);
  fVar12 = *(float *)(PTR_SinCoefficients_04bcede8 + 0xc);
  fVar13 = *(float *)(PTR_SinCoefficients_04bcede8 + 0x10);
  fVar3 = param_4 * param_5 + (float)(int)(param_4 * param_5 * fVar3) * fVar4;
  if (fVar3 <= fVar6) {
    if (fVar5 <= fVar3) goto LAB_00330e00;
    fVar4 = -*(float *)PTR_FloatPi_04bcedc8;
  }
  else {
    fVar4 = *(float *)PTR_FloatPi_04bcedc8;
  }
  fVar3 = fVar4 - fVar3;
LAB_00330e00:
  fVar6 = fVar7 * fVar7;
  fVar2 = fVar1 * fVar1;
  fVar4 = fVar8 * fVar8;
  fVar5 = fVar3 * fVar3;
  return (((fVar7 * (fVar6 * ((fVar12 + fVar6 * ((fVar10 - fVar6 * fVar9) * fVar6 - fVar11)) * fVar6
                             - fVar13) + 1.0) -
           fVar1 * (fVar2 * ((fVar12 + fVar2 * ((fVar10 - fVar2 * fVar9) * fVar2 - fVar11)) * fVar2
                            - fVar13) + 1.0)) +
          fVar8 * (fVar4 * ((fVar12 + fVar4 * ((fVar10 - fVar4 * fVar9) * fVar4 - fVar11)) * fVar4 -
                           fVar13) + 1.0)) -
         fVar3 * (fVar5 * ((fVar12 + fVar5 * ((fVar10 - fVar5 * fVar9) * fVar5 - fVar11)) * fVar5 -
                          fVar13) + 1.0)) * param_6;
}

