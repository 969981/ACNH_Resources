
void FUN_0032fcc8(float param_1,undefined8 param_2,float *param_3,long param_4,float *param_5,
                 float *param_6)

{
  byte bVar1;
  long lVar2;
  long lVar3;
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
  
  *param_3 = *param_5;
  param_3[1] = param_5[1];
  *(ulong *)(param_3 + 2) = (ulong)(uint)param_5[2];
  *(undefined8 *)param_3 = *(undefined8 *)param_3;
  lVar2 = *(long *)(param_4 + 0x18);
  if (lVar2 == 0) {
    return;
  }
  fVar6 = *(float *)(lVar2 + 0x6dc);
  fVar13 = *param_5;
  fVar16 = param_5[1];
  fVar11 = param_5[2];
  fVar5 = 1.0;
  fVar14 = *(float *)(lVar2 + 0x6c0);
  fVar15 = *(float *)(lVar2 + 0x6c4);
  fVar10 = *(float *)(lVar2 + 0x6c8);
  fVar12 = *(float *)(lVar2 + 0x6d0);
  fVar8 = *(float *)(lVar2 + 0x6d4);
  fVar18 = *(float *)(lVar2 + 0x6d8);
  fVar9 = *(float *)(lVar2 + 0x6e0);
  fVar19 = *(float *)(lVar2 + 0x6e4);
  fVar20 = *(float *)(lVar2 + 0x6e8);
  fVar7 = *param_6;
  fVar17 = param_6[1];
  fVar21 = param_6[2];
  if (fVar6 != 0.0) {
    fVar5 = powf(fVar6,param_1);
  }
  fVar4 = param_1;
  if (fVar6 != 1.0) {
    fVar4 = (1.0 - fVar5) / (1.0 - fVar6);
  }
  lVar2 = *(long *)(param_4 + 0x10);
  if (*(char *)(lVar2 + 0x948) != '\0') {
    lVar3 = *(long *)(param_4 + 0x18);
    bVar1 = *(byte *)(lVar2 + 0x94b) >> 4;
    if ((bVar1 == 4) || (bVar1 == 2)) {
      fVar6 = (*(float *)(lVar3 + 0x720) + param_1) / *(float *)(lVar3 + 0x710) +
              *param_6 * *(float *)(lVar3 + 0x730);
      fVar5 = 0.5;
      if (0.5 <= fVar6 - (float)(int)fVar6) {
        fVar5 = -0.5;
      }
      fVar5 = *(float *)(lVar3 + 0x700) * fVar5;
      fVar5 = fVar5 + fVar5;
    }
    else {
      if (bVar1 != 0) goto LAB_00330274;
      fVar5 = *(float *)PTR_FloatPi_04bcee68 *
              ((*(float *)(lVar3 + 0x720) + param_1) / *(float *)(lVar3 + 0x710) +
              *param_6 * *(float *)(lVar3 + 0x730));
      fVar5 = fVar5 + fVar5;
      fVar5 = fVar5 - (float)(int)(*(float *)PTR_Float1Divided2Pi_04bcedd8 * fVar5) *
                      *(float *)PTR_Float2Pi_04bcede0;
      if (fVar5 <= *(float *)PTR_FloatPiDivided2_04bcedc0) {
        if (fVar5 < -*(float *)PTR_FloatPiDivided2_04bcedc0) {
          fVar6 = -*(float *)PTR_FloatPi_04bcedc8;
          goto LAB_0032fee4;
        }
      }
      else {
        fVar6 = *(float *)PTR_FloatPi_04bcedc8;
LAB_0032fee4:
        fVar5 = fVar6 - fVar5;
      }
      fVar6 = fVar5 * fVar5;
      fVar5 = *(float *)(lVar3 + 0x700) *
              fVar5 * (fVar6 * ((*(float *)((long)PTR_SinCoefficients_04bcede8 + 0xc) +
                                fVar6 * ((*(float *)((long)PTR_SinCoefficients_04bcede8 + 4) -
                                         fVar6 * *(float *)PTR_SinCoefficients_04bcede8) * fVar6 -
                                        *(float *)((long)PTR_SinCoefficients_04bcede8 + 8))) * fVar6
                               - *(float *)((long)PTR_SinCoefficients_04bcede8 + 0x10)) + 1.0);
    }
    fVar13 = fVar13 + *(float *)PTR_FloatPi_04bcee68 * fVar5;
  }
  if (*(char *)(lVar2 + 0x949) != '\0') {
    lVar3 = *(long *)(param_4 + 0x18);
    bVar1 = *(byte *)(lVar2 + 0x94c) >> 4;
    if ((bVar1 == 4) || (bVar1 == 2)) {
      fVar6 = (*(float *)(lVar3 + 0x724) + param_1) / *(float *)(lVar3 + 0x714) +
              *param_6 * *(float *)(lVar3 + 0x734);
      fVar5 = 0.5;
      if (0.5 <= fVar6 - (float)(int)fVar6) {
        fVar5 = -0.5;
      }
      fVar5 = *(float *)(lVar3 + 0x704) * fVar5;
      fVar5 = fVar5 + fVar5;
    }
    else {
      if (bVar1 != 0) goto LAB_00330274;
      fVar5 = *(float *)PTR_FloatPi_04bcee68 *
              ((*(float *)(lVar3 + 0x724) + param_1) / *(float *)(lVar3 + 0x714) +
              *param_6 * *(float *)(lVar3 + 0x734));
      fVar5 = fVar5 + fVar5;
      fVar5 = fVar5 - (float)(int)(*(float *)PTR_Float1Divided2Pi_04bcedd8 * fVar5) *
                      *(float *)PTR_Float2Pi_04bcede0;
      if (fVar5 <= *(float *)PTR_FloatPiDivided2_04bcedc0) {
        if (fVar5 < -*(float *)PTR_FloatPiDivided2_04bcedc0) {
          fVar6 = -*(float *)PTR_FloatPi_04bcedc8;
          goto LAB_0033000c;
        }
      }
      else {
        fVar6 = *(float *)PTR_FloatPi_04bcedc8;
LAB_0033000c:
        fVar5 = fVar6 - fVar5;
      }
      fVar6 = fVar5 * fVar5;
      fVar5 = *(float *)(lVar3 + 0x704) *
              fVar5 * (fVar6 * ((*(float *)((long)PTR_SinCoefficients_04bcede8 + 0xc) +
                                fVar6 * ((*(float *)((long)PTR_SinCoefficients_04bcede8 + 4) -
                                         fVar6 * *(float *)PTR_SinCoefficients_04bcede8) * fVar6 -
                                        *(float *)((long)PTR_SinCoefficients_04bcede8 + 8))) * fVar6
                               - *(float *)((long)PTR_SinCoefficients_04bcede8 + 0x10)) + 1.0);
    }
    fVar13 = fVar13 + *(float *)PTR_FloatPi_04bcee68 * fVar5;
  }
  if (*(char *)(lVar2 + 0x94a) == '\0') goto LAB_00330178;
  lVar3 = *(long *)(param_4 + 0x18);
  bVar1 = *(byte *)(lVar2 + 0x94d) >> 4;
  if ((bVar1 == 4) || (bVar1 == 2)) {
    fVar6 = (*(float *)(lVar3 + 0x728) + param_1) / *(float *)(lVar3 + 0x718) +
            *param_6 * *(float *)(lVar3 + 0x738);
    fVar5 = 0.5;
    if (0.5 <= fVar6 - (float)(int)fVar6) {
      fVar5 = -0.5;
    }
    fVar5 = *(float *)(lVar3 + 0x708) * fVar5;
    fVar5 = fVar5 + fVar5;
  }
  else {
    if (bVar1 != 0) {
LAB_00330274:
                    /* WARNING: Subroutine does not return */
      nn::detail::UnexpectedDefaultImpl();
    }
    fVar5 = *(float *)PTR_FloatPi_04bcee68 *
            ((*(float *)(lVar3 + 0x728) + param_1) / *(float *)(lVar3 + 0x718) +
            *param_6 * *(float *)(lVar3 + 0x738));
    fVar5 = fVar5 + fVar5;
    fVar5 = fVar5 - (float)(int)(*(float *)PTR_Float1Divided2Pi_04bcedd8 * fVar5) *
                    *(float *)PTR_Float2Pi_04bcede0;
    if (fVar5 <= *(float *)PTR_FloatPiDivided2_04bcedc0) {
      if (fVar5 < -*(float *)PTR_FloatPiDivided2_04bcedc0) {
        fVar6 = -*(float *)PTR_FloatPi_04bcedc8;
        goto LAB_00330134;
      }
    }
    else {
      fVar6 = *(float *)PTR_FloatPi_04bcedc8;
LAB_00330134:
      fVar5 = fVar6 - fVar5;
    }
    fVar6 = fVar5 * fVar5;
    fVar5 = *(float *)(lVar3 + 0x708) *
            fVar5 * (fVar6 * ((*(float *)((long)PTR_SinCoefficients_04bcede8 + 0xc) +
                              fVar6 * ((*(float *)((long)PTR_SinCoefficients_04bcede8 + 4) -
                                       fVar6 * *(float *)PTR_SinCoefficients_04bcede8) * fVar6 -
                                      *(float *)((long)PTR_SinCoefficients_04bcede8 + 8))) * fVar6 -
                             *(float *)((long)PTR_SinCoefficients_04bcede8 + 0x10)) + 1.0);
  }
  fVar11 = fVar11 + *(float *)PTR_FloatPi_04bcee68 * fVar5;
LAB_00330178:
  fVar12 = fVar12 + fVar9 * (fVar7 + fVar17) * 0.5;
  fVar8 = fVar8 + fVar19 * (fVar17 + fVar21) * 0.5;
  fVar18 = fVar18 + fVar20 * (fVar7 + fVar21) * 0.5;
  fVar6 = -fVar13;
  fVar5 = -fVar12;
  if (fVar21 < 0.5 || *(char *)(lVar2 + 0x8f5) == '\0') {
    fVar6 = fVar13;
    fVar5 = fVar12;
  }
  fVar9 = -fVar16;
  fVar12 = -fVar8;
  if (fVar7 < 0.5 || *(char *)(lVar2 + 0x8f6) == '\0') {
    fVar9 = fVar16;
    fVar12 = fVar8;
  }
  fVar13 = -fVar11;
  fVar8 = -fVar18;
  if (fVar17 < 0.5 || *(char *)(lVar2 + 0x8f7) == '\0') {
    fVar13 = fVar11;
    fVar8 = fVar18;
  }
  *param_3 = fVar6 + fVar14 * (fVar7 + -0.5) + fVar4 * fVar5;
  param_3[1] = fVar9 + fVar15 * (fVar17 + -0.5) + fVar4 * fVar12;
  *(ulong *)(param_3 + 2) = (ulong)(uint)(fVar13 + fVar10 * (fVar21 + -0.5) + fVar4 * fVar8);
  *(undefined8 *)param_3 = *(undefined8 *)param_3;
  return;
}

