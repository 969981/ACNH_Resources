
void FUN_0032e7f8(float param_1,float param_2,undefined8 param_3,float *param_4,long param_5,
                 float *param_6,float *param_7)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_60;
  float local_58;
  undefined1 local_54 [4];
  
  *param_4 = *param_6;
  param_4[1] = param_6[1];
  uVar7 = *(undefined8 *)param_4;
  fVar8 = param_6[2];
  *(ulong *)(param_4 + 2) = (ulong)(uint)fVar8;
  *(undefined8 *)param_4 = uVar7;
  lVar4 = *(long *)(param_5 + 0x18);
  if (lVar4 == 0) {
    return;
  }
  iVar1 = *(int *)(lVar4 + 0x20);
  if (iVar1 < 2) {
    *param_4 = *(float *)(lVar4 + 0x5b0) * (float)uVar7;
    param_4[1] = (float)((ulong)uVar7 >> 0x20) * *(float *)(*(long *)(param_5 + 0x18) + 0x5b4);
    fVar8 = fVar8 * *(float *)(*(long *)(param_5 + 0x18) + 0x5b8);
  }
  else {
    lVar5 = *(long *)(param_5 + 0x10);
    if (*(char *)(lVar5 + 0x924) == '\0') {
      uVar6 = *(undefined1 *)(lVar5 + 0x944);
LAB_0032e8e0:
      param_1 = param_2 / param_1;
    }
    else {
      uVar6 = *(undefined1 *)(lVar5 + 0x944);
      if (*(int *)(lVar5 + 0x93c) < 1) goto LAB_0032e8e0;
      fVar13 = (float)*(int *)(lVar5 + 0x93c);
      fVar8 = (float)NEON_ucvtf((uint)*(byte *)(lVar5 + 0x929));
      param_1 = fmodf(param_2 + fVar13 * *param_7 * fVar8,fVar13);
      param_1 = param_1 / fVar13;
    }
    local_54[0] = 0;
    local_58 = 0.0;
    local_60 = 0;
    FUN_0032c0c0(param_1,&local_60,local_54,lVar4 + 0x5b0,iVar1,uVar6);
    uVar7 = *(undefined8 *)param_4;
    *param_4 = (float)local_60 * (float)uVar7;
    param_4[1] = local_60._4_4_ * (float)((ulong)uVar7 >> 0x20);
    fVar8 = local_58 * (float)*(undefined8 *)(param_4 + 2);
  }
  uVar7 = *(undefined8 *)param_4;
  *(ulong *)(param_4 + 2) = (ulong)(uint)fVar8;
  *(undefined8 *)param_4 = uVar7;
  lVar4 = *(long *)(param_5 + 0x10);
  if (*(char *)(lVar4 + 0xa35) == '\0') {
    return;
  }
  lVar5 = *(long *)(param_5 + 0x18);
  bVar3 = *(byte *)(lVar4 + 0xa37) >> 4;
  fVar10 = *(float *)(lVar5 + 0x90);
  fVar11 = *(float *)(lVar5 + 0x98);
  fVar13 = *(float *)(lVar5 + 0x9c);
  fVar14 = *(float *)(lVar5 + 0xa0);
  fVar8 = *(float *)(lVar5 + 0xa4);
  fVar15 = *(float *)(lVar5 + 0xa8);
  fVar9 = *(float *)(lVar5 + 0xac);
  if (bVar3 == 2) {
    fVar12 = (float)*(undefined8 *)param_7;
    fVar14 = (fVar15 + param_2) / fVar11 + fVar14 * fVar12;
    fVar11 = 1.0;
    if (0.5 <= fVar14 - (float)(int)fVar14) {
      fVar11 = 0.0;
    }
    fVar10 = ABS(1.0 - fVar10 * fVar11);
    cVar2 = *(char *)(lVar4 + 0xa36);
  }
  else if (bVar3 == 1) {
    fVar12 = (float)*(undefined8 *)param_7;
    fVar11 = (fVar15 + param_2) / fVar11 + fVar14 * fVar12;
    fVar10 = ABS(1.0 - fVar10 * (fVar11 - (float)(int)fVar11));
    cVar2 = *(char *)(lVar4 + 0xa36);
  }
  else {
    if (bVar3 != 0) goto LAB_0032ec3c;
    fVar12 = (float)*(undefined8 *)param_7;
    fVar11 = *(float *)PTR_FloatPi_04bcee68 * ((fVar15 + param_2) / fVar11 + fVar14 * fVar12);
    fVar11 = fVar11 + fVar11;
    fVar11 = fVar11 - (float)(int)(*(float *)PTR_Float1Divided2Pi_04bcedd8 * fVar11) *
                      *(float *)PTR_Float2Pi_04bcede0;
    if (fVar11 <= *(float *)PTR_FloatPiDivided2_04bcedc0) {
      if (fVar11 < -*(float *)PTR_FloatPiDivided2_04bcedc0) {
        fVar14 = -*(float *)PTR_FloatPi_04bcedc8;
        goto LAB_0032ea78;
      }
      fVar14 = 1.0;
    }
    else {
      fVar14 = *(float *)PTR_FloatPi_04bcedc8;
LAB_0032ea78:
      fVar11 = fVar14 - fVar11;
      fVar14 = -1.0;
    }
    fVar11 = fVar11 * fVar11;
    fVar10 = fVar10 * (fVar14 * (fVar11 * ((*(float *)(PTR_CosCoefficients_04bcedf0 + 0xc) +
                                           fVar11 * ((*(float *)(PTR_CosCoefficients_04bcedf0 + 4) -
                                                     fVar11 * *(float *)PTR_CosCoefficients_04bcedf0
                                                     ) * fVar11 -
                                                    *(float *)(PTR_CosCoefficients_04bcedf0 + 8))) *
                                           fVar11 - *(float *)(PTR_CosCoefficients_04bcedf0 + 0x10))
                                + 1.0) + 1.0) * -0.5 + 1.0;
    cVar2 = *(char *)(lVar4 + 0xa36);
  }
  fVar11 = fVar10;
  if (cVar2 == '\0') goto LAB_0032ec10;
  if (bVar3 == 2) {
    fVar13 = (fVar9 + param_2) / fVar13 + fVar8 * fVar12;
    fVar8 = 1.0;
    if (0.5 <= fVar13 - (float)(int)fVar13) {
      fVar8 = 0.0;
    }
  }
  else {
    if (bVar3 != 1) {
      if (bVar3 != 0) {
LAB_0032ec3c:
                    /* WARNING: Subroutine does not return */
        nn::detail::UnexpectedDefaultImpl();
      }
      fVar8 = *(float *)PTR_FloatPi_04bcee68 * ((fVar9 + param_2) / fVar13 + fVar8 * fVar12);
      fVar8 = fVar8 + fVar8;
      fVar8 = fVar8 - (float)(int)(*(float *)PTR_Float1Divided2Pi_04bcedd8 * fVar8) *
                      *(float *)PTR_Float2Pi_04bcede0;
      if (fVar8 <= *(float *)PTR_FloatPiDivided2_04bcedc0) {
        if (fVar8 < -*(float *)PTR_FloatPiDivided2_04bcedc0) {
          fVar13 = -*(float *)PTR_FloatPi_04bcedc8;
          goto LAB_0032ebbc;
        }
        fVar13 = 1.0;
      }
      else {
        fVar13 = *(float *)PTR_FloatPi_04bcedc8;
LAB_0032ebbc:
        fVar8 = fVar13 - fVar8;
        fVar13 = -1.0;
      }
      fVar8 = fVar8 * fVar8;
      fVar11 = *(float *)(lVar5 + 0x94) *
               (fVar13 * (fVar8 * ((*(float *)(PTR_CosCoefficients_04bcedf0 + 0xc) +
                                   fVar8 * ((*(float *)(PTR_CosCoefficients_04bcedf0 + 4) -
                                            fVar8 * *(float *)PTR_CosCoefficients_04bcedf0) * fVar8
                                           - *(float *)(PTR_CosCoefficients_04bcedf0 + 8))) * fVar8
                                  - *(float *)(PTR_CosCoefficients_04bcedf0 + 0x10)) + 1.0) + 1.0) *
               -0.5 + 1.0;
      goto LAB_0032ec10;
    }
    fVar8 = (fVar9 + param_2) / fVar13 + fVar8 * fVar12;
    fVar8 = fVar8 - (float)(int)fVar8;
  }
  fVar11 = ABS(1.0 - *(float *)(lVar5 + 0x94) * fVar8);
LAB_0032ec10:
  *param_4 = fVar10 * (float)uVar7;
  param_4[1] = fVar11 * (float)((ulong)uVar7 >> 0x20);
  return;
}

