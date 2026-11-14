
undefined8
FUN_019100f8(float param_1,float param_2,float *param_3,long *param_4,undefined8 *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  float *pfVar8;
  uint *puVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
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
  
  if ((((param_5 == (undefined8 *)0x0) || (*param_4 == 0)) ||
      (puVar9 = (uint *)*param_5, puVar9 == (uint *)0x0)) ||
     ((param_5[1] == 0 || (lVar11 = param_5[2], lVar11 == 0)))) {
    return 0;
  }
  uVar10 = *(uint *)(param_4 + 1);
  iVar3 = *(int *)((long)param_4 + 0xc);
  if (*(int *)(lVar11 + 8) != *(int *)(lVar11 + 0xc)) {
    fVar15 = (float)*(int *)(lVar11 + 8);
    fVar15 = fVar15 + fVar15;
    fVar16 = 4.2949673e+09;
    if (fVar15 <= 360.0) {
      fVar16 = fVar15 * 11930465.0;
    }
    uVar10 = uVar10 + (int)(long)fVar16;
  }
  uVar12 = (ulong)uVar10 << 1 | 1;
  uVar1 = *puVar9 ^ *puVar9 << 0xb;
  uVar4 = puVar9[3];
  uVar2 = puVar9[1] ^ puVar9[1] << 0xb;
  *puVar9 = puVar9[2];
  puVar9[1] = uVar4;
  uVar1 = uVar1 >> 8 ^ uVar4 >> 0x13 ^ uVar1 ^ uVar4;
  uVar2 = uVar2 >> 8 ^ uVar1 >> 0x13 ^ uVar2 ^ uVar1;
  puVar9[2] = uVar1;
  puVar9[3] = uVar2;
  fVar16 = *(float *)(param_4 + 2);
  iVar5 = 0;
  if (uVar12 != 0) {
    iVar5 = (int)(CONCAT44(uVar1,uVar2) / uVar12);
  }
  uVar10 = ((uVar2 - iVar5 * (int)uVar12) - uVar10) + iVar3;
  fVar18 = *param_3;
  uVar12 = (ulong)(uVar10 >> 0x18);
  pfVar8 = (float *)*param_4;
  fVar17 = (float)(uVar10 & 0xffffff) * 5.9604645e-08;
  fVar15 = fVar16 * ((float)(&DAT_04199798)[uVar12 * 4] +
                    fVar17 * (float)(&DAT_0419979c)[uVar12 * 4]);
  fVar19 = *pfVar8 + fVar15;
  bVar6 = true;
  if ((fVar18 - param_1 <= fVar19) && (bVar6 = false, !NAN(fVar18 + param_1) && !NAN(fVar19))) {
    bVar6 = fVar18 + param_1 < fVar19;
  }
  if (bVar6) {
    return 0;
  }
  fVar19 = param_3[2];
  fVar17 = fVar16 * ((float)(&DAT_041997a0)[uVar12 * 4] +
                    fVar17 * (float)(&DAT_041997a4)[uVar12 * 4]);
  fVar20 = fVar17 + pfVar8[2];
  bVar6 = true;
  if ((fVar19 - param_2 <= fVar20) && (bVar6 = false, !NAN(fVar19 + param_2) && !NAN(fVar20))) {
    bVar6 = fVar19 + param_2 < fVar20;
  }
  if (bVar6) {
    return 0;
  }
  fVar21 = pfVar8[1];
  fVar18 = *pfVar8 - fVar18;
  fVar19 = pfVar8[2] - fVar19;
  fVar22 = param_3[1];
  fVar20 = param_1;
  if (fVar15 != 0.0) {
    fVar23 = fVar17 / fVar15;
    fVar25 = fVar19 - fVar18 * fVar23;
    if (fVar23 < 0.0) {
      fVar13 = fVar25 + param_1 * fVar23;
      fVar24 = -param_2;
      bVar6 = false;
      bVar7 = true;
      if (fVar24 <= fVar13) {
        bVar6 = false;
        bVar7 = true;
        if (!NAN(fVar13) && !NAN(param_2)) {
          bVar6 = fVar13 == param_2;
          bVar7 = param_2 <= fVar13;
        }
      }
      if (!bVar7 || bVar6) {
        fVar24 = fVar13;
      }
      else {
        fVar20 = (fVar24 - fVar25) / fVar23;
        bVar6 = false;
        bVar7 = true;
        if (-param_1 <= fVar20) {
          bVar6 = false;
          bVar7 = true;
          if (!NAN(fVar20) && !NAN(param_1)) {
            bVar6 = fVar20 == param_1;
            bVar7 = param_1 <= fVar20;
          }
        }
        if (bVar7 && !bVar6) {
          return 0;
        }
      }
      goto LAB_0191027c;
    }
    if (0.0 < fVar23) {
      fVar24 = fVar25 - param_1 * fVar23;
      bVar6 = false;
      bVar7 = true;
      if (-param_2 <= fVar24) {
        bVar6 = false;
        bVar7 = true;
        if (!NAN(fVar24) && !NAN(param_2)) {
          bVar6 = fVar24 == param_2;
          bVar7 = param_2 <= fVar24;
        }
      }
      fVar20 = -param_1;
      if (bVar7 && !bVar6) {
        fVar20 = (param_2 - fVar25) / fVar23;
        bVar6 = false;
        bVar7 = true;
        if (-param_1 <= fVar20) {
          bVar6 = false;
          bVar7 = true;
          if (!NAN(fVar20) && !NAN(param_1)) {
            bVar6 = fVar20 == param_1;
            bVar7 = param_1 <= fVar20;
          }
        }
        fVar24 = param_2;
        if (bVar7 && !bVar6) {
          return 0;
        }
      }
      goto LAB_0191027c;
    }
  }
  fVar24 = fVar19;
  if (fVar15 <= 0.0) {
    fVar20 = -param_1;
  }
LAB_0191027c:
  fVar13 = 0.0;
  fVar14 = SQRT(fVar15 * fVar15 + 0.0 + fVar17 * fVar17);
  fVar23 = fVar15;
  fVar25 = fVar17;
  if (0.0 < fVar14) {
    fVar23 = SQRT(fVar24 * fVar24 + fVar20 * fVar20);
    fVar20 = *(float *)((long)param_4 + 0x14);
    if (fVar23 <= *(float *)((long)param_4 + 0x14)) {
      fVar20 = fVar23;
    }
    fVar23 = fVar15 * (fVar20 / fVar14);
    fVar25 = fVar17 * (fVar20 / fVar14);
  }
  puVar9 = (uint *)*param_5;
  uVar10 = *puVar9 ^ *puVar9 << 0xb;
  uVar1 = puVar9[3];
  *puVar9 = puVar9[1];
  puVar9[1] = puVar9[2];
  uVar10 = uVar10 >> 8 ^ uVar1 >> 0x13 ^ uVar10 ^ uVar1;
  puVar9[2] = uVar1;
  puVar9[3] = uVar10;
  if (0.0 < fVar14) {
    fVar14 = (fVar16 + ((float)(uVar10 >> 9 | 0x3f800000) + -1.0) *
                       (SQRT(fVar25 * fVar25 + fVar23 * fVar23) - fVar16)) / fVar14;
    fVar15 = fVar15 * fVar14;
    fVar13 = fVar14 * 0.0;
    fVar17 = fVar17 * fVar14;
  }
  fVar20 = param_3[2];
  fVar16 = param_3[1];
  pfVar8 = (float *)param_5[1];
  *pfVar8 = fVar18 + fVar15 + *param_3;
  pfVar8[1] = (fVar21 - fVar22) + fVar13 + fVar16;
  pfVar8[2] = fVar19 + fVar17 + fVar20;
  return 1;
}

