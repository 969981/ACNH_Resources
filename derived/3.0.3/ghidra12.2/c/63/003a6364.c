
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003a6364(float param_1,long param_2,long param_3,uint *param_4,int param_5)

{
  byte bVar1;
  undefined1 auVar2 [16];
  long lVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  
  uVar16 = *(undefined8 *)(param_4 + 10);
  uVar15 = *(undefined8 *)(param_4 + 8);
  pfVar6 = (float *)(param_3 + (long)param_5 * 0x50);
  pfVar5 = pfVar6 + 0x11;
  fVar7 = *pfVar5;
  if (fVar7 == 0.0) {
    lVar3 = param_3 + (long)param_5 * 0x50;
    *(undefined8 *)(lVar3 + 0x28) = uVar16;
    *(undefined8 *)(lVar3 + 0x20) = uVar15;
    bVar1 = *(byte *)(param_2 + 0xc);
    goto joined_r0x003a6720;
  }
  lVar3 = param_3 + (long)param_5 * 0x50;
  uVar25 = *(undefined8 *)(lVar3 + 0x20);
  fVar30 = (float)uVar25;
  fVar8 = (float)uVar15 * fVar30;
  fVar28 = (float)((ulong)uVar15 >> 0x20);
  fVar31 = (float)((ulong)uVar25 >> 0x20);
  fVar9 = fVar28 * fVar31;
  fVar32 = (float)*(undefined8 *)(lVar3 + 0x28);
  fVar11 = (float)uVar16 * fVar32;
  fVar29 = (float)((ulong)uVar16 >> 0x20);
  fVar33 = (float)((ulong)*(undefined8 *)(lVar3 + 0x28) >> 0x20);
  fVar10 = fVar29 * fVar33;
  auVar14._4_4_ = fVar9;
  auVar14._0_4_ = fVar8;
  auVar14._8_4_ = fVar11;
  auVar14._12_4_ = fVar10;
  auVar2._4_4_ = fVar9;
  auVar2._0_4_ = fVar8;
  auVar2._8_4_ = fVar11;
  auVar2._12_4_ = fVar10;
  auVar14 = NEON_ext(auVar14,auVar2,8,1);
  fVar9 = auVar14._0_4_ + fVar8 + auVar14._4_4_ + fVar9;
  fVar8 = fVar9;
  if (fVar9 < 0.0) {
    fVar8 = -fVar9;
  }
  if (0.0 <= fVar8) {
    if (fVar8 <= 0.70710677) {
      fVar12 = 1.0 - fVar8 * fVar8;
      fVar11 = *(float *)PTR_FloatPiDivided2_04bcedc0;
      fVar10 = SQRT(fVar12);
      if (NAN(fVar10)) {
        fVar10 = sqrtf(fVar12);
      }
      fVar10 = fVar8 / fVar10;
      goto LAB_003a656c;
    }
    fVar10 = 1.0 - fVar8 * fVar8;
    fVar11 = SQRT(fVar10);
    if (NAN(fVar11)) {
      fVar11 = sqrtf(fVar10);
    }
    fVar11 = fVar11 / fVar8;
    fVar10 = fVar11 * fVar11;
    fVar11 = fVar11 * (fVar10 * ((*(float *)(PTR_AtanCoefficients_04bcedd0 + 0x18) +
                                 fVar10 * ((*(float *)(PTR_AtanCoefficients_04bcedd0 + 0x10) +
                                           fVar10 * ((*(float *)(PTR_AtanCoefficients_04bcedd0 + 8)
                                                     + fVar10 * (*(float *)
                                                  PTR_AtanCoefficients_04bcedd0 * fVar10 -
                                                  *(float *)(PTR_AtanCoefficients_04bcedd0 + 4))) *
                                                  fVar10 - *(float *)(PTR_AtanCoefficients_04bcedd0
                                                                     + 0xc))) * fVar10 -
                                          *(float *)(PTR_AtanCoefficients_04bcedd0 + 0x14))) *
                                 fVar10 - *(float *)(PTR_AtanCoefficients_04bcedd0 + 0x1c)) + 1.0);
  }
  else {
    fVar10 = 1.0 - fVar8 * fVar8;
    if (-0.70710677 <= fVar8) {
      fVar12 = SQRT(fVar10);
      fVar11 = *(float *)PTR_FloatPiDivided2_04bcedc0;
      if (NAN(fVar12)) {
        fVar12 = sqrtf(fVar10);
      }
      fVar12 = -fVar8 / fVar12;
      fVar10 = fVar12 * fVar12;
      fVar11 = fVar11 + fVar12 * (fVar10 * ((*(float *)(PTR_AtanCoefficients_04bcedd0 + 0x18) +
                                            fVar10 * ((*(float *)(PTR_AtanCoefficients_04bcedd0 +
                                                                 0x10) +
                                                      fVar10 * ((*(float *)(
                                                  PTR_AtanCoefficients_04bcedd0 + 8) +
                                                  fVar10 * (*(float *)PTR_AtanCoefficients_04bcedd0
                                                            * fVar10 -
                                                           *(float *)(PTR_AtanCoefficients_04bcedd0
                                                                     + 4))) * fVar10 -
                                                  *(float *)(PTR_AtanCoefficients_04bcedd0 + 0xc)))
                                                  * fVar10 -
                                                  *(float *)(PTR_AtanCoefficients_04bcedd0 + 0x14)))
                                            * fVar10 -
                                           *(float *)(PTR_AtanCoefficients_04bcedd0 + 0x1c)) + 1.0);
    }
    else {
      fVar12 = SQRT(fVar10);
      fVar11 = *(float *)PTR_FloatPi_04bcedc8;
      if (NAN(fVar12)) {
        fVar12 = sqrtf(fVar10);
      }
      fVar10 = -fVar12 / fVar8;
LAB_003a656c:
      fVar12 = fVar10 * fVar10;
      fVar11 = fVar11 - fVar10 * (fVar12 * ((*(float *)(PTR_AtanCoefficients_04bcedd0 + 0x18) +
                                            fVar12 * ((*(float *)(PTR_AtanCoefficients_04bcedd0 +
                                                                 0x10) +
                                                      fVar12 * ((*(float *)(
                                                  PTR_AtanCoefficients_04bcedd0 + 8) +
                                                  fVar12 * (*(float *)PTR_AtanCoefficients_04bcedd0
                                                            * fVar12 -
                                                           *(float *)(PTR_AtanCoefficients_04bcedd0
                                                                     + 4))) * fVar12 -
                                                  *(float *)(PTR_AtanCoefficients_04bcedd0 + 0xc)))
                                                  * fVar12 -
                                                  *(float *)(PTR_AtanCoefficients_04bcedd0 + 0x14)))
                                            * fVar12 -
                                           *(float *)(PTR_AtanCoefficients_04bcedd0 + 0x1c)) + 1.0);
    }
  }
  fVar10 = param_1 / (fVar7 + param_1);
  fVar23 = *(float *)PTR_FloatPiDivided2_04bcedc0;
  fVar12 = *(float *)PTR_Float1Divided2Pi_04bcedd8;
  fVar19 = *(float *)PTR_Float2Pi_04bcede0;
  fVar7 = fVar11 - (float)(int)(fVar11 * fVar12) * fVar19;
  if (fVar7 <= fVar23) {
    fVar26 = *(float *)PTR_FloatPi_04bcedc8;
    if (fVar7 < -fVar23) {
      fVar7 = -fVar26 - fVar7;
    }
  }
  else {
    fVar26 = *(float *)PTR_FloatPi_04bcedc8;
    fVar7 = fVar26 - fVar7;
  }
  fVar18 = fVar7 * fVar7;
  fVar27 = *(float *)PTR_SinCoefficients_04bcede8;
  fVar17 = 1.0;
  if (fVar9 < 0.0) {
    fVar17 = -1.0;
  }
  fVar9 = (1.0 - fVar10) * fVar11;
  fVar9 = fVar9 - (float)(int)(fVar9 * fVar12) * fVar19;
  fVar11 = fVar10 * fVar11 - (float)(int)(fVar10 * fVar11 * fVar12) * fVar19;
  uVar13 = CONCAT44(fVar11,fVar9) ^
           (CONCAT44(fVar11,fVar9) ^ CONCAT44(fVar26 - fVar11,fVar26 - fVar9)) &
           CONCAT44(-(uint)(fVar23 < fVar11),-(uint)(fVar23 < fVar9));
  fVar9 = (float)(uVar13 >> 0x20);
  uVar13 = uVar13 ^ (uVar13 ^ CONCAT44(-fVar26 - fVar9,-fVar26 - (float)uVar13)) &
                    CONCAT44(-(uint)(fVar9 < -fVar23),-(uint)((float)uVar13 < -fVar23));
  fVar11 = (float)uVar13;
  fVar19 = fVar11 * fVar11;
  fVar12 = (float)(uVar13 >> 0x20);
  fVar26 = fVar12 * fVar12;
  fVar20 = (float)*(undefined8 *)(PTR_SinCoefficients_04bcede8 + 4);
  fVar21 = -(float)((ulong)*(undefined8 *)(PTR_SinCoefficients_04bcede8 + 4) >> 0x20);
  fVar24 = (float)*(undefined8 *)(PTR_SinCoefficients_04bcede8 + 0xc);
  uVar25 = NEON_fmov(0x3f800000,4);
  fVar22 = -(float)((ulong)*(undefined8 *)(PTR_SinCoefficients_04bcede8 + 0xc) >> 0x20);
  fVar23 = 1.0 / (fVar7 * (fVar18 * ((*(float *)(PTR_SinCoefficients_04bcede8 + 0xc) +
                                     fVar18 * ((*(float *)(PTR_SinCoefficients_04bcede8 + 4) -
                                               fVar18 * fVar27) * fVar18 -
                                              *(float *)(PTR_SinCoefficients_04bcede8 + 8))) *
                                     fVar18 - *(float *)(PTR_SinCoefficients_04bcede8 + 0x10)) + 1.0
                          ));
  fVar9 = fVar10 * fVar17;
  fVar7 = 1.0 - fVar10;
  if (fVar8 <= 1.0 - *(float *)PTR_FloatQuaternionEpsilon_04bd1768) {
    fVar9 = fVar23 * fVar17 * fVar12 * ((float)((ulong)uVar25 >> 0x20) +
                                       fVar26 * (fVar22 + fVar26 * (fVar24 + fVar26 * (fVar21 + 
                                                  fVar26 * (fVar20 - fVar26 * fVar27)))));
    fVar7 = fVar23 * fVar11 * ((float)uVar25 +
                              fVar19 * (fVar22 + fVar19 * (fVar24 + fVar19 * (fVar21 + fVar19 * (
                                                  fVar20 - fVar19 * fVar27)))));
  }
  *(float *)(lVar3 + 0x28) = fVar32 * fVar7 + (float)uVar16 * fVar9;
  *(float *)(lVar3 + 0x2c) = fVar33 * fVar7 + fVar29 * fVar9;
  *(float *)(lVar3 + 0x20) = fVar30 * fVar7 + (float)uVar15 * fVar9;
  *(float *)(lVar3 + 0x24) = fVar31 * fVar7 + fVar28 * fVar9;
  bVar1 = *(byte *)(param_2 + 0xc);
joined_r0x003a6720:
  if ((bVar1 & 1) == 0) {
    uVar15 = *(undefined8 *)(param_4 + 1);
    *(ulong *)(pfVar6 + 2) =
         CONCAT44(pfVar6[3] + param_1 * 0.0,pfVar6[2] + (float)param_4[3] * param_1);
    *(ulong *)pfVar6 =
         CONCAT44(pfVar6[1] + (float)((ulong)uVar15 >> 0x20) * param_1,
                  *pfVar6 + (float)uVar15 * param_1);
    param_3 = param_3 + (long)param_5 * 0x50;
    uVar4 = *(uint *)(param_3 + 0x40);
    fVar7 = *(float *)(param_3 + 0x10) + (float)*(undefined8 *)(param_4 + 4) * param_1;
    fVar8 = *(float *)(param_3 + 0x14) +
            (float)((ulong)*(undefined8 *)(param_4 + 4) >> 0x20) * param_1;
    fVar9 = *(float *)(param_3 + 0x18) + (float)param_4[6] * param_1;
    fVar10 = *(float *)(param_3 + 0x1c) + param_1 * 0.0;
    fVar11 = *pfVar5;
  }
  else {
    fVar7 = powf((float)param_4[1],param_1);
    fVar8 = powf((float)param_4[2],param_1);
    fVar9 = powf((float)param_4[3],param_1);
    fVar11 = *pfVar5;
    if (0.001 <= ABS(fVar11)) {
      uVar16 = *(undefined8 *)(pfVar6 + 2);
      uVar15 = *(undefined8 *)pfVar6;
    }
    else {
      uVar15 = _DAT_041029f0;
      uVar16 = _UNK_041029f8;
    }
    *(ulong *)(pfVar6 + 2) = CONCAT44((float)((ulong)uVar16 >> 0x20) * 0.0,fVar9 * (float)uVar16);
    *(ulong *)pfVar6 = CONCAT44(fVar8 * (float)((ulong)uVar15 >> 0x20),fVar7 * (float)uVar15);
    param_3 = param_3 + (long)param_5 * 0x50;
    uVar4 = *(uint *)(param_3 + 0x40);
    fVar7 = (float)*(undefined8 *)(param_3 + 0x10) + (float)*(undefined8 *)(param_4 + 4) * param_1;
    fVar8 = (float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20) +
            (float)((ulong)*(undefined8 *)(param_4 + 4) >> 0x20) * param_1;
    fVar9 = (float)*(undefined8 *)(param_3 + 0x18) + (float)param_4[6] * param_1;
    fVar10 = (float)((ulong)*(undefined8 *)(param_3 + 0x18) >> 0x20) + param_1 * 0.0;
  }
  *(ulong *)(param_3 + 0x18) = CONCAT44(fVar10,fVar9);
  *(ulong *)(param_3 + 0x10) = CONCAT44(fVar8,fVar7);
  *(uint *)(param_3 + 0x40) = uVar4 | *param_4 ^ 0xffffffff;
  *pfVar5 = fVar11 + param_1;
  return;
}

