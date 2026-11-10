
undefined8
FUN_00329b4c(float param_1,ulong *param_2,ulong *param_3,long param_4,undefined8 param_5,
            undefined8 param_6,long param_7)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  lVar3 = *(long *)(param_4 + 0xa0);
  fVar4 = *(float *)(lVar3 + 0x888);
  fVar5 = *(float *)(lVar3 + 0x890);
  cVar2 = *(char *)(lVar3 + 0x881);
  fVar6 = *(float *)PTR_FloatPi_04bcee68;
  uVar1 = *(uint *)(param_4 + 0xac);
  *(uint *)(param_4 + 0xac) = uVar1 * 0x41c64e6d + 0x3039;
  if (cVar2 != '\0') {
    fVar5 = fVar6 * param_1 + fVar6 * param_1;
  }
  fVar5 = fVar5 + fVar4 * (float)uVar1 * 2.3283064e-10 + fVar4 * -0.5;
  fVar5 = fVar5 - (float)(int)(*(float *)PTR_Float1Divided2Pi_04bcedd8 * fVar5) *
                  *(float *)PTR_Float2Pi_04bcede0;
  if (fVar5 <= *(float *)PTR_FloatPiDivided2_04bcedc0) {
    if (-*(float *)PTR_FloatPiDivided2_04bcedc0 <= fVar5) {
      fVar4 = 1.0;
      goto LAB_00329c28;
    }
    fVar4 = -*(float *)PTR_FloatPi_04bcedc8;
  }
  else {
    fVar4 = *(float *)PTR_FloatPi_04bcedc8;
  }
  fVar5 = fVar4 - fVar5;
  fVar4 = -1.0;
LAB_00329c28:
  fVar6 = fVar5 * fVar5;
  fVar7 = *(float *)(lVar3 + 0x8a4);
  fVar8 = *(float *)(param_7 + 0x90);
  fVar5 = fVar5 * (fVar6 * ((*(float *)(PTR_SinCoefficients_04bcede8 + 0xc) +
                            fVar6 * ((*(float *)(PTR_SinCoefficients_04bcede8 + 4) -
                                     fVar6 * *(float *)PTR_SinCoefficients_04bcede8) * fVar6 -
                                    *(float *)(PTR_SinCoefficients_04bcede8 + 8))) * fVar6 -
                           *(float *)(PTR_SinCoefficients_04bcede8 + 0x10)) + 1.0);
  fVar4 = fVar4 * (fVar6 * ((*(float *)(PTR_CosCoefficients_04bcedf0 + 0xc) +
                            fVar6 * ((*(float *)(PTR_CosCoefficients_04bcedf0 + 4) -
                                     fVar6 * *(float *)PTR_CosCoefficients_04bcedf0) * fVar6 -
                                    *(float *)(PTR_CosCoefficients_04bcedf0 + 8))) * fVar6 -
                           *(float *)(PTR_CosCoefficients_04bcedf0 + 0x10)) + 1.0);
  param_2[1] = (ulong)(uint)(fVar4 * *(float *)(lVar3 + 0x8ac) * *(float *)(param_7 + 0x98));
  *param_2 = (ulong)(uint)(fVar5 * fVar7 * fVar8);
  fVar6 = *(float *)(param_7 + 0x6c);
  param_3[1] = (ulong)(uint)(fVar4 * fVar6);
  *param_3 = (ulong)(uint)(fVar5 * fVar6);
  return 1;
}

