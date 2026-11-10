
float FUN_00330ac0(float param_1,float param_2,long param_3)

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
  
  param_1 = param_1 * param_2;
  fVar1 = param_1 / *(float *)(param_3 + 0x2c);
  fVar3 = *(float *)PTR_Float1Divided2Pi_04bcedd8;
  fVar2 = param_1 / *(float *)(param_3 + 0x30);
  fVar4 = -*(float *)PTR_Float2Pi_04bcede0;
  fVar1 = fVar1 - (float)(int)(fVar1 * fVar3) * *(float *)PTR_Float2Pi_04bcede0;
  fVar6 = *(float *)PTR_FloatPiDivided2_04bcedc0;
  fVar5 = -fVar6;
  if (fVar1 <= fVar6) {
    if (fVar1 < fVar5) {
      fVar7 = -*(float *)PTR_FloatPi_04bcedc8;
      goto LAB_00330b3c;
    }
  }
  else {
    fVar7 = *(float *)PTR_FloatPi_04bcedc8;
LAB_00330b3c:
    fVar1 = fVar7 - fVar1;
  }
  fVar7 = param_1 / *(float *)(param_3 + 0x34);
  fVar2 = fVar2 + (float)(int)(fVar2 * fVar3) * fVar4;
  if (fVar2 <= fVar6) {
    if (fVar2 < fVar5) {
      fVar8 = -*(float *)PTR_FloatPi_04bcedc8;
      goto LAB_00330b84;
    }
  }
  else {
    fVar8 = *(float *)PTR_FloatPi_04bcedc8;
LAB_00330b84:
    fVar2 = fVar8 - fVar2;
  }
  param_1 = param_1 / *(float *)(param_3 + 0x38);
  fVar7 = fVar7 + (float)(int)(fVar7 * fVar3) * fVar4;
  if (fVar7 <= fVar6) {
    if (fVar7 < fVar5) {
      fVar8 = -*(float *)PTR_FloatPi_04bcedc8;
      goto LAB_00330bd0;
    }
  }
  else {
    fVar8 = *(float *)PTR_FloatPi_04bcedc8;
LAB_00330bd0:
    fVar7 = fVar8 - fVar7;
  }
  fVar8 = *(float *)PTR_SinCoefficients_04bcede8;
  fVar9 = *(float *)(PTR_SinCoefficients_04bcede8 + 4);
  fVar12 = *(float *)(PTR_SinCoefficients_04bcede8 + 0x10);
  fVar10 = *(float *)(PTR_SinCoefficients_04bcede8 + 8);
  fVar11 = *(float *)(PTR_SinCoefficients_04bcede8 + 0xc);
  param_1 = param_1 + (float)(int)(fVar3 * param_1) * fVar4;
  if (param_1 <= fVar6) {
    if (fVar5 <= param_1) goto LAB_00330c28;
    fVar3 = -*(float *)PTR_FloatPi_04bcedc8;
  }
  else {
    fVar3 = *(float *)PTR_FloatPi_04bcedc8;
  }
  param_1 = fVar3 - param_1;
LAB_00330c28:
  fVar4 = fVar7 * fVar7;
  fVar5 = fVar2 * fVar2;
  fVar6 = fVar1 * fVar1;
  fVar3 = param_1 * param_1;
  return *(float *)(param_3 + 0x1c) *
         fVar1 * (fVar6 * ((fVar11 + fVar6 * ((fVar9 - fVar6 * fVar8) * fVar6 - fVar10)) * fVar6 -
                          fVar12) + 1.0) +
         *(float *)(param_3 + 0x20) *
         fVar2 * (fVar5 * ((fVar11 + fVar5 * ((fVar9 - fVar5 * fVar8) * fVar5 - fVar10)) * fVar5 -
                          fVar12) + 1.0) +
         *(float *)(param_3 + 0x24) *
         fVar7 * (fVar4 * ((fVar11 + fVar4 * ((fVar9 - fVar4 * fVar8) * fVar4 - fVar10)) * fVar4 -
                          fVar12) + 1.0) +
         *(float *)(param_3 + 0x28) *
         param_1 * (fVar3 * ((fVar11 + fVar3 * ((fVar9 - fVar3 * fVar8) * fVar3 - fVar10)) * fVar3 -
                            fVar12) + 1.0);
}

