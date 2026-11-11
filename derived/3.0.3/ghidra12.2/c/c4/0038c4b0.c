
float FUN_0038c4b0(float param_1,float param_2,uint *param_3)

{
  byte *pbVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  uint *puVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar4 = (ulong)(ushort)*param_3;
  if (uVar4 == 0) {
    return param_2;
  }
  puVar5 = param_3;
  while( true ) {
    puVar5 = puVar5 + 1;
    pbVar1 = (byte *)((long)param_3 + (ulong)*puVar5);
    fVar10 = *(float *)(pbVar1 + 0x10);
    fVar11 = *(float *)(pbVar1 + 0x14);
    bVar2 = true;
    bVar3 = false;
    if (fVar10 <= param_1) {
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar10 + fVar11) && !NAN(param_1)) {
        bVar2 = fVar10 + fVar11 < param_1;
        bVar3 = false;
      }
    }
    if (bVar2 == bVar3) break;
    uVar4 = uVar4 - 1;
    if (uVar4 == 0) {
      return param_2;
    }
  }
  param_1 = param_1 - fVar10;
  fVar10 = *(float *)(pbVar1 + 8);
  fVar9 = param_1 / fVar11;
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  fVar6 = fVar11;
  if (param_1 <= fVar11) {
    fVar6 = param_1;
  }
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  fVar13 = 1.0;
  if (fVar9 <= 1.0) {
    fVar13 = fVar9;
  }
  if (0x12 < *pbVar1) {
                    /* WARNING: Subroutine does not return */
    nn::detail::UnexpectedDefaultImpl();
  }
  fVar12 = *(float *)(pbVar1 + 0xc) - fVar10;
  fVar9 = 0.0;
  switch(*pbVar1) {
  case 0:
    return fVar10 + fVar13 * fVar12;
  case 1:
    fVar11 = cosf(*(float *)PTR_FloatPi_04bcee68 * 0.5 * fVar13);
    fVar10 = fVar10 - fVar11 * fVar12;
    break;
  case 2:
    fVar6 = sinf(*(float *)PTR_FloatPi_04bcee68 * 0.5 * fVar13);
    goto LAB_0038c6b4;
  case 3:
    fVar11 = cosf(*(float *)PTR_FloatPi_04bcee68 * fVar13);
    fVar11 = fVar11 + -1.0;
    goto LAB_0038c618;
  case 4:
    return fVar10 + fVar13 * fVar12 * fVar13 * fVar13;
  case 5:
    fVar13 = fVar13 + -1.0;
    fVar11 = fVar13 * fVar13;
    goto LAB_0038c6ac;
  case 6:
    fVar6 = fVar6 / (fVar11 * 0.5);
    if (1.0 <= fVar6) {
      fVar6 = fVar6 + -2.0;
      fVar11 = fVar6 * fVar6;
LAB_0038c94c:
      return fVar10 + (fVar6 * fVar11 + 2.0) * fVar12 * 0.5;
    }
    fVar11 = fVar6 * fVar12 * 0.5;
    goto LAB_0038c6f8;
  case 7:
    fVar6 = fVar6 / fVar11;
    fVar6 = fVar6 * fVar6 * fVar6 * fVar6 * fVar6;
    goto LAB_0038c6b4;
  case 8:
    fVar13 = fVar6 / fVar11 + -1.0;
    fVar11 = fVar13 * fVar13 * fVar13 * fVar13;
LAB_0038c6ac:
    fVar6 = fVar13 * fVar11 + 1.0;
LAB_0038c6b4:
    return fVar10 + fVar6 * fVar12;
  case 9:
    fVar6 = fVar6 / (fVar11 * 0.5);
    if (1.0 <= fVar6) {
      fVar6 = fVar6 + -2.0;
      fVar11 = fVar6 * fVar6 * fVar6 * fVar6;
      goto LAB_0038c94c;
    }
    fVar11 = fVar6 * fVar6 * fVar6 * fVar12 * 0.5;
LAB_0038c6f8:
    return fVar10 + fVar6 * fVar6 * fVar11;
  case 10:
    fVar6 = fVar6 / fVar11;
    fVar12 = fVar6 * fVar6 * fVar12;
    fVar11 = fVar6 * 2.70158 + -1.70158;
    goto LAB_0038c9a4;
  case 0xb:
    fVar11 = fVar6 / fVar11 + -1.0;
    return fVar10 + ((fVar11 * 2.70158 + 1.70158) * fVar11 * fVar11 + 1.0) * fVar12;
  case 0xc:
    fVar6 = fVar6 / (fVar11 * 0.5);
    if (1.0 <= fVar6) {
      fVar12 = fVar12 * 0.5;
      fVar6 = fVar6 + -2.0;
      fVar11 = (fVar6 * 3.5949094 + 2.5949094) * fVar6 * fVar6 + 2.0;
    }
    else {
      fVar12 = fVar12 * 0.5;
      fVar11 = fVar6 * fVar6 * (fVar6 * 3.5949094 + -2.5949094);
    }
    goto LAB_0038c9a4;
  case 0xd:
    if (fVar6 == 0.0) {
      return fVar10;
    }
    if (fVar6 / fVar11 != 1.0) {
      fVar9 = fVar6 / fVar11 + -1.0;
      dVar8 = exp2((double)fVar9 * 10.0);
      dVar7 = sin((((double)*(float *)PTR_FloatPi_04bcee68 + (double)*(float *)PTR_FloatPi_04bcee68)
                  * (double)(fVar11 * 0.3 * -0.25 + fVar11 * fVar9)) / (double)(fVar11 * 0.3));
      return fVar10 - (float)(dVar8 * (double)fVar12 * dVar7);
    }
LAB_0038c9d8:
    return fVar12 + fVar10;
  case 0xe:
    if (fVar6 == 0.0) {
      return fVar10;
    }
    fVar6 = fVar6 / fVar11;
    if (fVar6 == 1.0) goto LAB_0038c9d8;
    dVar8 = exp2((double)fVar6 * -10.0);
    dVar7 = sin((((double)*(float *)PTR_FloatPi_04bcee68 + (double)*(float *)PTR_FloatPi_04bcee68) *
                (double)(fVar11 * 0.3 * -0.25 + fVar11 * fVar6)) / (double)(fVar11 * 0.3));
    fVar10 = fVar10 + (float)(dVar8 * dVar7) * fVar12;
    break;
  case 0xf:
    if (fVar6 == 0.0) {
      return fVar10;
    }
    fVar6 = fVar6 / (fVar11 * 0.5);
    if (fVar6 == 2.0) goto LAB_0038c9d8;
    fVar9 = fVar11 * 0.3 * 1.5;
    fVar13 = fVar6 + -1.0;
    if (1.0 <= fVar6) {
      dVar8 = exp2((double)fVar13 * -10.0);
      fVar10 = fVar12 + fVar10;
      fVar12 = fVar12 * (float)dVar8 * 0.5;
      dVar8 = sin((((double)*(float *)PTR_FloatPi_04bcee68 + (double)*(float *)PTR_FloatPi_04bcee68)
                  * (double)(fVar13 * fVar11 - fVar9 * 0.25)) / (double)fVar9);
      fVar6 = (float)dVar8;
      goto LAB_0038c6b4;
    }
    dVar8 = exp2((double)fVar13 * 10.0);
    fVar12 = fVar12 * (float)dVar8;
    dVar8 = sin((((double)*(float *)PTR_FloatPi_04bcee68 + (double)*(float *)PTR_FloatPi_04bcee68) *
                (double)(fVar13 * fVar11 - fVar9 * 0.25)) / (double)fVar9);
    fVar11 = (float)dVar8;
LAB_0038c618:
    fVar12 = fVar12 * -0.5;
LAB_0038c9a4:
    return fVar10 + fVar11 * fVar12;
  default:
    goto switchD_0038c57c_caseD_10;
  }
  fVar9 = fVar12 + fVar10;
switchD_0038c57c_caseD_10:
  return fVar9;
}

