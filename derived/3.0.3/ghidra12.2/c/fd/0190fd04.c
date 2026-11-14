
bool FUN_0190fd04(float param_1,float *param_2,long *param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  float *pfVar7;
  uint *puVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
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
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  if ((((param_4 == (undefined8 *)0x0) || (*param_3 == 0)) ||
      (puVar8 = (uint *)*param_4, puVar8 == (uint *)0x0)) || (param_4[1] == 0)) {
    return false;
  }
  lVar10 = param_4[2];
  if (lVar10 != 0) {
    uVar9 = *(uint *)(param_3 + 1);
    iVar3 = *(int *)((long)param_3 + 0xc);
    if (*(int *)(lVar10 + 8) != *(int *)(lVar10 + 0xc)) {
      fVar13 = (float)*(int *)(lVar10 + 8);
      fVar13 = fVar13 + fVar13;
      fVar15 = 4.2949673e+09;
      if (fVar13 <= 360.0) {
        fVar15 = fVar13 * 11930465.0;
      }
      uVar9 = uVar9 + (int)(long)fVar15;
    }
    uVar11 = (ulong)uVar9 << 1 | 1;
    uVar1 = *puVar8 ^ *puVar8 << 0xb;
    uVar4 = puVar8[3];
    uVar2 = puVar8[1] ^ puVar8[1] << 0xb;
    *puVar8 = puVar8[2];
    puVar8[1] = uVar4;
    uVar1 = uVar1 >> 8 ^ uVar4 >> 0x13 ^ uVar1 ^ uVar4;
    uVar2 = uVar2 >> 8 ^ uVar1 >> 0x13 ^ uVar2 ^ uVar1;
    puVar8[2] = uVar1;
    puVar8[3] = uVar2;
    fVar15 = *(float *)(param_3 + 2);
    iVar5 = 0;
    if (uVar11 != 0) {
      iVar5 = (int)(CONCAT44(uVar1,uVar2) / uVar11);
    }
    uVar9 = ((uVar2 - iVar5 * (int)uVar11) - uVar9) + iVar3;
    uVar11 = (ulong)(uVar9 >> 0x18);
    fVar13 = (float)(uVar9 & 0xffffff) * 5.9604645e-08;
    fVar16 = fVar15 * ((float)(&DAT_04199798)[uVar11 * 4] +
                      fVar13 * (float)(&DAT_0419979c)[uVar11 * 4]);
    fVar17 = fVar15 * ((float)(&DAT_041997a0)[uVar11 * 4] +
                      fVar13 * (float)(&DAT_041997a4)[uVar11 * 4]);
    fVar18 = SQRT(fVar16 * fVar16 + 0.0 + fVar17 * fVar17);
    fVar13 = fVar16;
    if (0.0 < fVar18) {
      fVar13 = fVar16 * (1.0 / fVar18);
    }
    if (fVar17 <= 0.0) {
      fVar15 = -fVar15;
    }
    pfVar7 = (float *)*param_3;
    fVar18 = 0.0;
    if (fVar13 < -0.0001 || 0.0001 < fVar13) {
      fVar18 = fVar16;
    }
    fVar16 = *param_2;
    if (fVar13 < -0.0001 || 0.0001 < fVar13) {
      fVar15 = fVar17;
    }
    fVar20 = fVar16 - (*pfVar7 + fVar18);
    fVar13 = param_2[2];
    fVar17 = fVar13 - (pfVar7[2] + fVar15);
    if (SQRT(fVar17 * fVar17 + fVar20 * fVar20) <= param_1) {
      fVar20 = *pfVar7 - fVar16;
      fVar17 = pfVar7[2] - fVar13;
      fVar22 = 0.0;
      if (fVar18 != 0.0) {
        fVar22 = fVar15 / fVar18;
      }
      fVar24 = fVar17 - fVar20 * fVar22;
      fVar21 = pfVar7[1];
      fVar19 = param_2[1];
      fVar23 = fVar22 * fVar22 + 1.0;
      fVar25 = (fVar22 + fVar22) * fVar24;
      fVar14 = fVar25 * fVar25 + (fVar24 * fVar24 - param_1 * param_1) * fVar23 * -4.0;
      fVar12 = SQRT(fVar14);
      if (NAN(fVar12)) {
        fVar12 = sqrtf(fVar14);
      }
      fVar14 = (fVar12 - fVar25) / (fVar23 + fVar23);
      fVar26 = fVar24 + fVar14 * fVar22;
      fVar12 = (-fVar25 - fVar12) / (fVar23 + fVar23);
      fVar24 = fVar24 + fVar12 * fVar22;
      if (fVar12 <= fVar14) {
        fVar23 = fVar26;
        fVar22 = fVar14;
      }
      else {
        fVar23 = fVar24;
        fVar22 = fVar12;
        fVar24 = fVar26;
        fVar12 = fVar14;
      }
      if ((0.0 <= fVar18) && (fVar24 = fVar23, fVar12 = fVar22, fVar18 == 0.0)) {
        fVar12 = 0.0;
        fVar24 = 0.0;
      }
      fVar23 = 0.0;
      fVar25 = SQRT(fVar18 * fVar18 + 0.0 + fVar15 * fVar15);
      fVar22 = fVar18;
      fVar14 = fVar15;
      if (0.0 < fVar25) {
        fVar22 = SQRT((fVar24 - fVar17) * (fVar24 - fVar17) + (fVar12 - fVar20) * (fVar12 - fVar20))
        ;
        fVar24 = *(float *)((long)param_3 + 0x14);
        if (fVar22 <= *(float *)((long)param_3 + 0x14)) {
          fVar24 = fVar22;
        }
        fVar22 = fVar18 * (fVar24 / fVar25);
        fVar14 = fVar15 * (fVar24 / fVar25);
      }
      puVar8 = (uint *)*param_4;
      fVar24 = *(float *)(param_3 + 2);
      uVar1 = puVar8[3];
      uVar9 = *puVar8 ^ *puVar8 << 0xb;
      *puVar8 = puVar8[1];
      puVar8[1] = puVar8[2];
      uVar9 = uVar9 >> 8 ^ uVar1 >> 0x13 ^ uVar9 ^ uVar1;
      puVar8[2] = uVar1;
      puVar8[3] = uVar9;
      if (0.0 < fVar25) {
        fVar25 = (fVar24 + ((float)(uVar9 >> 9 | 0x3f800000) + -1.0) *
                           (SQRT(fVar14 * fVar14 + fVar22 * fVar22) - fVar24)) / fVar25;
        fVar18 = fVar18 * fVar25;
        fVar23 = fVar25 * 0.0;
        fVar15 = fVar15 * fVar25;
      }
      fVar16 = fVar16 + fVar20 + fVar18;
      fVar19 = fVar19 + (fVar21 - fVar19) + fVar23;
      fVar13 = fVar13 + fVar17 + fVar15;
      bVar6 = !NAN(fVar13);
      if (bVar6 && (!NAN(fVar19) && !NAN(fVar16))) {
        pfVar7 = (float *)param_4[1];
        *pfVar7 = fVar16;
        pfVar7[1] = fVar19;
        pfVar7[2] = fVar13;
      }
      return bVar6 && (!NAN(fVar19) && !NAN(fVar16));
    }
  }
  return false;
}

